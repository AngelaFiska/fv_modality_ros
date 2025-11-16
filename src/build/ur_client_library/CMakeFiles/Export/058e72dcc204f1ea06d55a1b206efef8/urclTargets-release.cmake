#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ur_client_library::urcl" for configuration "Release"
set_property(TARGET ur_client_library::urcl APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ur_client_library::urcl PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/liburcl.so"
  IMPORTED_SONAME_RELEASE "liburcl.so"
  )

list(APPEND _cmake_import_check_targets ur_client_library::urcl )
list(APPEND _cmake_import_check_files_for_ur_client_library::urcl "${_IMPORT_PREFIX}/lib/liburcl.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
