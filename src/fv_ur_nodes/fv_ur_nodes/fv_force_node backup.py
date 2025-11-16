#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import WrenchStamped
from std_srvs.srv import Trigger
import matplotlib.pyplot as plt
import csv
import os
import time

class LiveForcePlot(Node):
    def __init__(self, display_window=1000, log_to_csv=True, csv_filename="force_log.csv",
                 calibration_time=5.0, force_threshold=20.0):
        super().__init__('live_force_plot')

        # ROS subscription
        self.sub = self.create_subscription(
            WrenchStamped,
            '/force_torque_sensor_broadcaster/wrench',
            self.callback,
            10
        )

        # Emergency stop client
        self.force_threshold = force_threshold
        self.stopped = False
        self.stop_client = self.create_client(Trigger, '/dashboard_client/stop')
        if not self.stop_client.wait_for_service(timeout_sec=5.0):
            self.get_logger().warn("Dashboard stop service not available! Emergency stop will not work.")

        # hand_back_control 客户端（持续可触发）
        self.handback_client = self.create_client(Trigger, '/io_and_status_controller/hand_back_control')
        if not self.handback_client.wait_for_service(timeout_sec=5.0):
            self.get_logger().warn("hand_back_control service not available! Deactivate won't work.")

        # 手动去激活的阈值/滞回/冷却时间（可按需改）
        self.handback_threshold = 5.0            # 触发阈值 |F| > 5 N
        self.handback_hysteresis = 1.0           # 滞回 1 N；恢复阈值 = 5 - 1 = 4 N
        self.handback_cooldown_s = 0.5           # 0.5 秒内最多触发一次
        self._over_limit = False                 # 当前是否处于“超限态”
        self._last_handback_t = 0.0              # 上次触发时间戳

        # Data storage
        self.timestamps, self.fx, self.fy, self.fz = [], [], [], []

        # Rolling window for plotting
        self.display_window = display_window

        # CSV logging
        self.log_to_csv = log_to_csv
        if self.log_to_csv:
            self.csv_path = os.path.join(os.getcwd(), csv_filename)
            with open(self.csv_path, 'w', newline='') as f:
                csv.writer(f).writerow(['time', 'fx', 'fy', 'fz'])

        # Matplotlib setup
        plt.ion()
        self.fig, self.ax = plt.subplots(figsize=(12, 6))
        self.line_fx, = self.ax.plot([], [], label='Fx')
        self.line_fy, = self.ax.plot([], [], label='Fy')
        self.line_fz, = self.ax.plot([], [], label='Fz')
        self.ax.set_xlabel('Time [s]')
        self.ax.set_ylabel('Force [N]')
        self.ax.set_title('End-Effector Force (Live)')
        self.ax.legend()
        self.ax.grid(True)

        # Calibration variables
        self.calibration_time = calibration_time
        self.calibrating = True
        self.calibration_start_time = None
        self.fx_samples, self.fy_samples, self.fz_samples = [], [], []
        self.fx_offset = self.fy_offset = self.fz_offset = 0.0

    def callback(self, msg):
        t = msg.header.stamp.sec + msg.header.stamp.nanosec * 1e-9

        if self.calibration_start_time is None:
            self.calibration_start_time = t
            self.get_logger().info(f"Starting {self.calibration_time}-second force sensor calibration...")

        if self.calibrating:
            self.fx_samples.append(msg.wrench.force.x)
            self.fy_samples.append(msg.wrench.force.y)
            self.fz_samples.append(msg.wrench.force.z)
            if t - self.calibration_start_time >= self.calibration_time:
                self.fx_offset = sum(self.fx_samples)/len(self.fx_samples)
                self.fy_offset = sum(self.fy_samples)/len(self.fy_samples)
                self.fz_offset = sum(self.fz_samples)/len(self.fz_samples)
                self.calibrating = False
                self.get_logger().info(
                    f"Calibration done! Offsets: Fx={self.fx_offset:.3f}, Fy={self.fy_offset:.3f}, Fz={self.fz_offset:.3f}")
            return

        # Apply offsets
        fx = msg.wrench.force.x - self.fx_offset
        fy = msg.wrench.force.y - self.fy_offset
        fz = msg.wrench.force.z - self.fz_offset

        # —— 连续监测 hand_back_control —— #
        m = max(abs(fx), abs(fy), abs(fz))
        now = time.time()
        if not self._over_limit:
            # 未超限 -> 检查是否上穿阈值
            if m > self.handback_threshold and (now - self._last_handback_t) >= self.handback_cooldown_s:
                self._over_limit = True
                self._last_handback_t = now
                self.get_logger().warn(
                    f"Force > {self.handback_threshold:.1f}N — hand_back_control! "
                    f"Fx={fx:.2f}, Fy={fy:.2f}, Fz={fz:.2f}")
                self.hand_back_control()
        else:
            # 已超限态 -> 等待回落到(阈值 - 滞回)以下，解除超限态
            if m < (self.handback_threshold - self.handback_hysteresis):
                self._over_limit = False

        # —— 原紧急停阈值 —— #
        if not self.stopped and (
            abs(fx) > self.force_threshold or abs(fy) > self.force_threshold or abs(fz) > self.force_threshold
        ):
            self.get_logger().warn(f"Emergency stop! Fx={fx:.2f}, Fy={fy:.2f}, Fz={fz:.2f}")
            self.emergency_stop()
            self.stopped = True

        # Store and plot
        self.timestamps.append(t)
        self.fx.append(fx)
        self.fy.append(fy)
        self.fz.append(fz)
        if self.log_to_csv:
            with open(self.csv_path, 'a', newline='') as f:
                csv.writer(f).writerow([t, fx, fy, fz])

        self.line_fx.set_data(self.timestamps[-self.display_window:], self.fx[-self.display_window:])
        self.line_fy.set_data(self.timestamps[-self.display_window:], self.fy[-self.display_window:])
        self.line_fz.set_data(self.timestamps[-self.display_window:], self.fz[-self.display_window:])
        self.ax.relim(); self.ax.autoscale_view()
        self.fig.canvas.draw(); self.fig.canvas.flush_events()

    def hand_back_control(self):
        """Call /io_and_status_controller/hand_back_control"""
        if self.handback_client.service_is_ready():
            req = Trigger.Request()
            self.handback_client.call_async(req)
            self.get_logger().info("Sent hand_back_control trigger to robot (deactivate).")
        else:
            self.get_logger().warn("hand_back_control service not ready!")

    def emergency_stop(self):
        if self.stop_client.service_is_ready():
            req = Trigger.Request()
            self.stop_client.call_async(req)
            self.get_logger().info("Stop command sent to robot!")
        else:
            self.get_logger().warn("Cannot stop robot, stop service not ready!")

def main(args=None):
    rclpy.init(args=args)
    node = LiveForcePlot(display_window=1000, log_to_csv=True,
                         csv_filename="force_log.csv",
                         calibration_time=5.0, force_threshold=20.0)
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
