#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "MikroSDK.LCD" for configuration "Debug"
set_property(TARGET MikroSDK.LCD APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(MikroSDK.LCD PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "MikroC"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/lib_lcd.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS MikroSDK.LCD )
list(APPEND _IMPORT_CHECK_FILES_FOR_MikroSDK.LCD "${_IMPORT_PREFIX}/lib/lib_lcd.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
