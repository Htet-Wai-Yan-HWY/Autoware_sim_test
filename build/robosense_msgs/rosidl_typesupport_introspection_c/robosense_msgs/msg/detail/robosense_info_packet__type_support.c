// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robosense_msgs:msg/RobosenseInfoPacket.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robosense_msgs/msg/detail/robosense_info_packet__rosidl_typesupport_introspection_c.h"
#include "robosense_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robosense_msgs/msg/detail/robosense_info_packet__functions.h"
#include "robosense_msgs/msg/detail/robosense_info_packet__struct.h"


// Include directives for member types
// Member `lidar_model`
#include "rosidl_runtime_c/string_functions.h"
// Member `packet`
#include "robosense_msgs/msg/robosense_packet.h"
// Member `packet`
#include "robosense_msgs/msg/detail/robosense_packet__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robosense_msgs__msg__RobosenseInfoPacket__rosidl_typesupport_introspection_c__RobosenseInfoPacket_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robosense_msgs__msg__RobosenseInfoPacket__init(message_memory);
}

void robosense_msgs__msg__RobosenseInfoPacket__rosidl_typesupport_introspection_c__RobosenseInfoPacket_fini_function(void * message_memory)
{
  robosense_msgs__msg__RobosenseInfoPacket__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robosense_msgs__msg__RobosenseInfoPacket__rosidl_typesupport_introspection_c__RobosenseInfoPacket_message_member_array[2] = {
  {
    "lidar_model",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robosense_msgs__msg__RobosenseInfoPacket, lidar_model),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "packet",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robosense_msgs__msg__RobosenseInfoPacket, packet),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robosense_msgs__msg__RobosenseInfoPacket__rosidl_typesupport_introspection_c__RobosenseInfoPacket_message_members = {
  "robosense_msgs__msg",  // message namespace
  "RobosenseInfoPacket",  // message name
  2,  // number of fields
  sizeof(robosense_msgs__msg__RobosenseInfoPacket),
  robosense_msgs__msg__RobosenseInfoPacket__rosidl_typesupport_introspection_c__RobosenseInfoPacket_message_member_array,  // message members
  robosense_msgs__msg__RobosenseInfoPacket__rosidl_typesupport_introspection_c__RobosenseInfoPacket_init_function,  // function to initialize message memory (memory has to be allocated)
  robosense_msgs__msg__RobosenseInfoPacket__rosidl_typesupport_introspection_c__RobosenseInfoPacket_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robosense_msgs__msg__RobosenseInfoPacket__rosidl_typesupport_introspection_c__RobosenseInfoPacket_message_type_support_handle = {
  0,
  &robosense_msgs__msg__RobosenseInfoPacket__rosidl_typesupport_introspection_c__RobosenseInfoPacket_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robosense_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robosense_msgs, msg, RobosenseInfoPacket)() {
  robosense_msgs__msg__RobosenseInfoPacket__rosidl_typesupport_introspection_c__RobosenseInfoPacket_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robosense_msgs, msg, RobosensePacket)();
  if (!robosense_msgs__msg__RobosenseInfoPacket__rosidl_typesupport_introspection_c__RobosenseInfoPacket_message_type_support_handle.typesupport_identifier) {
    robosense_msgs__msg__RobosenseInfoPacket__rosidl_typesupport_introspection_c__RobosenseInfoPacket_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robosense_msgs__msg__RobosenseInfoPacket__rosidl_typesupport_introspection_c__RobosenseInfoPacket_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
