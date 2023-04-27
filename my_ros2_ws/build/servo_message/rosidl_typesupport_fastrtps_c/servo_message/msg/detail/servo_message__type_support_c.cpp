// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from servo_message:msg/ServoMessage.idl
// generated code does not contain a copyright notice
#include "servo_message/msg/detail/servo_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "servo_message/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "servo_message/msg/detail/servo_message__struct.h"
#include "servo_message/msg/detail/servo_message__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ServoMessage__ros_msg_type = servo_message__msg__ServoMessage;

static bool _ServoMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ServoMessage__ros_msg_type * ros_message = static_cast<const _ServoMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: servo_number
  {
    cdr << ros_message->servo_number;
  }

  // Field name: servo_value
  {
    cdr << ros_message->servo_value;
  }

  return true;
}

static bool _ServoMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ServoMessage__ros_msg_type * ros_message = static_cast<_ServoMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: servo_number
  {
    cdr >> ros_message->servo_number;
  }

  // Field name: servo_value
  {
    cdr >> ros_message->servo_value;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_servo_message
size_t get_serialized_size_servo_message__msg__ServoMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ServoMessage__ros_msg_type * ros_message = static_cast<const _ServoMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name servo_number
  {
    size_t item_size = sizeof(ros_message->servo_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name servo_value
  {
    size_t item_size = sizeof(ros_message->servo_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ServoMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_servo_message__msg__ServoMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_servo_message
size_t max_serialized_size_servo_message__msg__ServoMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: servo_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: servo_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ServoMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_servo_message__msg__ServoMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ServoMessage = {
  "servo_message::msg",
  "ServoMessage",
  _ServoMessage__cdr_serialize,
  _ServoMessage__cdr_deserialize,
  _ServoMessage__get_serialized_size,
  _ServoMessage__max_serialized_size
};

static rosidl_message_type_support_t _ServoMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ServoMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, servo_message, msg, ServoMessage)() {
  return &_ServoMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
