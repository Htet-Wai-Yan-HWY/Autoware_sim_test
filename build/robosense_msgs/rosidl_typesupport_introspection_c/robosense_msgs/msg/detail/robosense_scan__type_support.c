// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robosense_msgs:msg/RobosenseScan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robosense_msgs/msg/detail/robosense_scan__rosidl_typesupport_introspection_c.h"
#include "robosense_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robosense_msgs/msg/detail/robosense_scan__functions.h"
#include "robosense_msgs/msg/detail/robosense_scan__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `packets`
#include "robosense_msgs/msg/robosense_packet.h"
// Member `packets`
#include "robosense_msgs/msg/detail/robosense_packet__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__RobosenseScan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robosense_msgs__msg__RobosenseScan__init(message_memory);
}

void robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__RobosenseScan_fini_function(void * message_memory)
{
  robosense_msgs__msg__RobosenseScan__fini(message_memory);
}

size_t robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__size_function__RobosenseScan__packets(
  const void * untyped_member)
{
  const robosense_msgs__msg__RobosensePacket__Sequence * member =
    (const robosense_msgs__msg__RobosensePacket__Sequence *)(untyped_member);
  return member->size;
}

const void * robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__get_const_function__RobosenseScan__packets(
  const void * untyped_member, size_t index)
{
  const robosense_msgs__msg__RobosensePacket__Sequence * member =
    (const robosense_msgs__msg__RobosensePacket__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__get_function__RobosenseScan__packets(
  void * untyped_member, size_t index)
{
  robosense_msgs__msg__RobosensePacket__Sequence * member =
    (robosense_msgs__msg__RobosensePacket__Sequence *)(untyped_member);
  return &member->data[index];
}

void robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__fetch_function__RobosenseScan__packets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robosense_msgs__msg__RobosensePacket * item =
    ((const robosense_msgs__msg__RobosensePacket *)
    robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__get_const_function__RobosenseScan__packets(untyped_member, index));
  robosense_msgs__msg__RobosensePacket * value =
    (robosense_msgs__msg__RobosensePacket *)(untyped_value);
  *value = *item;
}

void robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__assign_function__RobosenseScan__packets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robosense_msgs__msg__RobosensePacket * item =
    ((robosense_msgs__msg__RobosensePacket *)
    robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__get_function__RobosenseScan__packets(untyped_member, index));
  const robosense_msgs__msg__RobosensePacket * value =
    (const robosense_msgs__msg__RobosensePacket *)(untyped_value);
  *item = *value;
}

bool robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__resize_function__RobosenseScan__packets(
  void * untyped_member, size_t size)
{
  robosense_msgs__msg__RobosensePacket__Sequence * member =
    (robosense_msgs__msg__RobosensePacket__Sequence *)(untyped_member);
  robosense_msgs__msg__RobosensePacket__Sequence__fini(member);
  return robosense_msgs__msg__RobosensePacket__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__RobosenseScan_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robosense_msgs__msg__RobosenseScan, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "packets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robosense_msgs__msg__RobosenseScan, packets),  // bytes offset in struct
    NULL,  // default value
    robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__size_function__RobosenseScan__packets,  // size() function pointer
    robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__get_const_function__RobosenseScan__packets,  // get_const(index) function pointer
    robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__get_function__RobosenseScan__packets,  // get(index) function pointer
    robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__fetch_function__RobosenseScan__packets,  // fetch(index, &value) function pointer
    robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__assign_function__RobosenseScan__packets,  // assign(index, value) function pointer
    robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__resize_function__RobosenseScan__packets  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__RobosenseScan_message_members = {
  "robosense_msgs__msg",  // message namespace
  "RobosenseScan",  // message name
  2,  // number of fields
  sizeof(robosense_msgs__msg__RobosenseScan),
  robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__RobosenseScan_message_member_array,  // message members
  robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__RobosenseScan_init_function,  // function to initialize message memory (memory has to be allocated)
  robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__RobosenseScan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__RobosenseScan_message_type_support_handle = {
  0,
  &robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__RobosenseScan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robosense_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robosense_msgs, msg, RobosenseScan)() {
  robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__RobosenseScan_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__RobosenseScan_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robosense_msgs, msg, RobosensePacket)();
  if (!robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__RobosenseScan_message_type_support_handle.typesupport_identifier) {
    robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__RobosenseScan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robosense_msgs__msg__RobosenseScan__rosidl_typesupport_introspection_c__RobosenseScan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
