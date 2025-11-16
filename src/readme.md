# Launch the UR driver
source ~/workspace/ros_ur_driver/install/setup.bash
ros2 launch ur_robot_driver ur_control.launch.py ur_type:=ur3e robot_ip:="192.168.0.101" use_mock_hardware:=false launch_rviz:=true

# Launch MoveIt2
source ~/workspace/ros_ur_driver/install/setup.bash
ros2 launch ur_moveit_config ur_moveit.launch.py ur_type:=ur3e launch_rviz:=true

# Run the tipping trajectory
source ~/workspace/ros_ur_driver/install/setup.bash
ros2 run fv_ur_nodes fv_recip_trajectory_node

# Check force
ros2 run fv_ur_nodes fv_force_node