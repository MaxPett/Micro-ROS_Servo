// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from servo_message:msg/ServoMessage.idl
// generated code does not contain a copyright notice
#include "servo_message/msg/detail/servo_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "servo_message/msg/detail/servo_message__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace servo_message
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_servo_message
cdr_serialize(
  const servo_message::msg::ServoMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: servo_number
  cdr << ros_message.servo_number;
  // Member: servo_value
  cdr << ros_message.servo_value;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_servo_message
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  servo_message::msg::ServoMessage & ros_message)
{
  // Member: servo_number
  cdr >> ros_message.servo_number;

  // Member: servo_value
  cdr >> ros_message.servo_value;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_servo_message
get_serialized_size(
  const servo_message::msg::ServoMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: servo_number
  {
    size_t item_size = sizeof(ros_message.servo_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: servo_value
  {
    size_t item_size = sizeof(ros_message.servo_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_servo_message
max_serialized_size_ServoMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: servo_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: servo_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ServoMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const servo_message::msg::ServoMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ServoMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<servo_message::msg::ServoMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ServoMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const servo_message::msg::ServoMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ServoMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ServoMessage(full_bounded, 0);
}

static message_type_support_callbacks_t _ServoMessage__callbacks = {
  "servo_message::msg",
  "ServoMessage",
  _ServoMessage__cdr_serialize,
  _ServoMessage__cdr_deserialize,
  _ServoMessage__get_serialized_size,
  _ServoMessage__max_serialized_size
};

static rosidl_message_type_support_t _ServoMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ServoMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace servo_message

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_servo_message
const rosidl_message_type_support_t *
get_message_type_support_handle<servo_message::msg::ServoMessage>()
{
  return &servo_message::msg::typesupport_fastrtps_cpp::_ServoMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, servo_message, msg, ServoMessage)() {
  return &servo_message::msg::typesupport_fastrtps_cpp::_ServoMessage__handle;
}

#ifdef __cplusplus
}
#endif
