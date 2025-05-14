#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "MikroSDK.Driver.CAN" for configuration "Release"
set_property(TARGET MikroSDK.Driver.CAN APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MikroSDK.Driver.CAN PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "MikroC"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/lib_drv_can.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS MikroSDK.Driver.CAN )
list(APPEND _IMPORT_CHECK_FILES_FOR_MikroSDK.Driver.CAN "${_IMPORT_PREFIX}/lib/lib_drv_can.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
