// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robosense_msgs:msg/RobosenseInfoPacket.idl
// generated code does not contain a copyright notice
#include "robosense_msgs/msg/detail/robosense_info_packet__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lidar_model`
#include "rosidl_runtime_c/string_functions.h"
// Member `packet`
#include "robosense_msgs/msg/detail/robosense_packet__functions.h"

bool
robosense_msgs__msg__RobosenseInfoPacket__init(robosense_msgs__msg__RobosenseInfoPacket * msg)
{
  if (!msg) {
    return false;
  }
  // lidar_model
  if (!rosidl_runtime_c__String__init(&msg->lidar_model)) {
    robosense_msgs__msg__RobosenseInfoPacket__fini(msg);
    return false;
  }
  // packet
  if (!robosense_msgs__msg__RobosensePacket__init(&msg->packet)) {
    robosense_msgs__msg__RobosenseInfoPacket__fini(msg);
    return false;
  }
  return true;
}

void
robosense_msgs__msg__RobosenseInfoPacket__fini(robosense_msgs__msg__RobosenseInfoPacket * msg)
{
  if (!msg) {
    return;
  }
  // lidar_model
  rosidl_runtime_c__String__fini(&msg->lidar_model);
  // packet
  robosense_msgs__msg__RobosensePacket__fini(&msg->packet);
}

bool
robosense_msgs__msg__RobosenseInfoPacket__are_equal(const robosense_msgs__msg__RobosenseInfoPacket * lhs, const robosense_msgs__msg__RobosenseInfoPacket * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lidar_model
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lidar_model), &(rhs->lidar_model)))
  {
    return false;
  }
  // packet
  if (!robosense_msgs__msg__RobosensePacket__are_equal(
      &(lhs->packet), &(rhs->packet)))
  {
    return false;
  }
  return true;
}

bool
robosense_msgs__msg__RobosenseInfoPacket__copy(
  const robosense_msgs__msg__RobosenseInfoPacket * input,
  robosense_msgs__msg__RobosenseInfoPacket * output)
{
  if (!input || !output) {
    return false;
  }
  // lidar_model
  if (!rosidl_runtime_c__String__copy(
      &(input->lidar_model), &(output->lidar_model)))
  {
    return false;
  }
  // packet
  if (!robosense_msgs__msg__RobosensePacket__copy(
      &(input->packet), &(output->packet)))
  {
    return false;
  }
  return true;
}

robosense_msgs__msg__RobosenseInfoPacket *
robosense_msgs__msg__RobosenseInfoPacket__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robosense_msgs__msg__RobosenseInfoPacket * msg = (robosense_msgs__msg__RobosenseInfoPacket *)allocator.allocate(sizeof(robosense_msgs__msg__RobosenseInfoPacket), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robosense_msgs__msg__RobosenseInfoPacket));
  bool success = robosense_msgs__msg__RobosenseInfoPacket__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robosense_msgs__msg__RobosenseInfoPacket__destroy(robosense_msgs__msg__RobosenseInfoPacket * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robosense_msgs__msg__RobosenseInfoPacket__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robosense_msgs__msg__RobosenseInfoPacket__Sequence__init(robosense_msgs__msg__RobosenseInfoPacket__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robosense_msgs__msg__RobosenseInfoPacket * data = NULL;

  if (size) {
    data = (robosense_msgs__msg__RobosenseInfoPacket *)allocator.zero_allocate(size, sizeof(robosense_msgs__msg__RobosenseInfoPacket), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robosense_msgs__msg__RobosenseInfoPacket__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robosense_msgs__msg__RobosenseInfoPacket__fini(&data[i - 1]);
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
robosense_msgs__msg__RobosenseInfoPacket__Sequence__fini(robosense_msgs__msg__RobosenseInfoPacket__Sequence * array)
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
      robosense_msgs__msg__RobosenseInfoPacket__fini(&array->data[i]);
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

robosense_msgs__msg__RobosenseInfoPacket__Sequence *
robosense_msgs__msg__RobosenseInfoPacket__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robosense_msgs__msg__RobosenseInfoPacket__Sequence * array = (robosense_msgs__msg__RobosenseInfoPacket__Sequence *)allocator.allocate(sizeof(robosense_msgs__msg__RobosenseInfoPacket__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robosense_msgs__msg__RobosenseInfoPacket__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robosense_msgs__msg__RobosenseInfoPacket__Sequence__destroy(robosense_msgs__msg__RobosenseInfoPacket__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robosense_msgs__msg__RobosenseInfoPacket__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robosense_msgs__msg__RobosenseInfoPacket__Sequence__are_equal(const robosense_msgs__msg__RobosenseInfoPacket__Sequence * lhs, const robosense_msgs__msg__RobosenseInfoPacket__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robosense_msgs__msg__RobosenseInfoPacket__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robosense_msgs__msg__RobosenseInfoPacket__Sequence__copy(
  const robosense_msgs__msg__RobosenseInfoPacket__Sequence * input,
  robosense_msgs__msg__RobosenseInfoPacket__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robosense_msgs__msg__RobosenseInfoPacket);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robosense_msgs__msg__RobosenseInfoPacket * data =
      (robosense_msgs__msg__RobosenseInfoPacket *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robosense_msgs__msg__RobosenseInfoPacket__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robosense_msgs__msg__RobosenseInfoPacket__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robosense_msgs__msg__RobosenseInfoPacket__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
