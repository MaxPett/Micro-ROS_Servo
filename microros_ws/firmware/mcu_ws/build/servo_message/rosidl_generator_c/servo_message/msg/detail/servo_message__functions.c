// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from servo_message:msg/ServoMessage.idl
// generated code does not contain a copyright notice
#include "servo_message/msg/detail/servo_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
servo_message__msg__ServoMessage__init(servo_message__msg__ServoMessage * msg)
{
  if (!msg) {
    return false;
  }
  // servo_number
  // servo_value
  return true;
}

void
servo_message__msg__ServoMessage__fini(servo_message__msg__ServoMessage * msg)
{
  if (!msg) {
    return;
  }
  // servo_number
  // servo_value
}

bool
servo_message__msg__ServoMessage__are_equal(const servo_message__msg__ServoMessage * lhs, const servo_message__msg__ServoMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // servo_number
  if (lhs->servo_number != rhs->servo_number) {
    return false;
  }
  // servo_value
  if (lhs->servo_value != rhs->servo_value) {
    return false;
  }
  return true;
}

bool
servo_message__msg__ServoMessage__copy(
  const servo_message__msg__ServoMessage * input,
  servo_message__msg__ServoMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // servo_number
  output->servo_number = input->servo_number;
  // servo_value
  output->servo_value = input->servo_value;
  return true;
}

servo_message__msg__ServoMessage *
servo_message__msg__ServoMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_message__msg__ServoMessage * msg = (servo_message__msg__ServoMessage *)allocator.allocate(sizeof(servo_message__msg__ServoMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(servo_message__msg__ServoMessage));
  bool success = servo_message__msg__ServoMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
servo_message__msg__ServoMessage__destroy(servo_message__msg__ServoMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    servo_message__msg__ServoMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
servo_message__msg__ServoMessage__Sequence__init(servo_message__msg__ServoMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_message__msg__ServoMessage * data = NULL;

  if (size) {
    data = (servo_message__msg__ServoMessage *)allocator.zero_allocate(size, sizeof(servo_message__msg__ServoMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = servo_message__msg__ServoMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        servo_message__msg__ServoMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
servo_message__msg__ServoMessage__Sequence__fini(servo_message__msg__ServoMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      servo_message__msg__ServoMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

servo_message__msg__ServoMessage__Sequence *
servo_message__msg__ServoMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_message__msg__ServoMessage__Sequence * array = (servo_message__msg__ServoMessage__Sequence *)allocator.allocate(sizeof(servo_message__msg__ServoMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = servo_message__msg__ServoMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
servo_message__msg__ServoMessage__Sequence__destroy(servo_message__msg__ServoMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    servo_message__msg__ServoMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
servo_message__msg__ServoMessage__Sequence__are_equal(const servo_message__msg__ServoMessage__Sequence * lhs, const servo_message__msg__ServoMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!servo_message__msg__ServoMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
servo_message__msg__ServoMessage__Sequence__copy(
  const servo_message__msg__ServoMessage__Sequence * input,
  servo_message__msg__ServoMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(servo_message__msg__ServoMessage);
    servo_message__msg__ServoMessage * data =
      (servo_message__msg__ServoMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!servo_message__msg__ServoMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          servo_message__msg__ServoMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!servo_message__msg__ServoMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
