// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from eagleye_msgs:msg/AngularVelocityOffset.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "eagleye_msgs/msg/detail/angular_velocity_offset__rosidl_typesupport_introspection_c.h"
#include "eagleye_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "eagleye_msgs/msg/detail/angular_velocity_offset__functions.h"
#include "eagleye_msgs/msg/detail/angular_velocity_offset__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `angular_velocity_offset`
#include "geometry_msgs/msg/vector3.h"
// Member `angular_velocity_offset`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "eagleye_msgs/msg/status.h"
// Member `status`
#include "eagleye_msgs/msg/detail/status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void eagleye_msgs__msg__AngularVelocityOffset__rosidl_typesupport_introspection_c__AngularVelocityOffset_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  eagleye_msgs__msg__AngularVelocityOffset__init(message_memory);
}

void eagleye_msgs__msg__AngularVelocityOffset__rosidl_typesupport_introspection_c__AngularVelocityOffset_fini_function(void * message_memory)
{
  eagleye_msgs__msg__AngularVelocityOffset__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember eagleye_msgs__msg__AngularVelocityOffset__rosidl_typesupport_introspection_c__AngularVelocityOffset_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eagleye_msgs__msg__AngularVelocityOffset, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eagleye_msgs__msg__AngularVelocityOffset, angular_velocity_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eagleye_msgs__msg__AngularVelocityOffset, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers eagleye_msgs__msg__AngularVelocityOffset__rosidl_typesupport_introspection_c__AngularVelocityOffset_message_members = {
  "eagleye_msgs__msg",  // message namespace
  "AngularVelocityOffset",  // message name
  3,  // number of fields
  sizeof(eagleye_msgs__msg__AngularVelocityOffset),
  eagleye_msgs__msg__AngularVelocityOffset__rosidl_typesupport_introspection_c__AngularVelocityOffset_message_member_array,  // message members
  eagleye_msgs__msg__AngularVelocityOffset__rosidl_typesupport_introspection_c__AngularVelocityOffset_init_function,  // function to initialize message memory (memory has to be allocated)
  eagleye_msgs__msg__AngularVelocityOffset__rosidl_typesupport_introspection_c__AngularVelocityOffset_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t eagleye_msgs__msg__AngularVelocityOffset__rosidl_typesupport_introspection_c__AngularVelocityOffset_message_type_support_handle = {
  0,
  &eagleye_msgs__msg__AngularVelocityOffset__rosidl_typesupport_introspection_c__AngularVelocityOffset_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_eagleye_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eagleye_msgs, msg, AngularVelocityOffset)() {
  eagleye_msgs__msg__AngularVelocityOffset__rosidl_typesupport_introspection_c__AngularVelocityOffset_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  eagleye_msgs__msg__AngularVelocityOffset__rosidl_typesupport_introspection_c__AngularVelocityOffset_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  eagleye_msgs__msg__AngularVelocityOffset__rosidl_typesupport_introspection_c__AngularVelocityOffset_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eagleye_msgs, msg, Status)();
  if (!eagleye_msgs__msg__AngularVelocityOffset__rosidl_typesupport_introspection_c__AngularVelocityOffset_message_type_support_handle.typesupport_identifier) {
    eagleye_msgs__msg__AngularVelocityOffset__rosidl_typesupport_introspection_c__AngularVelocityOffset_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &eagleye_msgs__msg__AngularVelocityOffset__rosidl_typesupport_introspection_c__AngularVelocityOffset_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif