#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import WrenchStamped
from std_srvs.srv import Trigger
from std_msgs.msg import Float32
import matplotlib.pyplot as plt
import csv
import os
import time
import math

class LiveForcePlot(Node):
    def __init__(self, display_window=1000, log_to_csv=True, csv_filename="force_log.csv",
                 calibration_time=5.0, force_threshold=5.0, rze_force_threshold=3.0):
        super().__init__('live_force_plot')

        # ROS subscriptions
        self.sub = self.create_subscription(
            WrenchStamped,
            '/force_torque_sensor_broadcaster/wrench',
            self.callback,
            10
        )

        self.sub_rze = self.create_subscription(
            Float32,
            '/rze_force',
            self.callback_rze,
            10
        )
        self.sub_fv = self.create_subscription(
            Float32,
            '/fv_force',
            self.callback_fv,
            10
        )

        # Emergency stop client
        self.force_threshold = force_threshold
        self.rze_force_threshold = rze_force_threshold
        self.stopped = False
        self.stop_client = self.create_client(Trigger, '/dashboard_client/stop')
        if not self.stop_client.wait_for_service(timeout_sec=5.0):
            self.get_logger().warn("Dashboard stop service not available! Emergency stop will not work.")

        # hand_back_control 客户端
        self.handback_client = self.create_client(Trigger, '/io_and_status_controller/hand_back_control')
        if not self.handback_client.wait_for_service(timeout_sec=5.0):
            self.get_logger().warn("hand_back_control service not available! Deactivate won't work.")

        # 手动去激活参数
        self.handback_threshold = 5.0
        self.handback_hysteresis = 1.0
        self.handback_cooldown_s = 0.5
        self._over_limit = False
        self._last_handback_t = 0.0
        

        # Data storage
        self.timestamps, self.fx, self.fy, self.fz = [], [], [], []
        self.timestamps_rze, self.fz_rze = [], []
        self.timestamps_fv, self.fz_fv = [], []

        # Rolling window for plotting
        self.display_window = display_window

        # CSV logging
        self.log_to_csv = log_to_csv
        if self.log_to_csv:
            self.csv_path = os.path.join(os.getcwd(), csv_filename)
            with open(self.csv_path, 'w', newline='') as f:
                csv.writer(f).writerow(['time', 'fx', 'fy', 'fz', 'rze_force', 'fv_force'])

        # Matplotlib setup
        plt.ion()
        self.fig, self.ax = plt.subplots(figsize=(12, 6))
        self.line_fx, = self.ax.plot([], [], '--', label='Fx')
        self.line_fy, = self.ax.plot([], [], '--', label='Fy')
        self.line_fz, = self.ax.plot([], [], '--', label='Fz')
        self.line_rze, = self.ax.plot([], [], label='RZE Force')
        self.line_fv,  = self.ax.plot([], [], label='FV Force')
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

    # ---- Main force/torque callback ----
    def callback(self, msg):
        t = msg.header.stamp.sec + msg.header.stamp.nanosec * 1e-9

        # Calibration
        if self.calibration_start_time is None:
            self.calibration_start_time = t
            self.get_logger().info(f"Starting {self.calibration_time}-second force sensor calibration...")

        if self.calibrating:
            if any(math.isnan(v) for v in [msg.wrench.force.x, msg.wrench.force.y, msg.wrench.force.z]):
                return  # skip invalid readings
            self.fx_samples.append(msg.wrench.force.x)
            self.fy_samples.append(msg.wrench.force.y)
            self.fz_samples.append(msg.wrench.force.z)
            if t - self.calibration_start_time >= self.calibration_time:
                if len(self.fx_samples) == 0:
                    self.get_logger().warn("⚠️ Calibration skipped — no valid sensor data (robot not connected). Offsets = 0.")
                    self.calibrating = False
                    return
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

        # Continuous monitoring
        m = max(abs(fx), abs(fy), abs(fz))
        now = time.time()
        if not self._over_limit:
            if m > self.handback_threshold and (now - self._last_handback_t) >= self.handback_cooldown_s:
                self._over_limit = True
                self._last_handback_t = now
                self.get_logger().warn(
                    f"Force > {self.handback_threshold:.1f}N — hand_back_control! Fx={fx:.2f}, Fy={fy:.2f}, Fz={fz:.2f}")
                self.hand_back_control()
        else:
            if m < (self.handback_threshold - self.handback_hysteresis):
                self._over_limit = False

        if not self.stopped and m > self.force_threshold:
            self.get_logger().warn(f"Emergency stop! Fx={fx:.2f}, Fy={fy:.2f}, Fz={fz:.2f}")
            self.emergency_stop()
            self.stopped = True

        # Store data
        self.timestamps.append(t)
        self.fx.append(fx)
        self.fy.append(fy)
        self.fz.append(fz)
        if self.log_to_csv:
            with open(self.csv_path, 'a', newline='') as f:
                csv.writer(f).writerow([t, fx, fy, fz, '', ''])

        # Plot update
        self.update_plot()

    # ---- External RZE/FV force callbacks ----
    def callback_rze(self, msg):
        t = time.time()
        self.timestamps_rze.append(t)
        self.fz_rze.append(msg.data)
        # self.get_logger().info(f"[RZE] t={t:.2f}, Fz={msg.data:.3f}")
        self.update_plot()

        if not self.stopped and msg.data > self.rze_force_threshold:
            self.get_logger().warn(f"Emergency stop! RZE_force={msg.data:.2f}")
            self.emergency_stop()
            self.stopped = True

    def callback_fv(self, msg):
        t = time.time()
        self.timestamps_fv.append(t)
        self.fz_fv.append(msg.data)
        # self.get_logger().info(f"[FV] t={t:.2f}, Fz={msg.data:.3f}")
        self.update_plot()

    # ---- Plot update helper ----
    def update_plot(self):
        self.line_fx.set_data(self.timestamps[-self.display_window:], self.fx[-self.display_window:])
        self.line_fy.set_data(self.timestamps[-self.display_window:], self.fy[-self.display_window:])
        self.line_fz.set_data(self.timestamps[-self.display_window:], self.fz[-self.display_window:])
        self.line_rze.set_data(self.timestamps_rze[-self.display_window:], self.fz_rze[-self.display_window:])
        self.line_fv.set_data(self.timestamps_fv[-self.display_window:], self.fz_fv[-self.display_window:])
        self.ax.relim(); self.ax.autoscale_view()
        self.fig.canvas.draw(); self.fig.canvas.flush_events()

    # ---- Service Calls ----
    def hand_back_control(self):
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
