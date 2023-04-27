// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from servo_message:msg/ServoMessage.idl
// generated code does not contain a copyright notice

#ifndef SERVO_MESSAGE__MSG__DETAIL__SERVO_MESSAGE__STRUCT_HPP_
#define SERVO_MESSAGE__MSG__DETAIL__SERVO_MESSAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__servo_message__msg__ServoMessage __attribute__((deprecated))
#else
# define DEPRECATED__servo_message__msg__ServoMessage __declspec(deprecated)
#endif

namespace servo_message
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServoMessage_
{
  using Type = ServoMessage_<ContainerAllocator>;

  explicit ServoMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo_number = 0l;
      this->servo_value = 0.0;
    }
  }

  explicit ServoMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo_number = 0l;
      this->servo_value = 0.0;
    }
  }

  // field types and members
  using _servo_number_type =
    int32_t;
  _servo_number_type servo_number;
  using _servo_value_type =
    double;
  _servo_value_type servo_value;

  // setters for named parameter idiom
  Type & set__servo_number(
    const int32_t & _arg)
  {
    this->servo_number = _arg;
    return *this;
  }
  Type & set__servo_value(
    const double & _arg)
  {
    this->servo_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    servo_message::msg::ServoMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const servo_message::msg::ServoMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<servo_message::msg::ServoMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<servo_message::msg::ServoMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      servo_message::msg::ServoMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<servo_message::msg::ServoMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      servo_message::msg::ServoMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<servo_message::msg::ServoMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<servo_message::msg::ServoMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<servo_message::msg::ServoMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__servo_message__msg__ServoMessage
    std::shared_ptr<servo_message::msg::ServoMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__servo_message__msg__ServoMessage
    std::shared_ptr<servo_message::msg::ServoMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoMessage_ & other) const
  {
    if (this->servo_number != other.servo_number) {
      return false;
    }
    if (this->servo_value != other.servo_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoMessage_

// alias to use template instance with default allocator
using ServoMessage =
  servo_message::msg::ServoMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace servo_message

#endif  // SERVO_MESSAGE__MSG__DETAIL__SERVO_MESSAGE__STRUCT_HPP_
