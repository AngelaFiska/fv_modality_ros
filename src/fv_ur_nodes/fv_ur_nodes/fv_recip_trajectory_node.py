#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import math
import rclpy
from rclpy.node import Node
from time import sleep
from geometry_msgs.msg import PoseStamped, WrenchStamped
from sensor_msgs.msg import JointState 
from std_msgs.msg import Float32
from moveit_msgs.srv import GetPositionIK
from pymoveit2 import MoveIt2
from pymoveit2.robots import ur as robot
import numpy as np
import time

# ===== 可调参数 =====
PAUSE_AFTER_STEP     = 0.0
TCP_OFFSET_M         = (0.0, 0.0, 0.0)
MATRIX_IS_BASE_T_TCP = False
UNITS_IN_MM          = True
VEL_EPS              = 0.01
STABLE_TIME          = 0.4
WAIT_TIMEOUT         = 120.0

# ===== threshold =====
threshold = 3.0

# 末端期望速度（仅用于计算 sleep，不影响规划）
EE_SPEED_MPS         = 0.05  # 5 cm/s

# “肘上”分支种子
SEED_DEG             = [0.0, -90.0, 90.0, -90.0, -90.0, 0.0]

# 两个往返目标
T_A_TCP_TO_BASE = [
    [-0.0,  1.0, -0.0,    0.0],
    [ 1.0,  0.0, -0.0, -200.0],
    [-0.0, -0.0, -1.0,  343.35],
    [ 0.0,  0.0,  0.0,    1.0],
]

T_B_TCP_TO_BASE = [
    [-0.0,  1.0, -0.0,    0.0],
    [ 1.0,  0.0, -0.0, -200.0],
    [-0.0, -0.0, -1.0,  243.35],
    [ 0.0,  0.0,  0.0,    1.0],
]

class FVRecipMoveNode(Node):
    def __init__(self):
        super().__init__("pose_move_node")

        # MoveIt2 初始化
        self.moveit2 = MoveIt2(
            node=self,
            joint_names=robot.joint_names(),
            base_link_name=robot.base_link_name(),
            end_effector_name=robot.end_effector_name(),
            group_name=robot.MOVE_GROUP_ARM,
        )

        # 最新关节状态
        self._latest_js = None

        # 订阅 joint_states 和力传感器
        self.create_subscription(JointState, "/joint_states", self._js_cb, 10)
        self.sub_wrench = self.create_subscription(
            WrenchStamped, '/force_torque_sensor_broadcaster/wrench', self.callback, 10
        )
        self.sub_rze = self.create_subscription(
            Float32, '/rze_force', self.callback_rze, 10
        )
        self.sub_fv = self.create_subscription(
            Float32, '/fv_force', self.callback_fv, 10
        )

        self.latest_ft_force = 0.0
        self.latest_rze_force = 0.0
        self.latest_fv_force = 0.0

        # 两个目标点
        self.goals = self.poses_from_4x4_list(
            T_list=[T_A_TCP_TO_BASE, T_B_TCP_TO_BASE],
            frame_id=robot.base_link_name(),
            matrix_is_base_T_tcp=MATRIX_IS_BASE_T_TCP,
            tcp_offset_m=TCP_OFFSET_M,
            units_in_mm=UNITS_IN_MM,
        )

        # 等待初始 joint_state
        while self._latest_js is None and rclpy.ok():
            self.get_logger().info("Waiting for initial joint states...")
            rclpy.spin_once(self, timeout_sec=0.01)

        sleep(0.5)
        self.execute_goals()

    # ===== 主循环 =====
    def execute_goals(self):
        seed_deg = SEED_DEG[:]
        if len(self.goals) != 2:
            self.get_logger().error("Need exactly two goals for ping-pong.")
            return

        i = 0
        while rclpy.ok():
            idx = i % 2
            cur = self.goals[idx]
            nxt = self.goals[1 - idx]

            dx = nxt.pose.position.x - cur.pose.position.x
            dy = nxt.pose.position.y - cur.pose.position.y
            dz = nxt.pose.position.z - cur.pose.position.z
            seg_len = math.sqrt(dx*dx + dy*dy + dz*dz)
            period_s = seg_len / max(EE_SPEED_MPS, 1e-6)

            self.get_logger().info(
                f"[{i}] target ({'A' if idx==0 else 'B'}) -> pos=({cur.pose.position.x:.3f}, {cur.pose.position.y:.3f}, {cur.pose.position.z:.3f}), period≈{period_s:.2f}s"
            )

            # IK 求解
            ok, js_sol = self._move_with_seed_ik(cur, seed_deg)
            if not ok:
                self.get_logger().warn(f"[{i}] seed IK failed, fallback to move_to_pose()")
                ok = self._move_to_pose_compat(cur)  # 同步调用
                js_sol = None

            if js_sol:
                name2pos = {n: p for n, p in zip(js_sol.name, js_sol.position)}
                seed_deg = [math.degrees(name2pos[n]) for n in robot.joint_names()]

            # 在目标执行期间持续 spin_once 更新力值，并检查阈值
            start_time = time.time()
            while rclpy.ok() and time.time() - start_time < period_s:
                rclpy.spin_once(self, timeout_sec=0.01)
                if (abs(self.latest_ft_force) > threshold or
                    abs(self.latest_rze_force) > threshold or
                    abs(self.latest_fv_force) > threshold):
                    self.get_logger().warn("Force threshold exceeded! Stopping and returning to A.")
                    
                    # 使用关节解回到 A 点
                    ok_back, js_sol = self._move_with_seed_ik(self.goals[0], SEED_DEG)
                    if ok_back:
                        self.get_logger().info("Returned to point A successfully.")
                    else:
                        self.get_logger().error("Failed to return to point A!")
                    return  # 停止整个循环
                sleep(0.005)

            if ok:
                self.get_logger().info(f"[{i}] Reached goal")
            else:
                self.get_logger().warn(f"[{i}] Motion failed")

            i += 1

    # ===== IK + move_to_cfg =====
    def _move_with_seed_ik(self, pose_stamped: PoseStamped, seed_deg):
        js_sol = self._solve_ik_with_seed(pose_stamped, seed_deg)
        if not js_sol:
            return False, None
        jmap = {n: p for n, p in zip(js_sol.name, js_sol.position)}
        ok = self._move_to_cfg(jmap)
        return ok, js_sol

    def _solve_ik_with_seed(self, pose_stamped, seed_deg):
        seed = JointState()
        seed.name = robot.joint_names()
        seed.position = [math.radians(d) for d in seed_deg]

        if not hasattr(self, "_ik_cli"):
            self._ik_cli = self.create_client(GetPositionIK, "compute_ik")
            self._ik_cli.wait_for_service()

        req = GetPositionIK.Request()
        req.ik_request.group_name = robot.MOVE_GROUP_ARM
        req.ik_request.pose_stamped = pose_stamped
        req.ik_request.robot_state.joint_state = seed

        # ✅ 关键：让 IK 避免碰撞（机器人 + 工具 + 环境）
        req.ik_request.avoid_collisions = True

        # 建议显式指定 IK 求解的末端 link（一般是 tool0）
        req.ik_request.ik_link_name = robot.end_effector_name()

        fut = self._ik_cli.call_async(req)
        rclpy.spin_until_future_complete(self, fut)
        res = fut.result()
        if not res or res.error_code.val != 1:
            return None
        return res.solution.joint_state

    # ===== MoveIt2 执行关节位置 =====
    def _move_to_cfg(self, jmap: dict) -> bool:
        names = robot.joint_names()
        cur = getattr(self, "_latest_js", None)
        cur_map = {n: p for n, p in zip(cur.name, cur.position)} if (cur and cur.name and cur.position) else {}

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
                    ret = getattr(self.moveit2, fn)(joint_positions)
                except TypeError:
                    ret = getattr(self.moveit2, fn)(positions=joint_positions)
                return True if ret is None else bool(ret)

        self.get_logger().error("No joint-move API on MoveIt2 wrapper.")
        return False

    # ===== MoveIt2 同步 move_to_pose =====
    def _move_to_pose_compat(self, goal: PoseStamped) -> bool:
        """兼容调用 MoveIt2.move_to_pose()"""
        try:
            ret = self.moveit2.move_to_pose(goal.pose)
            return True if ret is None else bool(ret)
        except Exception as e:
            self.get_logger().error(f"Failed move_to_pose: {e}")
            return False

    # ===== 坐标转换 =====
    def poses_from_4x4_list(self, T_list, frame_id: str,
                            matrix_is_base_T_tcp: bool,
                            tcp_offset_m=(0.0, 0.0, 0.0),
                            units_in_mm: bool = True):
        return [
            self.pose_from_4x4(T, frame_id, matrix_is_base_T_tcp, tcp_offset_m, units_in_mm)
            for T in T_list
        ]

    def _js_cb(self, msg: JointState):
        self._latest_js = msg

    def pose_from_4x4(self, T, frame_id: str,
                      matrix_is_base_T_tcp: bool = True,
                      tcp_offset_m=(0.0, 0.0, 0.0),
                      units_in_mm: bool = True) -> PoseStamped:
        T = np.array(T, dtype=float)
        R, t = T[:3, :3], T[:3, 3].copy()

        if units_in_mm:
            t *= 1e-3
        if not matrix_is_base_T_tcp:
            R, t = R.T, -R @ t
        if tcp_offset_m is not None:
            ox, oy, oz = tcp_offset_m
            t = t - R @ np.array([ox, oy, oz], dtype=float)

        qx, qy, qz, qw = self._rot_to_quat(R)
        p = PoseStamped()
        p.header.frame_id = frame_id
        p.pose.position.x, p.pose.position.y, p.pose.position.z = map(float, t)
        p.pose.orientation.x, p.pose.orientation.y, p.pose.orientation.z, p.pose.orientation.w = qx, qy, qz, qw
        return p

    def _rot_to_quat(self, R):
        m00, m01, m02 = R[0]; m10, m11, m12 = R[1]; m20, m21, m22 = R[2]
        tr = m00 + m11 + m22
        if tr > 0:
            S = math.sqrt(tr + 1.0) * 2.0; w = 0.25 * S
            x, y, z = (m21 - m12)/S, (m02 - m20)/S, (m10 - m01)/S
        elif m00 > m11 and m00 > m22:
            S = math.sqrt(1.0 + m00 - m11 - m22) * 2.0
            w, x, y, z = (m21 - m12)/S, 0.25*S, (m01 + m10)/S, (m02 + m20)/S
        elif m11 > m22:
            S = math.sqrt(1.0 + m11 - m00 - m22) * 2.0
            w, x, y, z = (m02 - m20)/S, (m01 + m10)/S, 0.25*S, (m12 + m21)/S
        else:
            S = math.sqrt(1.0 + m22 - m00 - m11) * 2.0
            w, x, y, z = (m10 - m01)/S, (m02 + m20)/S, (m12 + m21)/S, 0.25*S
        n = math.sqrt(x*x + y*y + z*z + w*w)
        return x/n, y/n, z/n, w/n

    # ===== 力回调 =====
    def callback(self, msg: WrenchStamped):
        fx = msg.wrench.force.x
        fy = msg.wrench.force.y
        fz = msg.wrench.force.z
        self.latest_ft_force = max(abs(fx), abs(fy), abs(fz))

    def callback_rze(self, msg: Float32):
        self.latest_rze_force = msg.data

    def callback_fv(self, msg: Float32):
        self.latest_fv_force = msg.data

def main(args=None):
    rclpy.init(args=args)
    node = FVRecipMoveNode()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
