// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from servo_message:msg/ServoMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "servo_message/msg/detail/servo_message__rosidl_typesupport_introspection_c.h"
#include "servo_message/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "servo_message/msg/detail/servo_message__functions.h"
#include "servo_message/msg/detail/servo_message__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ServoMessage__rosidl_typesupport_introspection_c__ServoMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  servo_message__msg__ServoMessage__init(message_memory);
}

void ServoMessage__rosidl_typesupport_introspection_c__ServoMessage_fini_function(void * message_memory)
{
  servo_message__msg__ServoMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ServoMessage__rosidl_typesupport_introspection_c__ServoMessage_message_member_array[2] = {
  {
    "servo_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_message__msg__ServoMessage, servo_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servo_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_message__msg__ServoMessage, servo_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ServoMessage__rosidl_typesupport_introspection_c__ServoMessage_message_members = {
  "servo_message__msg",  // message namespace
  "ServoMessage",  // message name
  2,  // number of fields
  sizeof(servo_message__msg__ServoMessage),
  ServoMessage__rosidl_typesupport_introspection_c__ServoMessage_message_member_array,  // message members
  ServoMessage__rosidl_typesupport_introspection_c__ServoMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoMessage__rosidl_typesupport_introspection_c__ServoMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ServoMessage__rosidl_typesupport_introspection_c__ServoMessage_message_type_support_handle = {
  0,
  &ServoMessage__rosidl_typesupport_introspection_c__ServoMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_servo_message
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_message, msg, ServoMessage)() {
  if (!ServoMessage__rosidl_typesupport_introspection_c__ServoMessage_message_type_support_handle.typesupport_identifier) {
    ServoMessage__rosidl_typesupport_introspection_c__ServoMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ServoMessage__rosidl_typesupport_introspection_c__ServoMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
