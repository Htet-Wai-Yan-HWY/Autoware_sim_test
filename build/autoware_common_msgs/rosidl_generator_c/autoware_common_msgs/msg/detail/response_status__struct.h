// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_common_msgs:msg/ResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_COMMON_MSGS__MSG__DETAIL__RESPONSE_STATUS__STRUCT_H_
#define AUTOWARE_COMMON_MSGS__MSG__DETAIL__RESPONSE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  autoware_common_msgs__msg__ResponseStatus__UNKNOWN = 50000
};

/// Constant 'SERVICE_UNREADY'.
enum
{
  autoware_common_msgs__msg__ResponseStatus__SERVICE_UNREADY = 50001
};

/// Constant 'SERVICE_TIMEOUT'.
enum
{
  autoware_common_msgs__msg__ResponseStatus__SERVICE_TIMEOUT = 50002
};

/// Constant 'TRANSFORM_ERROR'.
enum
{
  autoware_common_msgs__msg__ResponseStatus__TRANSFORM_ERROR = 50003
};

/// Constant 'PARAMETER_ERROR'.
enum
{
  autoware_common_msgs__msg__ResponseStatus__PARAMETER_ERROR = 50004
};

/// Constant 'DEPRECATED'.
/**
  * warning code
 */
enum
{
  autoware_common_msgs__msg__ResponseStatus__DEPRECATED = 60000
};

/// Constant 'NO_EFFECT'.
enum
{
  autoware_common_msgs__msg__ResponseStatus__NO_EFFECT = 60001
};

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ResponseStatus in the package autoware_common_msgs.
/**
  * error code
 */
typedef struct autoware_common_msgs__msg__ResponseStatus
{
  /// variables
  bool success;
  uint16_t code;
  rosidl_runtime_c__String message;
} autoware_common_msgs__msg__ResponseStatus;

// Struct for a sequence of autoware_common_msgs__msg__ResponseStatus.
typedef struct autoware_common_msgs__msg__ResponseStatus__Sequence
{
  autoware_common_msgs__msg__ResponseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_common_msgs__msg__ResponseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_COMMON_MSGS__MSG__DETAIL__RESPONSE_STATUS__STRUCT_H_
