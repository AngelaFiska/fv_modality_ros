import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/fv/workspace/ros_ur_driver/src/install/moveit_configs_utils'
