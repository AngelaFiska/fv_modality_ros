#!/usr/bin/env python3
import pyrealsense2 as rs
import numpy as np
import cv2
import os
import time

SAVE_DIR = "/home/fv/workspace/depth/test"
os.makedirs(SAVE_DIR, exist_ok=True)

def main():
    # 1. Print connected devices
    ctx = rs.context()
    devices = ctx.query_devices()
    print("Found devices:", len(devices))
    for dev in devices:
        print("  Device:", dev.get_info(rs.camera_info.name),
              "SN:", dev.get_info(rs.camera_info.serial_number))

    if len(devices) == 0:
        print("⚠ No RealSense devices detected")
        return

    # 2. Configure pipeline
    pipeline = rs.pipeline()
    config = rs.config()
    config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)
    config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)

    print("Starting pipeline...")
    try:
        profile = pipeline.start(config)
    except Exception as e:
        print("❌ Failed to start pipeline:", e)
        return

    try:
        # Warm-up frames for exposure stabilization
        print("Warming up...")
        for i in range(30):
            try:
                pipeline.wait_for_frames(timeout_ms=1000)
            except Exception as e:
                print(f"  Warm-up frame {i} timeout:", e)

        print("Trying to get one frameset...")
        frames = pipeline.wait_for_frames(timeout_ms=10000)  # 10 seconds timeout
        depth_frame = frames.get_depth_frame()
        color_frame = frames.get_color_frame()

        if not depth_frame or not color_frame:
            print("❌ Received frameset but missing depth or color")
            return

        depth_image = np.asanyarray(depth_frame.get_data())
        color_image = np.asanyarray(color_frame.get_data())

        depth_path = os.path.join(SAVE_DIR, "depth.png")
        color_path = os.path.join(SAVE_DIR, "color.png")

        cv2.imwrite(depth_path, depth_image)
        cv2.imwrite(color_path, color_image)

        print(f"✅ Saved depth image: {depth_path}")
        print(f"✅ Saved color image: {color_path}")

    except Exception as e:
        print("❌ Error during wait_for_frames:", e)

    finally:
        print("Stopping pipeline...")
        pipeline.stop()


if __name__ == "__main__":
    main()
