// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robosense_msgs:msg/RobosenseScan.idl
// generated code does not contain a copyright notice

#ifndef ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_SCAN__STRUCT_H_
#define ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_SCAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'packets'
#include "robosense_msgs/msg/detail/robosense_packet__struct.h"

/// Struct defined in msg/RobosenseScan in the package robosense_msgs.
typedef struct robosense_msgs__msg__RobosenseScan
{
  std_msgs__msg__Header header;
  robosense_msgs__msg__RobosensePacket__Sequence packets;
} robosense_msgs__msg__RobosenseScan;

// Struct for a sequence of robosense_msgs__msg__RobosenseScan.
typedef struct robosense_msgs__msg__RobosenseScan__Sequence
{
  robosense_msgs__msg__RobosenseScan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robosense_msgs__msg__RobosenseScan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_SCAN__STRUCT_H_
