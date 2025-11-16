#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "realtime_tools::realtime_tools" for configuration "Release"
set_property(TARGET realtime_tools::realtime_tools APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(realtime_tools::realtime_tools PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librealtime_tools.so"
  IMPORTED_SONAME_RELEASE "librealtime_tools.so"
  )

list(APPEND _cmake_import_check_targets realtime_tools::realtime_tools )
list(APPEND _cmake_import_check_files_for_realtime_tools::realtime_tools "${_IMPORT_PREFIX}/lib/librealtime_tools.so" )

# Import target "realtime_tools::thread_priority" for configuration "Release"
set_property(TARGET realtime_tools::thread_priority APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(realtime_tools::thread_priority PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libthread_priority.so"
  IMPORTED_SONAME_RELEASE "libthread_priority.so"
  )

list(APPEND _cmake_import_check_targets realtime_tools::thread_priority )
list(APPEND _cmake_import_check_files_for_realtime_tools::thread_priority "${_IMPORT_PREFIX}/lib/libthread_priority.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
