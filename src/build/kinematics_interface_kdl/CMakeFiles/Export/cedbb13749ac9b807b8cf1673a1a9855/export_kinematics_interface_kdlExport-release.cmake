#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "kinematics_interface_kdl::kinematics_interface_kdl" for configuration "Release"
set_property(TARGET kinematics_interface_kdl::kinematics_interface_kdl APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(kinematics_interface_kdl::kinematics_interface_kdl PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libkinematics_interface_kdl.so"
  IMPORTED_SONAME_RELEASE "libkinematics_interface_kdl.so"
  )

list(APPEND _cmake_import_check_targets kinematics_interface_kdl::kinematics_interface_kdl )
list(APPEND _cmake_import_check_files_for_kinematics_interface_kdl::kinematics_interface_kdl "${_IMPORT_PREFIX}/lib/libkinematics_interface_kdl.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
