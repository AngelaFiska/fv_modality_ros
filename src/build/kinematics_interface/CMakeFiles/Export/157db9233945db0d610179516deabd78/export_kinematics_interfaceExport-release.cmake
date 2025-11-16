#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "kinematics_interface::kinematics_interface" for configuration "Release"
set_property(TARGET kinematics_interface::kinematics_interface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(kinematics_interface::kinematics_interface PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libkinematics_interface.so"
  IMPORTED_SONAME_RELEASE "libkinematics_interface.so"
  )

list(APPEND _cmake_import_check_targets kinematics_interface::kinematics_interface )
list(APPEND _cmake_import_check_files_for_kinematics_interface::kinematics_interface "${_IMPORT_PREFIX}/lib/libkinematics_interface.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
