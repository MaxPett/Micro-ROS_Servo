// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from servo_message:msg/ServoMessage.idl
// generated code does not contain a copyright notice

#ifndef SERVO_MESSAGE__MSG__DETAIL__SERVO_MESSAGE__TRAITS_HPP_
#define SERVO_MESSAGE__MSG__DETAIL__SERVO_MESSAGE__TRAITS_HPP_

#include "servo_message/msg/detail/servo_message__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<servo_message::msg::ServoMessage>()
{
  return "servo_message::msg::ServoMessage";
}

template<>
inline const char * name<servo_message::msg::ServoMessage>()
{
  return "servo_message/msg/ServoMessage";
}

template<>
struct has_fixed_size<servo_message::msg::ServoMessage>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<servo_message::msg::ServoMessage>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<servo_message::msg::ServoMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SERVO_MESSAGE__MSG__DETAIL__SERVO_MESSAGE__TRAITS_HPP_
