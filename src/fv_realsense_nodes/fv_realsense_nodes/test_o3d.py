#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import pyrealsense2 as rs
import numpy as np
import open3d as o3d

# ===== Parameters (adjust based on your application) =====
MAX_DISTANCE = 1.5          # Remove points farther than this distance (meters)
PLANE_DIST_THRESH = 0.01    # RANSAC inlier threshold for plane fitting
RANSAC_N = 3                # Number of points sampled per RANSAC iteration
NUM_ITERS = 1000            # Number of RANSAC iterations

def main():
    # 1. Configure RealSense pipeline
    pipeline = rs.pipeline()
    config = rs.config()

    # Enable depth and color streams
    config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)
    config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)

    pipeline.start(config)

    # PointCloud object & alignment to color stream
    pc = rs.pointcloud()
    align = rs.align(rs.stream.color)

    # 2. Setup Open3D visualizer
    vis = o3d.visualization.Visualizer()
    vis.create_window("RealSense PointCloud (filtered, color OK)")
    pcd = o3d.geometry.PointCloud()
    first_frame = True

    try:
        while True:
            # 3. Retrieve aligned frames
            frames = pipeline.wait_for_frames()
            frames = align.process(frames)

            depth = frames.get_depth_frame()
            color = frames.get_color_frame()
            if not depth or not color:
                continue

            # 4. Map color to point cloud and generate vertices
            pc.map_to(color)
            points = pc.calculate(depth)

            # 5. Convert vertices → numpy → (N,3) float array
            verts = np.asarray(points.get_vertices())  # Structured array, each element has x,y,z
            xyz = verts.view(np.float32).reshape(-1, 3)  # Convert to (N,3)

            # 6. Extract color image, convert BGR → RGB → [0,1]
            color_image = np.asarray(color.get_data())  # (H, W, 3) BGR
            h, w, _ = color_image.shape
            colors = color_image.reshape(-1, 3)
            colors = colors[:, ::-1] / 255.0  # Reverse channels (RGB) and normalize

            # Align number of points and colors
            n = min(xyz.shape[0], colors.shape[0])
            xyz = xyz[:n, :]
            colors = colors[:n, :]

            # ===== Remove points farther than MAX_DISTANCE =====
            d = np.linalg.norm(xyz, axis=1)
            mask_near = d < MAX_DISTANCE
            xyz_near = xyz[mask_near]
            colors_near = colors[mask_near]

            if xyz_near.shape[0] < 50:
                # Not enough points → skip this frame
                continue

            # ===== Fit plane (using only geometry) =====
            pcd_tmp = o3d.geometry.PointCloud()
            pcd_tmp.points = o3d.utility.Vector3dVector(xyz_near.astype(np.float64))

            try:
                plane_model, inliers = pcd_tmp.segment_plane(
                    distance_threshold=PLANE_DIST_THRESH,
                    ransac_n=RANSAC_N,
                    num_iterations=NUM_ITERS
                )
                inliers = np.array(inliers, dtype=np.int64)

                # Mask for non-plane points
                mask_plane = np.ones(xyz_near.shape[0], dtype=bool)
                mask_plane[inliers] = False

                xyz_final = xyz_near[mask_plane]
                colors_final = colors_near[mask_plane]

            except Exception as e:
                print(f"Plane segmentation failed: {e}")
                xyz_final = xyz_near
                colors_final = colors_near

            if xyz_final.shape[0] == 0:
                continue

            # ===== Build final Open3D point cloud =====
            pcd.points = o3d.utility.Vector3dVector(xyz_final.astype(np.float64))
            pcd.colors = o3d.utility.Vector3dVector(colors_final.astype(np.float64))

            # 8. Update visualization
            if first_frame:
                vis.add_geometry(pcd)
                first_frame = False
            else:
                vis.update_geometry(pcd)

            vis.poll_events()
            vis.update_renderer()

    except KeyboardInterrupt:
        print("Stopping...")

    finally:
        pipeline.stop()
        vis.destroy_window()


if __name__ == "__main__":
    main()
