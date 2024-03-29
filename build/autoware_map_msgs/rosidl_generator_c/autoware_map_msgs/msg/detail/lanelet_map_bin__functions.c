// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_map_msgs:msg/LaneletMapBin.idl
// generated code does not contain a copyright notice
#include "autoware_map_msgs/msg/detail/lanelet_map_bin__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `version_map_format`
// Member `version_map`
// Member `name_map`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
autoware_map_msgs__msg__LaneletMapBin__init(autoware_map_msgs__msg__LaneletMapBin * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_map_msgs__msg__LaneletMapBin__fini(msg);
    return false;
  }
  // version_map_format
  if (!rosidl_runtime_c__String__init(&msg->version_map_format)) {
    autoware_map_msgs__msg__LaneletMapBin__fini(msg);
    return false;
  }
  // version_map
  if (!rosidl_runtime_c__String__init(&msg->version_map)) {
    autoware_map_msgs__msg__LaneletMapBin__fini(msg);
    return false;
  }
  // name_map
  if (!rosidl_runtime_c__String__init(&msg->name_map)) {
    autoware_map_msgs__msg__LaneletMapBin__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    autoware_map_msgs__msg__LaneletMapBin__fini(msg);
    return false;
  }
  return true;
}

void
autoware_map_msgs__msg__LaneletMapBin__fini(autoware_map_msgs__msg__LaneletMapBin * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // version_map_format
  rosidl_runtime_c__String__fini(&msg->version_map_format);
  // version_map
  rosidl_runtime_c__String__fini(&msg->version_map);
  // name_map
  rosidl_runtime_c__String__fini(&msg->name_map);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
autoware_map_msgs__msg__LaneletMapBin__are_equal(const autoware_map_msgs__msg__LaneletMapBin * lhs, const autoware_map_msgs__msg__LaneletMapBin * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // version_map_format
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version_map_format), &(rhs->version_map_format)))
  {
    return false;
  }
  // version_map
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version_map), &(rhs->version_map)))
  {
    return false;
  }
  // name_map
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name_map), &(rhs->name_map)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
autoware_map_msgs__msg__LaneletMapBin__copy(
  const autoware_map_msgs__msg__LaneletMapBin * input,
  autoware_map_msgs__msg__LaneletMapBin * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // version_map_format
  if (!rosidl_runtime_c__String__copy(
      &(input->version_map_format), &(output->version_map_format)))
  {
    return false;
  }
  // version_map
  if (!rosidl_runtime_c__String__copy(
      &(input->version_map), &(output->version_map)))
  {
    return false;
  }
  // name_map
  if (!rosidl_runtime_c__String__copy(
      &(input->name_map), &(output->name_map)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

autoware_map_msgs__msg__LaneletMapBin *
autoware_map_msgs__msg__LaneletMapBin__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_map_msgs__msg__LaneletMapBin * msg = (autoware_map_msgs__msg__LaneletMapBin *)allocator.allocate(sizeof(autoware_map_msgs__msg__LaneletMapBin), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_map_msgs__msg__LaneletMapBin));
  bool success = autoware_map_msgs__msg__LaneletMapBin__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_map_msgs__msg__LaneletMapBin__destroy(autoware_map_msgs__msg__LaneletMapBin * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_map_msgs__msg__LaneletMapBin__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_map_msgs__msg__LaneletMapBin__Sequence__init(autoware_map_msgs__msg__LaneletMapBin__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_map_msgs__msg__LaneletMapBin * data = NULL;

  if (size) {
    data = (autoware_map_msgs__msg__LaneletMapBin *)allocator.zero_allocate(size, sizeof(autoware_map_msgs__msg__LaneletMapBin), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_map_msgs__msg__LaneletMapBin__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_map_msgs__msg__LaneletMapBin__fini(&data[i - 1]);
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
autoware_map_msgs__msg__LaneletMapBin__Sequence__fini(autoware_map_msgs__msg__LaneletMapBin__Sequence * array)
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
      autoware_map_msgs__msg__LaneletMapBin__fini(&array->data[i]);
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

autoware_map_msgs__msg__LaneletMapBin__Sequence *
autoware_map_msgs__msg__LaneletMapBin__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_map_msgs__msg__LaneletMapBin__Sequence * array = (autoware_map_msgs__msg__LaneletMapBin__Sequence *)allocator.allocate(sizeof(autoware_map_msgs__msg__LaneletMapBin__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_map_msgs__msg__LaneletMapBin__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_map_msgs__msg__LaneletMapBin__Sequence__destroy(autoware_map_msgs__msg__LaneletMapBin__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_map_msgs__msg__LaneletMapBin__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_map_msgs__msg__LaneletMapBin__Sequence__are_equal(const autoware_map_msgs__msg__LaneletMapBin__Sequence * lhs, const autoware_map_msgs__msg__LaneletMapBin__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_map_msgs__msg__LaneletMapBin__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_map_msgs__msg__LaneletMapBin__Sequence__copy(
  const autoware_map_msgs__msg__LaneletMapBin__Sequence * input,
  autoware_map_msgs__msg__LaneletMapBin__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_map_msgs__msg__LaneletMapBin);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_map_msgs__msg__LaneletMapBin * data =
      (autoware_map_msgs__msg__LaneletMapBin *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_map_msgs__msg__LaneletMapBin__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_map_msgs__msg__LaneletMapBin__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_map_msgs__msg__LaneletMapBin__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
