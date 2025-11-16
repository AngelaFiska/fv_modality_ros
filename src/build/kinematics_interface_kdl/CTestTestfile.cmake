# CMake generated Testfile for 
# Source directory: /home/fv/workspace/ros_ur_driver/src/kinematics_interface/kinematics_interface_kdl
# Build directory: /home/fv/workspace/ros_ur_driver/src/build/kinematics_interface_kdl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_kinematics_interface_kdl "/home/fv/venv/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/fv/workspace/ros_ur_driver/src/build/kinematics_interface_kdl/test_results/kinematics_interface_kdl/test_kinematics_interface_kdl.gtest.xml" "--package-name" "kinematics_interface_kdl" "--output-file" "/home/fv/workspace/ros_ur_driver/src/build/kinematics_interface_kdl/ament_cmake_gmock/test_kinematics_interface_kdl.txt" "--command" "/home/fv/workspace/ros_ur_driver/src/build/kinematics_interface_kdl/test_kinematics_interface_kdl" "--gtest_output=xml:/home/fv/workspace/ros_ur_driver/src/build/kinematics_interface_kdl/test_results/kinematics_interface_kdl/test_kinematics_interface_kdl.gtest.xml")
set_tests_properties(test_kinematics_interface_kdl PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/fv/workspace/ros_ur_driver/src/build/kinematics_interface_kdl/test_kinematics_interface_kdl" TIMEOUT "60" WORKING_DIRECTORY "/home/fv/workspace/ros_ur_driver/src/build/kinematics_interface_kdl" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gmock/cmake/ament_add_gmock_test.cmake;98;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;90;ament_add_gmock_test;/home/fv/workspace/ros_ur_driver/src/kinematics_interface/kinematics_interface_kdl/CMakeLists.txt;43;ament_add_gmock;/home/fv/workspace/ros_ur_driver/src/kinematics_interface/kinematics_interface_kdl/CMakeLists.txt;0;")
subdirs("gmock")
subdirs("gtest")
