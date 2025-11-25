#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import numpy as np
import math
import matplotlib.pyplot as plt
from pathlib import Path
import numpy as np

# ========= CONFIGURATION =========
BASE_ORIGIN = np.array([0.0, 0.0, 0.0])   # Robot base frame origin
OBJ_CENTER = np.array([0.3, 0.0, 0.0])    # Object center in the base frame

# Spherical sampling around the object
RADIUS = 0.40                                # Distance from object center to camera
AZIMUTH_DEG_LIST = [135, 150, 180, 210, 225]  # Azimuth angles (degrees)
ELEV_DEG_LIST = [60, 75]                     # Elevation angles (degrees)

# Visualization axis lengths
CAM_AXIS_LEN = 0.05
BASE_AXIS_LEN = 0.10

# ==================================

def look_at_rotation(eye, target, up=np.array([0, 0, 1])):
    """Compute rotation matrix whose z-axis points from eye → target."""
    z_axis = target - eye
    z_norm = np.linalg.norm(z_axis)
    if z_norm < 1e-6:
        z_axis = np.array([0, 0, 1.0])
    else:
        z_axis /= z_norm

    # Avoid singularity when z and up are nearly parallel
    if abs(np.dot(z_axis, up)) > 0.95:
        up = np.array([0, 1, 0])

    x_axis = np.cross(up, z_axis)
    x_axis /= np.linalg.norm(x_axis)

    y_axis = np.cross(z_axis, x_axis)
    y_axis /= np.linalg.norm(y_axis)

    return np.column_stack((x_axis, y_axis, z_axis))


def generate_scan_poses_4x4():
    """
    Generate a list of 4x4 transformation matrices Base_T_Cam.
    Camera lies on a sphere and faces the object center.
    """
    poses = []

    for elev_deg in ELEV_DEG_LIST:
        phi = math.radians(elev_deg)

        for az_deg in AZIMUTH_DEG_LIST:
            theta = math.radians(az_deg)

            # Spherical coordinates → Cartesian
            x = OBJ_CENTER[0] + RADIUS * math.cos(phi) * math.cos(theta)
            y = OBJ_CENTER[1] + RADIUS * math.cos(phi) * math.sin(theta)
            z = OBJ_CENTER[2] + RADIUS * math.sin(phi)

            eye = np.array([x, y, z], dtype=float)
            target = OBJ_CENTER

            # Rotation and homogeneous transform
            R = look_at_rotation(eye, target)
            T = np.eye(4)
            T[:3, :3] = R
            T[:3, 3] = eye

            poses.append(T)

    return poses

def draw_frame(ax, T, axis_len=0.05, label=None):
    o = T[:3, 3]
    R = T[:3, :3]

    x = o + R[:, 0] * axis_len
    y = o + R[:, 1] * axis_len
    z = o + R[:, 2] * axis_len

    ax.plot([o[0], x[0]], [o[1], x[1]], [o[2], x[2]], 'r')
    ax.plot([o[0], y[0]], [o[1], y[1]], [o[2], y[2]], 'g')
    ax.plot([o[0], z[0]], [o[1], z[1]], [o[2], z[2]], 'b')

    if label:
        ax.text(o[0], o[1], o[2], label, fontsize=5)


def visualize(poses, 
              xlim=None, 
              ylim=None, 
              zlim=None):
    fig = plt.figure()
    ax = fig.add_subplot(111, projection='3d')

    # base frame
    T_base = np.eye(4)
    T_base[:3, 3] = BASE_ORIGIN
    draw_frame(ax, T_base, BASE_AXIS_LEN, "base")

    # object
    ax.scatter(OBJ_CENTER[0], OBJ_CENTER[1], OBJ_CENTER[2], c='red', s=80, label='object')

    # cameras
    for i, T in enumerate(poses):
        draw_frame(ax, T, CAM_AXIS_LEN, f"cam{i}")
        ax.scatter(T[0, 3], T[1, 3], T[2, 3], c='k', s=10)
    
    # ========= Axis range control =========
    if xlim is not None:
        ax.set_xlim(*xlim)
    if ylim is not None:
        ax.set_ylim(*ylim)
    if zlim is not None:
        ax.set_zlim(*zlim)

    # Optional: auto-range if limits not provided
    if xlim is None or ylim is None or zlim is None:
        all_pts = np.array([T[:3, 3] for T in poses] + [OBJ_CENTER])
        mins = all_pts.min(axis=0) - 0.1
        maxs = all_pts.max(axis=0) + 0.1

        if xlim is None:
            ax.set_xlim(mins[0], maxs[0])
        if ylim is None:
            ax.set_ylim(mins[1], maxs[1])
        if zlim is None:
            ax.set_zlim(mins[2], maxs[2])

    # ======================================

    ax.set_xlabel("X"); ax.set_ylabel("Y"); ax.set_zlabel("Z")
    ax.set_box_aspect([1, 1, 1])
    plt.title("Generated Scan Poses (4x4)")
    plt.legend()
    plt.show()

# save pose
def save_poses_to_config(poses):
    """
    Save generated poses to:
      <package_root>/src/fv_realsense_nodes/config/scan_poses.npy
    Automatically detects correct path based on script location.
    """
    # Current script path
    script_path = Path(__file__).resolve()

    # fv_realsense_nodes package root (one level up)
    pkg_root = script_path.parent.parent   # go up from fv_realsense_nodes/ to its package root

    # config directory path
    config_dir = pkg_root / "config"
    config_dir.mkdir(exist_ok=True)

    # Save file
    save_path = config_dir / "scan_poses.npy"
    np.save(save_path, np.array(poses))

    print(f"\nSaved {len(poses)} poses to:\n  {save_path}\n")

if __name__ == "__main__":
    poses = generate_scan_poses_4x4()

    print(f"Generated {len(poses)} scan poses (4×4 Base_T_Cam):")
    for i, T in enumerate(poses):
        print(f"\nPose {i}:\n{T}\n")

    # Save to config/
    save_poses_to_config(poses)

    # Optional visualization
    visualize(
        poses, 
        xlim=(-0.2, 0.8),
        ylim=(-0.5, 0.5),
        zlim=(0.0, 1.0)
    )
