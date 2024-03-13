// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robosense_msgs:msg/RobosenseInfoPacket.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robosense_msgs/msg/detail/robosense_info_packet__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robosense_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RobosenseInfoPacket_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robosense_msgs::msg::RobosenseInfoPacket(_init);
}

void RobosenseInfoPacket_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robosense_msgs::msg::RobosenseInfoPacket *>(message_memory);
  typed_message->~RobosenseInfoPacket();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobosenseInfoPacket_message_member_array[2] = {
  {
    "lidar_model",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robosense_msgs::msg::RobosenseInfoPacket, lidar_model),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "packet",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robosense_msgs::msg::RobosensePacket>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robosense_msgs::msg::RobosenseInfoPacket, packet),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobosenseInfoPacket_message_members = {
  "robosense_msgs::msg",  // message namespace
  "RobosenseInfoPacket",  // message name
  2,  // number of fields
  sizeof(robosense_msgs::msg::RobosenseInfoPacket),
  RobosenseInfoPacket_message_member_array,  // message members
  RobosenseInfoPacket_init_function,  // function to initialize message memory (memory has to be allocated)
  RobosenseInfoPacket_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobosenseInfoPacket_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobosenseInfoPacket_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robosense_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robosense_msgs::msg::RobosenseInfoPacket>()
{
  return &::robosense_msgs::msg::rosidl_typesupport_introspection_cpp::RobosenseInfoPacket_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robosense_msgs, msg, RobosenseInfoPacket)() {
  return &::robosense_msgs::msg::rosidl_typesupport_introspection_cpp::RobosenseInfoPacket_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
