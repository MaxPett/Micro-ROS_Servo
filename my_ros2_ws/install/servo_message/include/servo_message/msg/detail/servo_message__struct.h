// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from servo_message:msg/ServoMessage.idl
// generated code does not contain a copyright notice

#ifndef SERVO_MESSAGE__MSG__DETAIL__SERVO_MESSAGE__STRUCT_H_
#define SERVO_MESSAGE__MSG__DETAIL__SERVO_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ServoMessage in the package servo_message.
typedef struct servo_message__msg__ServoMessage
{
  int32_t servo_number;
  double servo_value;
} servo_message__msg__ServoMessage;

// Struct for a sequence of servo_message__msg__ServoMessage.
typedef struct servo_message__msg__ServoMessage__Sequence
{
  servo_message__msg__ServoMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} servo_message__msg__ServoMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVO_MESSAGE__MSG__DETAIL__SERVO_MESSAGE__STRUCT_H_
