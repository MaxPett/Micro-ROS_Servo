// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from servo_message:msg/ServoMessage.idl
// generated code does not contain a copyright notice
#include "servo_message/msg/detail/servo_message__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "servo_message/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "servo_message/msg/detail/servo_message__struct.h"
#include "servo_message/msg/detail/servo_message__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


typedef servo_message__msg__ServoMessage _ServoMessage__ros_msg_type;

static bool _ServoMessage__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ServoMessage__ros_msg_type * ros_message = (_ServoMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: servo_number
  rv = ucdr_serialize_int32_t(cdr, ros_message->servo_number);
  // Member: servo_value
  rv = ucdr_serialize_double(cdr, ros_message->servo_value);

  return rv;
}

static bool _ServoMessage__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ServoMessage__ros_msg_type * ros_message = (_ServoMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: servo_number
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->servo_number);
  // Field name: servo_value
  rv = ucdr_deserialize_double(cdr, &ros_message->servo_value);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_servo_message
size_t get_serialized_size_servo_message__msg__ServoMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ServoMessage__ros_msg_type * ros_message = (const _ServoMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: servo_number
  {
    const size_t item_size = sizeof(ros_message->servo_number);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: servo_value
  {
    const size_t item_size = sizeof(ros_message->servo_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ServoMessage__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_servo_message__msg__ServoMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_servo_message
size_t max_serialized_size_servo_message__msg__ServoMessage(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: servo_number
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: servo_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);

  return current_alignment - initial_alignment;
}

static size_t _ServoMessage__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_servo_message__msg__ServoMessage(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ServoMessage = {
  "servo_message::msg",
  "ServoMessage",
  _ServoMessage__cdr_serialize,
  _ServoMessage__cdr_deserialize,
  _ServoMessage__get_serialized_size,
  get_serialized_size_servo_message__msg__ServoMessage,
  _ServoMessage__max_serialized_size
};

static rosidl_message_type_support_t _ServoMessage__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ServoMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, servo_message, msg, ServoMessage)() {
  return &_ServoMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
