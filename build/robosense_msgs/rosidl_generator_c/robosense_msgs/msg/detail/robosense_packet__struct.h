// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robosense_msgs:msg/RobosensePacket.idl
// generated code does not contain a copyright notice

#ifndef ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_PACKET__STRUCT_H_
#define ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_PACKET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/RobosensePacket in the package robosense_msgs.
typedef struct robosense_msgs__msg__RobosensePacket
{
  builtin_interfaces__msg__Time stamp;
  uint8_t data[1248];
} robosense_msgs__msg__RobosensePacket;

// Struct for a sequence of robosense_msgs__msg__RobosensePacket.
typedef struct robosense_msgs__msg__RobosensePacket__Sequence
{
  robosense_msgs__msg__RobosensePacket * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robosense_msgs__msg__RobosensePacket__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_PACKET__STRUCT_H_
