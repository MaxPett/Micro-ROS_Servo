// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from servo_message:msg/ServoMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "servo_message/msg/detail/servo_message__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace servo_message
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ServoMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) servo_message::msg::ServoMessage(_init);
}

void ServoMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<servo_message::msg::ServoMessage *>(message_memory);
  typed_message->~ServoMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServoMessage_message_member_array[2] = {
  {
    "servo_number",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_message::msg::ServoMessage, servo_number),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "servo_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_message::msg::ServoMessage, servo_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServoMessage_message_members = {
  "servo_message::msg",  // message namespace
  "ServoMessage",  // message name
  2,  // number of fields
  sizeof(servo_message::msg::ServoMessage),
  ServoMessage_message_member_array,  // message members
  ServoMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServoMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServoMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace servo_message


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<servo_message::msg::ServoMessage>()
{
  return &::servo_message::msg::rosidl_typesupport_introspection_cpp::ServoMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_message, msg, ServoMessage)() {
  return &::servo_message::msg::rosidl_typesupport_introspection_cpp::ServoMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
