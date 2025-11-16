#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import math
import rclpy
from rclpy.node import Node
from time import sleep
from geometry_msgs.msg import PoseStamped
from sensor_msgs.msg import JointState
from moveit_msgs.srv import GetPositionIK
from pymoveit2 import MoveIt2
from pymoveit2.robots import ur as robot

# ===== 可调参数 =====
PAUSE_AFTER_STEP     = 5.0            # 每个目标完成后的停顿(秒)
TCP_OFFSET_M         = (0.0, 0.0, 0.0)# 若 UR 控制器里设了 TCP 偏移(相对 tool0, 单位米)
MATRIX_IS_BASE_T_TCP = False          # 传入的 4x4 是否是 base->tcp（False 表示 tcp->base，会自动取逆）
UNITS_IN_MM          = True           # 4x4 平移是否是 mm
VEL_EPS              = 0.01           # 判定“已停止”的速度阈值(rad/s)
STABLE_TIME          = 0.4            # 速度连续低于阈值的持续时间(秒)
WAIT_TIMEOUT         = 120.0          # 等待停止的超时(秒)

# 初始 seed（按 robot.joint_names() 顺序，单位：度）——肘上倾向
SEED_DEG_INIT = [0.000000, -90.000000, 90.000000, -90.000000, -90.000000, 0.000000]

# 你可以在这里放“任意数量”的 4x4 目标（示例：第2个把 z 降低 20mm）
# 当前示例矩阵是 tcp->base（所以 MATRIX_IS_BASE_T_TCP=False）
T_LIST_TCP_TO_BASE = [
    [[    -0.000000,     1.000000,    -0.000000,  0. ],
    [  1.000000,     0.000000,    -0.000000,  -200.0 ],
    [ -0.000000,    -0.000000,    -1.000000,   303.350000 ],
    [  0.000000,     0.000000,     0.000000,     1.000000 ],],


    [[    -0.000000,     1.000000,    -0.000000,  0. ],
    [  1.000000,     0.000000,    -0.000000,  -200.0 ],
    [ -0.000000,    -0.000000,    -1.000000,   283.350000 ],
    [  0.000000,     0.000000,     0.000000,     1.000000 ],],

    [[    -0.000000,     1.000000,    -0.000000,  0. ],
    [  1.000000,     0.000000,    -0.000000,  -200.0 ],
    [ -0.000000,    -0.000000,    -1.000000,   263.350000 ],
    [  0.000000,     0.000000,     0.000000,     1.000000 ],],

    [[    -0.000000,     1.000000,    -0.000000,  0. ],
    [  1.000000,     0.000000,    -0.000000,  -200.0 ],
    [ -0.000000,    -0.000000,    -1.000000,   243.350000 ],
    [  0.000000,     0.000000,     0.000000,     1.000000 ],],
    # 还可以继续加...
]

class FVMoveNode(Node):
    def __init__(self):
        super().__init__("pose_move_node")

        # 初始化 MoveIt2
        self.moveit2 = MoveIt2(
            node=self,
            joint_names=robot.joint_names(),
            base_link_name=robot.base_link_name(),
            end_effector_name=robot.end_effector_name(),
            group_name=robot.MOVE_GROUP_ARM,
        )
        
        # 订阅 joint_states：用于等待动作结束
        self._latest_js = None
        self.create_subscription(JointState, "/joint_states", self._js_cb, 10)

        # 把 4x4 列表转成 PoseStamped 列表（任意数量）
        self.goals = self.poses_from_4x4_list(
            T_list=T_LIST_TCP_TO_BASE,
            frame_id=robot.base_link_name(),
            matrix_is_base_T_tcp=MATRIX_IS_BASE_T_TCP,
            tcp_offset_m=TCP_OFFSET_M,
            units_in_mm=UNITS_IN_MM,
        )

        sleep(0.5)  # 启动缓冲
        self.execute_goals()

    # ================== 主逻辑 ==================
    def execute_goals(self):
        seed_deg = SEED_DEG_INIT[:]  # 当前循环的 seed（度）

        for idx, goal in enumerate(self.goals):
            self.get_logger().info(
                f"[{idx}] target -> pos=({goal.pose.position.x:.3f}, "
                f"{goal.pose.position.y:.3f}, {goal.pose.position.z:.3f}), "
                f"frame='{goal.header.frame_id}'"
            )

            # 1) 用 seed IK 求解并以关节空间执行
            ok, js_sol = self._move_with_seed_ik(goal, seed_deg)

            # 2) 失败则兜底笛卡尔/位姿接口
            if not ok:
                self.get_logger().warn(f"[{idx}] seed IK failed, fallback to move_to_pose()")
                ok = self._move_to_pose_compat(goal)
                js_sol = None  # 没有新的 seed

            # 3) 等停稳（基于 /joint_states)
            done = self._wait_robot_stopped(timeout_s=WAIT_TIMEOUT, vel_eps=VEL_EPS, stable_time=STABLE_TIME)
            if not done:
                self.get_logger().warn(f"[{idx}] Wait-for-stop timed out; next goal may overlap.")

            # 4) 用本次 IK 的结果更新下一帧 seed（锁定同一分支）
            if js_sol:
                name2pos = {n: p for n, p in zip(js_sol.name, js_sol.position)}
                seed_deg = [math.degrees(name2pos[n]) for n in robot.joint_names()]

            if ok:
                self.get_logger().info(f"[{idx}] Reached goal")
            else:
                self.get_logger().warn(f"[{idx}] Motion returned failure")

            self.get_logger().info(f"⏸ Waiting {PAUSE_AFTER_STEP:.1f}s before next goal...")
            sleep(PAUSE_AFTER_STEP)

        self.get_logger().info("All goals processed")

    # ================== Seed IK → 关节执行 ==================
    def _move_with_seed_ik(self, pose_stamped: PoseStamped, seed_deg):
        js_sol = self._solve_ik_with_seed(pose_stamped, seed_deg)
        if not js_sol:
            return False, None
        jmap = {n: p for n, p in zip(js_sol.name, js_sol.position)}
        ok = self._move_to_cfg(jmap)
        return ok, js_sol

    def _solve_ik_with_seed(self, pose_stamped, seed_deg):
        # 构造 seed（度→弧度），顺序与 robot.joint_names() 一致
        seed = JointState()
        seed.name = robot.joint_names()
        seed.position = [math.radians(d) for d in seed_deg]

        # IK 客户端
        if not hasattr(self, "_ik_cli"):
            self._ik_cli = self.create_client(GetPositionIK, "compute_ik")
            self._ik_cli.wait_for_service()

        req = GetPositionIK.Request()
        req.ik_request.group_name = robot.MOVE_GROUP_ARM
        req.ik_request.pose_stamped = pose_stamped
        req.ik_request.robot_state.joint_state = seed

        fut = self._ik_cli.call_async(req)
        rclpy.spin_until_future_complete(self, fut)
        res = fut.result()
        if not res or res.error_code.val != 1:   # 1 == SUCCESS
            return None
        return res.solution.joint_state

    def _move_to_cfg(self, jmap: dict) -> bool:
        """把关节目标按 UR 顺序组装成 list 传给 pymoveit2。"""
        names = robot.joint_names()

        # 尽量用当前关节角补齐缺项
        cur = getattr(self, "_latest_js", None)
        cur_map = {n: p for n, p in zip(cur.name, cur.position)} if (cur and cur.name and cur.position) else {}

        joint_positions = []
        for n in names:
            if n in jmap:
                joint_positions.append(float(jmap[n]))
            elif n in cur_map:
                joint_positions.append(float(cur_map[n]))
            else:
                joint_positions.append(0.0)  # 兜底

        # 兼容不同 API 名称/签名（pymoveit2 版本差异）
        for fn in ("move_to_configuration", "move_to_joint_positions", "move_to_joints"):
            if hasattr(self.moveit2, fn):
                try:
                    ret = getattr(self.moveit2, fn)(joint_positions)
                except TypeError:
                    ret = getattr(self.moveit2, fn)(positions=joint_positions)
                return True if ret is None else bool(ret)

        self.get_logger().error("No joint-move API on MoveIt2 wrapper.")
        return False

    # ================== 兼容的位姿移动封装 ==================
    def _move_to_pose_compat(self, goal: PoseStamped) -> bool:
        try:
            ret = self.moveit2.move_to_pose(goal.pose, frame_id=goal.header.frame_id)
        except TypeError:
            try:
                ret = self.moveit2.move_to_pose(goal)  # PoseStamped
            except TypeError:
                ret = self.moveit2.move_to_pose(pose=goal.pose)
        return True if ret is None else bool(ret)

    # ================== 工具函数 ==================
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

    def _wait_robot_stopped(self, timeout_s=60.0, vel_eps=0.01, stable_time=0.4):
        """等待速度连续低于 vel_eps 持续 stable_time 秒。"""
        import time
        t0, ok_since = time.time(), None
        while time.time() - t0 < timeout_s:
            rclpy.spin_once(self, timeout_sec=0.05)  # 刷新 joint_states
            js = self._latest_js
            if not js or not js.velocity:
                continue
            if all(abs(v) < vel_eps for v in js.velocity):
                if ok_since is None:
                    ok_since = time.time()
                if time.time() - ok_since >= stable_time:
                    return True
            else:
                ok_since = None
        return False

    def pose_from_4x4(self, T, frame_id: str,
                      matrix_is_base_T_tcp: bool = True,
                      tcp_offset_m=(0.0, 0.0, 0.0),
                      units_in_mm: bool = True) -> PoseStamped:
        """4x4 齐次矩阵 -> PoseStamped, 支持单位/方向/TCP 偏移。"""
        import numpy as np
        T = np.array(T, dtype=float)
        R, t = T[:3, :3], T[:3, 3].copy()

        if units_in_mm:
            t *= 1e-3
        if not matrix_is_base_T_tcp:  # tcp->base → 取逆得到 base->tcp
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


def main(args=None):
    rclpy.init(args=args)
    node = FVMoveNode()
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
