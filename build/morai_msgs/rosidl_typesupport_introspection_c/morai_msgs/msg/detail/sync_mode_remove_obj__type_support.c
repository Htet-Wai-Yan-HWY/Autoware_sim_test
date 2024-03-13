// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/SyncModeRemoveObj.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/sync_mode_remove_obj__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/sync_mode_remove_obj__functions.h"
#include "morai_msgs/msg/detail/sync_mode_remove_obj__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void morai_msgs__msg__SyncModeRemoveObj__rosidl_typesupport_introspection_c__SyncModeRemoveObj_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__SyncModeRemoveObj__init(message_memory);
}

void morai_msgs__msg__SyncModeRemoveObj__rosidl_typesupport_introspection_c__SyncModeRemoveObj_fini_function(void * message_memory)
{
  morai_msgs__msg__SyncModeRemoveObj__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember morai_msgs__msg__SyncModeRemoveObj__rosidl_typesupport_introspection_c__SyncModeRemoveObj_message_member_array[2] = {
  {
    "unique_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SyncModeRemoveObj, unique_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SyncModeRemoveObj, frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers morai_msgs__msg__SyncModeRemoveObj__rosidl_typesupport_introspection_c__SyncModeRemoveObj_message_members = {
  "morai_msgs__msg",  // message namespace
  "SyncModeRemoveObj",  // message name
  2,  // number of fields
  sizeof(morai_msgs__msg__SyncModeRemoveObj),
  morai_msgs__msg__SyncModeRemoveObj__rosidl_typesupport_introspection_c__SyncModeRemoveObj_message_member_array,  // message members
  morai_msgs__msg__SyncModeRemoveObj__rosidl_typesupport_introspection_c__SyncModeRemoveObj_init_function,  // function to initialize message memory (memory has to be allocated)
  morai_msgs__msg__SyncModeRemoveObj__rosidl_typesupport_introspection_c__SyncModeRemoveObj_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t morai_msgs__msg__SyncModeRemoveObj__rosidl_typesupport_introspection_c__SyncModeRemoveObj_message_type_support_handle = {
  0,
  &morai_msgs__msg__SyncModeRemoveObj__rosidl_typesupport_introspection_c__SyncModeRemoveObj_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, SyncModeRemoveObj)() {
  if (!morai_msgs__msg__SyncModeRemoveObj__rosidl_typesupport_introspection_c__SyncModeRemoveObj_message_type_support_handle.typesupport_identifier) {
    morai_msgs__msg__SyncModeRemoveObj__rosidl_typesupport_introspection_c__SyncModeRemoveObj_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &morai_msgs__msg__SyncModeRemoveObj__rosidl_typesupport_introspection_c__SyncModeRemoveObj_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif