// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robosense_msgs:msg/RobosenseScan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robosense_msgs/msg/detail/robosense_scan__struct.hpp"
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

void RobosenseScan_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robosense_msgs::msg::RobosenseScan(_init);
}

void RobosenseScan_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robosense_msgs::msg::RobosenseScan *>(message_memory);
  typed_message->~RobosenseScan();
}

size_t size_function__RobosenseScan__packets(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robosense_msgs::msg::RobosensePacket> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobosenseScan__packets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robosense_msgs::msg::RobosensePacket> *>(untyped_member);
  return &member[index];
}

void * get_function__RobosenseScan__packets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robosense_msgs::msg::RobosensePacket> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobosenseScan__packets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const robosense_msgs::msg::RobosensePacket *>(
    get_const_function__RobosenseScan__packets(untyped_member, index));
  auto & value = *reinterpret_cast<robosense_msgs::msg::RobosensePacket *>(untyped_value);
  value = item;
}

void assign_function__RobosenseScan__packets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<robosense_msgs::msg::RobosensePacket *>(
    get_function__RobosenseScan__packets(untyped_member, index));
  const auto & value = *reinterpret_cast<const robosense_msgs::msg::RobosensePacket *>(untyped_value);
  item = value;
}

void resize_function__RobosenseScan__packets(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robosense_msgs::msg::RobosensePacket> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobosenseScan_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robosense_msgs::msg::RobosenseScan, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "packets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robosense_msgs::msg::RobosensePacket>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robosense_msgs::msg::RobosenseScan, packets),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobosenseScan__packets,  // size() function pointer
    get_const_function__RobosenseScan__packets,  // get_const(index) function pointer
    get_function__RobosenseScan__packets,  // get(index) function pointer
    fetch_function__RobosenseScan__packets,  // fetch(index, &value) function pointer
    assign_function__RobosenseScan__packets,  // assign(index, value) function pointer
    resize_function__RobosenseScan__packets  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobosenseScan_message_members = {
  "robosense_msgs::msg",  // message namespace
  "RobosenseScan",  // message name
  2,  // number of fields
  sizeof(robosense_msgs::msg::RobosenseScan),
  RobosenseScan_message_member_array,  // message members
  RobosenseScan_init_function,  // function to initialize message memory (memory has to be allocated)
  RobosenseScan_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobosenseScan_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobosenseScan_message_members,
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
get_message_type_support_handle<robosense_msgs::msg::RobosenseScan>()
{
  return &::robosense_msgs::msg::rosidl_typesupport_introspection_cpp::RobosenseScan_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robosense_msgs, msg, RobosenseScan)() {
  return &::robosense_msgs::msg::rosidl_typesupport_introspection_cpp::RobosenseScan_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
