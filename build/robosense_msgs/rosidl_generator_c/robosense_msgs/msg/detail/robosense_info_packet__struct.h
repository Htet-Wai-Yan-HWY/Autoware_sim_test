// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robosense_msgs:msg/RobosenseInfoPacket.idl
// generated code does not contain a copyright notice

#ifndef ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_INFO_PACKET__STRUCT_H_
#define ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_INFO_PACKET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lidar_model'
#include "rosidl_runtime_c/string.h"
// Member 'packet'
#include "robosense_msgs/msg/detail/robosense_packet__struct.h"

/// Struct defined in msg/RobosenseInfoPacket in the package robosense_msgs.
typedef struct robosense_msgs__msg__RobosenseInfoPacket
{
  rosidl_runtime_c__String lidar_model;
  robosense_msgs__msg__RobosensePacket packet;
} robosense_msgs__msg__RobosenseInfoPacket;

// Struct for a sequence of robosense_msgs__msg__RobosenseInfoPacket.
typedef struct robosense_msgs__msg__RobosenseInfoPacket__Sequence
{
  robosense_msgs__msg__RobosenseInfoPacket * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robosense_msgs__msg__RobosenseInfoPacket__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_INFO_PACKET__STRUCT_H_
