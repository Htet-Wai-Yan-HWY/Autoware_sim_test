// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robosense_msgs:msg/RobosensePacket.idl
// generated code does not contain a copyright notice
#include "robosense_msgs/msg/detail/robosense_packet__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
robosense_msgs__msg__RobosensePacket__init(robosense_msgs__msg__RobosensePacket * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    robosense_msgs__msg__RobosensePacket__fini(msg);
    return false;
  }
  // data
  return true;
}

void
robosense_msgs__msg__RobosensePacket__fini(robosense_msgs__msg__RobosensePacket * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // data
}

bool
robosense_msgs__msg__RobosensePacket__are_equal(const robosense_msgs__msg__RobosensePacket * lhs, const robosense_msgs__msg__RobosensePacket * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // data
  for (size_t i = 0; i < 1248; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  return true;
}

bool
robosense_msgs__msg__RobosensePacket__copy(
  const robosense_msgs__msg__RobosensePacket * input,
  robosense_msgs__msg__RobosensePacket * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // data
  for (size_t i = 0; i < 1248; ++i) {
    output->data[i] = input->data[i];
  }
  return true;
}

robosense_msgs__msg__RobosensePacket *
robosense_msgs__msg__RobosensePacket__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robosense_msgs__msg__RobosensePacket * msg = (robosense_msgs__msg__RobosensePacket *)allocator.allocate(sizeof(robosense_msgs__msg__RobosensePacket), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robosense_msgs__msg__RobosensePacket));
  bool success = robosense_msgs__msg__RobosensePacket__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robosense_msgs__msg__RobosensePacket__destroy(robosense_msgs__msg__RobosensePacket * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robosense_msgs__msg__RobosensePacket__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robosense_msgs__msg__RobosensePacket__Sequence__init(robosense_msgs__msg__RobosensePacket__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robosense_msgs__msg__RobosensePacket * data = NULL;

  if (size) {
    data = (robosense_msgs__msg__RobosensePacket *)allocator.zero_allocate(size, sizeof(robosense_msgs__msg__RobosensePacket), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robosense_msgs__msg__RobosensePacket__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robosense_msgs__msg__RobosensePacket__fini(&data[i - 1]);
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
robosense_msgs__msg__RobosensePacket__Sequence__fini(robosense_msgs__msg__RobosensePacket__Sequence * array)
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
      robosense_msgs__msg__RobosensePacket__fini(&array->data[i]);
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

robosense_msgs__msg__RobosensePacket__Sequence *
robosense_msgs__msg__RobosensePacket__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robosense_msgs__msg__RobosensePacket__Sequence * array = (robosense_msgs__msg__RobosensePacket__Sequence *)allocator.allocate(sizeof(robosense_msgs__msg__RobosensePacket__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robosense_msgs__msg__RobosensePacket__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robosense_msgs__msg__RobosensePacket__Sequence__destroy(robosense_msgs__msg__RobosensePacket__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robosense_msgs__msg__RobosensePacket__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robosense_msgs__msg__RobosensePacket__Sequence__are_equal(const robosense_msgs__msg__RobosensePacket__Sequence * lhs, const robosense_msgs__msg__RobosensePacket__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robosense_msgs__msg__RobosensePacket__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robosense_msgs__msg__RobosensePacket__Sequence__copy(
  const robosense_msgs__msg__RobosensePacket__Sequence * input,
  robosense_msgs__msg__RobosensePacket__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robosense_msgs__msg__RobosensePacket);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robosense_msgs__msg__RobosensePacket * data =
      (robosense_msgs__msg__RobosensePacket *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robosense_msgs__msg__RobosensePacket__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robosense_msgs__msg__RobosensePacket__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robosense_msgs__msg__RobosensePacket__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
