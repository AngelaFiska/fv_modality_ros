#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os
import math
import time
import numpy as np
from pathlib import Path

import rclpy
from rclpy.node import Node

from geometry_msgs.msg import PoseStamped
from sensor_msgs.msg import JointState
from moveit_msgs.srv import GetPositionIK

from pymoveit2 import MoveIt2
from pymoveit2.robots import ur as robot

import pyrealsense2 as rs
import cv2


# ========== Parameters ==========

SEED_DEG = [0.0, -90.0, 90.0, -90.0, -90.0, 0.0]   # IK initial seed (degrees)

# EE -> Camera transform (4x4), meters
T_EE_CAM = np.eye(4, dtype=float)
T_EE_CAM[0, 3] = 0.10   # Camera is 0.10 m along EE x-axis

# ✅ <-- Updated: fixed absolute save directory
SAVE_DIR = "/home/fv/workspace/depth"
os.makedirs(SAVE_DIR, exist_ok=True)

# Wait time after robot motion before capturing images
WAIT_AFTER_MOVE_SEC = 1.0


class CamPoseCaptureNode(Node):
    def __init__(self):
        super().__init__("cam_pose_capture_node")

        self.save_dir = SAVE_DIR
        self.frame_id = 0

        # === MoveIt2 init ===
        self.moveit2 = MoveIt2(
            node=self,
            joint_names=robot.joint_names(),
            base_link_name=robot.base_link_name(),
            end_effector_name=robot.end_effector_name(),
            group_name=robot.MOVE_GROUP_ARM,
        )

        self.moveit2.max_velocity = 0.1
        self.moveit2.max_acceleration = 0.1

        self._latest_js = None
        self.create_subscription(JointState, "/joint_states", self._js_cb, 10)

        self._ik_cli = self.create_client(GetPositionIK, "compute_ik")
        self._ik_cli.wait_for_service()

        # === RealSense init ===
        self.get_logger().info("Init RealSense pipeline...")
        self.pipeline = rs.pipeline()
        config = rs.config()
        config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)
        config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)

        self.pipeline.start(config)
        self.align = rs.align(rs.stream.color)

        self._warmup_realsense(num_frames=30, timeout_ms=200)

        self.get_logger().info("Waiting for initial joint_states...")
        while rclpy.ok() and self._latest_js is None:
            rclpy.spin_once(self, timeout_sec=0.1)

        self.get_logger().info("joint_states OK. Loading scan poses...")

        self.targets = self._load_scan_targets()
        self.get_logger().info(f"Loaded {len(self.targets)} scan targets.")

        if not self.targets:
            self.get_logger().warn("No scan targets found. Nothing to do.")
            self.pipeline.stop()
            return

        time.sleep(0.5)

        self.capture_all_views()

        self.get_logger().info("Capture finished, shutting down...")
        self.pipeline.stop()

    def _warmup_realsense(self, num_frames=30, timeout_ms=200):
        self.get_logger().info(
            f"Warming up RealSense: grabbing {num_frames} frames..."
        )
        for _ in range(num_frames):
            try:
                self.pipeline.wait_for_frames(timeout_ms=timeout_ms)
            except RuntimeError:
                continue
        self.get_logger().info("RealSense warm-up done.")

    def capture_all_views(self):
        seed_deg = SEED_DEG[:]

        for idx, tgt in enumerate(self.targets):
            pose_st = tgt["pose_tcp"]
            T_base_cam = tgt["T_base_cam"]

            js_sol = self._solve_ik_with_seed(pose_st, seed_deg)
            if js_sol is None:
                self.get_logger().warn(f"[{idx}] IK failed, skip this target.")
                continue

            name2pos = {n: p for n, p in zip(js_sol.name, js_sol.position)}
            seed_deg = [math.degrees(name2pos[n]) for n in robot.joint_names()]

            self.get_logger().info(
                f"[{idx}] Move to target, tcp_pos=({pose_st.pose.position.x:.3f}, "
                f"{pose_st.pose.position.y:.3f}, {pose_st.pose.position.z:.3f})"
            )

            ok = self._move_to_cfg(name2pos)
            if not ok:
                self.get_logger().warn(f"[{idx}] Motion failed, skip capture.")
                continue

            time.sleep(WAIT_AFTER_MOVE_SEC)

            ret = self.capture_depth_color_once()
            if ret is None:
                self.get_logger().warn(f"[{idx}] Capture failed, skip.")
                continue
            depth_img, color_bgr = ret

            self.save_frame(depth_img, color_bgr, T_base_cam)

        self.get_logger().info("All targets processed.")

    def _load_scan_targets(self):
        script_path = Path(__file__).resolve()
        pkg_root_installed = script_path.parent.parent
        config_dir_installed = pkg_root_installed / "config"
        pose_file_installed = config_dir_installed / "scan_poses.npy"

        ws_root = None
        for p in script_path.parents:
            if p.name == "ros_ur_driver":
                ws_root = p
                break

        pose_file_src = None
        if ws_root:
            pose_file_src = ws_root / "src" / "fv_realsense_nodes" / "config" / "scan_poses.npy"

        pose_file = None
        if pose_file_installed.exists():
            pose_file = pose_file_installed
            self.get_logger().info(f"Using installed scan_poses.npy: {pose_file}")
        elif pose_file_src and pose_file_src.exists():
            pose_file = pose_file_src
            self.get_logger().info(f"Using source scan_poses.npy: {pose_file}")
        else:
            self.get_logger().error(
                "scan_poses.npy not found.\n"
                f"  Tried installed: {pose_file_installed}\n"
                f"  Tried source   : {pose_file_src}"
            )
            return []

        arr = np.load(pose_file)
        if arr.ndim == 2 and arr.shape == (4, 4):
            arr = arr[None, :, :]
        if arr.ndim != 3 or arr.shape[1:] != (4, 4):
            self.get_logger().error(f"scan_poses.npy has invalid shape: {arr.shape}")
            return []

        T_tcp_cam = T_EE_CAM
        T_cam_tcp = np.linalg.inv(T_tcp_cam)

        targets = []
        frame_id = robot.base_link_name()

        for T_base_cam in arr:
            T_base_tcp = T_base_cam @ T_cam_tcp
            R = T_base_tcp[:3, :3]
            t = T_base_tcp[:3, 3]
            qx, qy, qz, qw = self._rot_to_quat(R)

            pose = PoseStamped()
            pose.header.frame_id = frame_id
            pose.pose.position.x = float(t[0])
            pose.pose.position.y = float(t[1])
            pose.pose.position.z = float(t[2])
            pose.pose.orientation.x = qx
            pose.pose.orientation.y = qy
            pose.pose.orientation.z = qz
            pose.pose.orientation.w = qw

            targets.append({
                "pose_tcp": pose,
                "T_base_cam": T_base_cam.astype(float),
            })

        return targets

    def save_frame(self, depth_image, color_bgr, T_base_cam):
        idx = self.frame_id
        self.frame_id += 1

        pose_path = os.path.join(self.save_dir, f"pose_{idx}.npy")
        depth_path = os.path.join(self.save_dir, f"depth_{idx}.npy")
        color_path = os.path.join(self.save_dir, f"color_{idx}.png")

        np.save(pose_path, T_base_cam)
        np.save(depth_path, depth_image)
        cv2.imwrite(color_path, color_bgr)

        self.get_logger().info(
            f"Saved frame {idx}: pose/depth/color -> {self.save_dir}"
        )

    def capture_depth_color_once(self):
        for attempt in range(10):
            try:
                frames = self.pipeline.wait_for_frames(timeout_ms=2000)
            except RuntimeError as e:
                self.get_logger().warn(
                    f"RealSense wait_for_frames timeout (attempt {attempt+1}/10): {e}"
                )
                continue

            for _ in range(2):
                try:
                    frames = self.pipeline.wait_for_frames(timeout_ms=1000)
                except RuntimeError:
                    frames = None
                    break

            if not frames:
                continue

            frames = self.align.process(frames)
            depth = frames.get_depth_frame()
            color = frames.get_color_frame()
            if not depth or not color:
                continue

            depth_image = np.asarray(depth.get_data())
            color_bgr = np.asarray(color.get_data())
            return depth_image, color_bgr

        self.get_logger().error("Failed to capture depth/color after multiple attempts.")
        return None

    def _rot_to_quat(self, R):
        m00, m01, m02 = R[0]
        m10, m11, m12 = R[1]
        m20, m21, m22 = R[2]
        tr = m00 + m11 + m22
        if tr > 0:
            S = math.sqrt(tr + 1.0) * 2.0
            w = 0.25 * S
            x = (m21 - m12) / S
            y = (m02 - m20) / S
            z = (m10 - m01) / S
        elif m00 > m11 and m00 > m22:
            S = math.sqrt(1.0 + m00 - m11 - m22) * 2.0
            w = (m21 - m12) / S
            x = 0.25 * S
            y = (m01 + m10) / S
            z = (m02 + m20) / S
        elif m11 > m22:
            S = math.sqrt(1.0 + m11 - m00 - m22) * 2.0
            w = (m02 - m20) / S
            x = (m01 + m10) / S
            y = 0.25 * S
            z = (m12 + m21) / S
        else:
            S = math.sqrt(1.0 + m22 - m00 - m11) * 2.0
            w = (m10 - m01) / S
            x = (m02 + m20) / S
            y = (m12 + m21) / S
            z = 0.25 * S
        n = math.sqrt(x*x + y*y + z*z + w*w)
        return x/n, y/n, z/n, w/n

    def _solve_ik_with_seed(self, pose_stamped, seed_deg):
        seed = JointState()
        seed.name = robot.joint_names()
        seed.position = [math.radians(d) for d in seed_deg]

        req = GetPositionIK.Request()
        req.ik_request.group_name = robot.MOVE_GROUP_ARM
        req.ik_request.pose_stamped = pose_stamped
        req.ik_request.robot_state.joint_state = seed
        req.ik_request.avoid_collisions = True
        req.ik_request.ik_link_name = robot.end_effector_name()

        fut = self._ik_cli.call_async(req)
        rclpy.spin_until_future_complete(self, fut)
        res = fut.result()
        if not res or res.error_code.val != 1:
            return None
        return res.solution.joint_state

    def _move_to_cfg(self, jmap: dict) -> bool:
        names = robot.joint_names()
        cur = self._latest_js
        cur_map = {}
        if cur and cur.name and cur.position:
            cur_map = {n: p for n, p in zip(cur.name, cur.position)}

        joint_positions = []
        for n in names:
            if n in jmap:
                joint_positions.append(float(jmap[n]))
            elif n in cur_map:
                joint_positions.append(float(cur_map[n]))
            else:
                joint_positions.append(0.0)

        for fn in ("move_to_configuration", "move_to_joint_positions", "move_to_joints"):
            if hasattr(self.moveit2, fn):
                try:
                    getattr(self.moveit2, fn)(joint_positions)
                except TypeError:
                    getattr(self.moveit2, fn)(positions=joint_positions)

                if hasattr(self.moveit2, "wait_until_executed"):
                    self.moveit2.wait_until_executed()
                return True

        self.get_logger().error("No joint-move API on MoveIt2 wrapper.")
        return False

    def _js_cb(self, msg: JointState):
        self._latest_js = msg


def main(args=None):
    rclpy.init(args=args)
    node = CamPoseCaptureNode()
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
