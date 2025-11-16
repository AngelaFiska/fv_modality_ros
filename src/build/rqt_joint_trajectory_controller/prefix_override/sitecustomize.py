import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/fv/workspace/ros_ur_driver/src/install/rqt_joint_trajectory_controller'
