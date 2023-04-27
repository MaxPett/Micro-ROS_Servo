// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from servo_message:msg/ServoMessage.idl
// generated code does not contain a copyright notice

#ifndef SERVO_MESSAGE__MSG__DETAIL__SERVO_MESSAGE__BUILDER_HPP_
#define SERVO_MESSAGE__MSG__DETAIL__SERVO_MESSAGE__BUILDER_HPP_

#include "servo_message/msg/detail/servo_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace servo_message
{

namespace msg
{

namespace builder
{

class Init_ServoMessage_servo_value
{
public:
  explicit Init_ServoMessage_servo_value(::servo_message::msg::ServoMessage & msg)
  : msg_(msg)
  {}
  ::servo_message::msg::ServoMessage servo_value(::servo_message::msg::ServoMessage::_servo_value_type arg)
  {
    msg_.servo_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_message::msg::ServoMessage msg_;
};

class Init_ServoMessage_servo_number
{
public:
  Init_ServoMessage_servo_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoMessage_servo_value servo_number(::servo_message::msg::ServoMessage::_servo_number_type arg)
  {
    msg_.servo_number = std::move(arg);
    return Init_ServoMessage_servo_value(msg_);
  }

private:
  ::servo_message::msg::ServoMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_message::msg::ServoMessage>()
{
  return servo_message::msg::builder::Init_ServoMessage_servo_number();
}

}  // namespace servo_message

#endif  // SERVO_MESSAGE__MSG__DETAIL__SERVO_MESSAGE__BUILDER_HPP_
