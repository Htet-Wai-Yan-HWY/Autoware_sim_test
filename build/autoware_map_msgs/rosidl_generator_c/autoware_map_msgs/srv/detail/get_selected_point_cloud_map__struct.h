// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_map_msgs:srv/GetSelectedPointCloudMap.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_SELECTED_POINT_CLOUD_MAP__STRUCT_H_
#define AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_SELECTED_POINT_CLOUD_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cell_ids'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetSelectedPointCloudMap in the package autoware_map_msgs.
typedef struct autoware_map_msgs__srv__GetSelectedPointCloudMap_Request
{
  rosidl_runtime_c__String__Sequence cell_ids;
} autoware_map_msgs__srv__GetSelectedPointCloudMap_Request;

// Struct for a sequence of autoware_map_msgs__srv__GetSelectedPointCloudMap_Request.
typedef struct autoware_map_msgs__srv__GetSelectedPointCloudMap_Request__Sequence
{
  autoware_map_msgs__srv__GetSelectedPointCloudMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_map_msgs__srv__GetSelectedPointCloudMap_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'new_pointcloud_with_ids'
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_with_id__struct.h"

/// Struct defined in srv/GetSelectedPointCloudMap in the package autoware_map_msgs.
typedef struct autoware_map_msgs__srv__GetSelectedPointCloudMap_Response
{
  std_msgs__msg__Header header;
  /// Newly loaded PCD maps with ID
  autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence new_pointcloud_with_ids;
} autoware_map_msgs__srv__GetSelectedPointCloudMap_Response;

// Struct for a sequence of autoware_map_msgs__srv__GetSelectedPointCloudMap_Response.
typedef struct autoware_map_msgs__srv__GetSelectedPointCloudMap_Response__Sequence
{
  autoware_map_msgs__srv__GetSelectedPointCloudMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_map_msgs__srv__GetSelectedPointCloudMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_SELECTED_POINT_CLOUD_MAP__STRUCT_H_
