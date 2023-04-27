// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from servo_message:msg/ServoMessage.idl
// generated code does not contain a copyright notice

#ifndef SERVO_MESSAGE__MSG__DETAIL__SERVO_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SERVO_MESSAGE__MSG__DETAIL__SERVO_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "servo_message/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "servo_message/msg/detail/servo_message__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_servo_message
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  servo_message::msg::ServoMessage & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_servo_message
get_serialized_size(
  const servo_message::msg::ServoMessage & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_servo_message
max_serialized_size_ServoMessage(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace servo_message

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_servo_message
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, servo_message, msg, ServoMessage)();

#ifdef __cplusplus
}
#endif

#endif  // SERVO_MESSAGE__MSG__DETAIL__SERVO_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
