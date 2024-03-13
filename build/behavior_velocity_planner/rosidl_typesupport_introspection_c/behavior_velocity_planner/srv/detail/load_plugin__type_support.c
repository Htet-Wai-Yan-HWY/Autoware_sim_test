// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from behavior_velocity_planner:srv/LoadPlugin.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "behavior_velocity_planner/srv/detail/load_plugin__rosidl_typesupport_introspection_c.h"
#include "behavior_velocity_planner/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "behavior_velocity_planner/srv/detail/load_plugin__functions.h"
#include "behavior_velocity_planner/srv/detail/load_plugin__struct.h"


// Include directives for member types
// Member `plugin_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_velocity_planner__srv__LoadPlugin_Request__rosidl_typesupport_introspection_c__LoadPlugin_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_velocity_planner__srv__LoadPlugin_Request__init(message_memory);
}

void behavior_velocity_planner__srv__LoadPlugin_Request__rosidl_typesupport_introspection_c__LoadPlugin_Request_fini_function(void * message_memory)
{
  behavior_velocity_planner__srv__LoadPlugin_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_velocity_planner__srv__LoadPlugin_Request__rosidl_typesupport_introspection_c__LoadPlugin_Request_message_member_array[1] = {
  {
    "plugin_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_velocity_planner__srv__LoadPlugin_Request, plugin_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_velocity_planner__srv__LoadPlugin_Request__rosidl_typesupport_introspection_c__LoadPlugin_Request_message_members = {
  "behavior_velocity_planner__srv",  // message namespace
  "LoadPlugin_Request",  // message name
  1,  // number of fields
  sizeof(behavior_velocity_planner__srv__LoadPlugin_Request),
  behavior_velocity_planner__srv__LoadPlugin_Request__rosidl_typesupport_introspection_c__LoadPlugin_Request_message_member_array,  // message members
  behavior_velocity_planner__srv__LoadPlugin_Request__rosidl_typesupport_introspection_c__LoadPlugin_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_velocity_planner__srv__LoadPlugin_Request__rosidl_typesupport_introspection_c__LoadPlugin_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_velocity_planner__srv__LoadPlugin_Request__rosidl_typesupport_introspection_c__LoadPlugin_Request_message_type_support_handle = {
  0,
  &behavior_velocity_planner__srv__LoadPlugin_Request__rosidl_typesupport_introspection_c__LoadPlugin_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_velocity_planner
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_velocity_planner, srv, LoadPlugin_Request)() {
  if (!behavior_velocity_planner__srv__LoadPlugin_Request__rosidl_typesupport_introspection_c__LoadPlugin_Request_message_type_support_handle.typesupport_identifier) {
    behavior_velocity_planner__srv__LoadPlugin_Request__rosidl_typesupport_introspection_c__LoadPlugin_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_velocity_planner__srv__LoadPlugin_Request__rosidl_typesupport_introspection_c__LoadPlugin_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_velocity_planner/srv/detail/load_plugin__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_velocity_planner/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_velocity_planner/srv/detail/load_plugin__functions.h"
// already included above
// #include "behavior_velocity_planner/srv/detail/load_plugin__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void behavior_velocity_planner__srv__LoadPlugin_Response__rosidl_typesupport_introspection_c__LoadPlugin_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_velocity_planner__srv__LoadPlugin_Response__init(message_memory);
}

void behavior_velocity_planner__srv__LoadPlugin_Response__rosidl_typesupport_introspection_c__LoadPlugin_Response_fini_function(void * message_memory)
{
  behavior_velocity_planner__srv__LoadPlugin_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_velocity_planner__srv__LoadPlugin_Response__rosidl_typesupport_introspection_c__LoadPlugin_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_velocity_planner__srv__LoadPlugin_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_velocity_planner__srv__LoadPlugin_Response__rosidl_typesupport_introspection_c__LoadPlugin_Response_message_members = {
  "behavior_velocity_planner__srv",  // message namespace
  "LoadPlugin_Response",  // message name
  1,  // number of fields
  sizeof(behavior_velocity_planner__srv__LoadPlugin_Response),
  behavior_velocity_planner__srv__LoadPlugin_Response__rosidl_typesupport_introspection_c__LoadPlugin_Response_message_member_array,  // message members
  behavior_velocity_planner__srv__LoadPlugin_Response__rosidl_typesupport_introspection_c__LoadPlugin_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_velocity_planner__srv__LoadPlugin_Response__rosidl_typesupport_introspection_c__LoadPlugin_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_velocity_planner__srv__LoadPlugin_Response__rosidl_typesupport_introspection_c__LoadPlugin_Response_message_type_support_handle = {
  0,
  &behavior_velocity_planner__srv__LoadPlugin_Response__rosidl_typesupport_introspection_c__LoadPlugin_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_velocity_planner
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_velocity_planner, srv, LoadPlugin_Response)() {
  if (!behavior_velocity_planner__srv__LoadPlugin_Response__rosidl_typesupport_introspection_c__LoadPlugin_Response_message_type_support_handle.typesupport_identifier) {
    behavior_velocity_planner__srv__LoadPlugin_Response__rosidl_typesupport_introspection_c__LoadPlugin_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_velocity_planner__srv__LoadPlugin_Response__rosidl_typesupport_introspection_c__LoadPlugin_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "behavior_velocity_planner/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "behavior_velocity_planner/srv/detail/load_plugin__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers behavior_velocity_planner__srv__detail__load_plugin__rosidl_typesupport_introspection_c__LoadPlugin_service_members = {
  "behavior_velocity_planner__srv",  // service namespace
  "LoadPlugin",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // behavior_velocity_planner__srv__detail__load_plugin__rosidl_typesupport_introspection_c__LoadPlugin_Request_message_type_support_handle,
  NULL  // response message
  // behavior_velocity_planner__srv__detail__load_plugin__rosidl_typesupport_introspection_c__LoadPlugin_Response_message_type_support_handle
};

static rosidl_service_type_support_t behavior_velocity_planner__srv__detail__load_plugin__rosidl_typesupport_introspection_c__LoadPlugin_service_type_support_handle = {
  0,
  &behavior_velocity_planner__srv__detail__load_plugin__rosidl_typesupport_introspection_c__LoadPlugin_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_velocity_planner, srv, LoadPlugin_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_velocity_planner, srv, LoadPlugin_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_velocity_planner
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_velocity_planner, srv, LoadPlugin)() {
  if (!behavior_velocity_planner__srv__detail__load_plugin__rosidl_typesupport_introspection_c__LoadPlugin_service_type_support_handle.typesupport_identifier) {
    behavior_velocity_planner__srv__detail__load_plugin__rosidl_typesupport_introspection_c__LoadPlugin_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)behavior_velocity_planner__srv__detail__load_plugin__rosidl_typesupport_introspection_c__LoadPlugin_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_velocity_planner, srv, LoadPlugin_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_velocity_planner, srv, LoadPlugin_Response)()->data;
  }

  return &behavior_velocity_planner__srv__detail__load_plugin__rosidl_typesupport_introspection_c__LoadPlugin_service_type_support_handle;
}