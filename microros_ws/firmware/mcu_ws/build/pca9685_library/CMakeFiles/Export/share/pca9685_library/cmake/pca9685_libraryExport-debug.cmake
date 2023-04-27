#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "pca9685_library::pca9685_library" for configuration "Debug"
set_property(TARGET pca9685_library::pca9685_library APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(pca9685_library::pca9685_library PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libpca9685_library.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS pca9685_library::pca9685_library )
list(APPEND _IMPORT_CHECK_FILES_FOR_pca9685_library::pca9685_library "${_IMPORT_PREFIX}/lib/libpca9685_library.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
