#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "servo_message::servo_message__rosidl_typesupport_c" for configuration "Debug"
set_property(TARGET servo_message::servo_message__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(servo_message::servo_message__rosidl_typesupport_c PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libservo_message__rosidl_typesupport_c.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS servo_message::servo_message__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_servo_message::servo_message__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libservo_message__rosidl_typesupport_c.a" )

# Import target "servo_message::servo_message__rosidl_typesupport_microxrcedds_c" for configuration "Debug"
set_property(TARGET servo_message::servo_message__rosidl_typesupport_microxrcedds_c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(servo_message::servo_message__rosidl_typesupport_microxrcedds_c PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libservo_message__rosidl_typesupport_microxrcedds_c.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS servo_message::servo_message__rosidl_typesupport_microxrcedds_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_servo_message::servo_message__rosidl_typesupport_microxrcedds_c "${_IMPORT_PREFIX}/lib/libservo_message__rosidl_typesupport_microxrcedds_c.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
