// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tier4_perception_msgs:msg/TrafficLightRoiArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tier4_perception_msgs/msg/detail/traffic_light_roi_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tier4_perception_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrafficLightRoiArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tier4_perception_msgs::msg::TrafficLightRoiArray(_init);
}

void TrafficLightRoiArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tier4_perception_msgs::msg::TrafficLightRoiArray *>(message_memory);
  typed_message->~TrafficLightRoiArray();
}

size_t size_function__TrafficLightRoiArray__rois(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tier4_perception_msgs::msg::TrafficLightRoi> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrafficLightRoiArray__rois(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tier4_perception_msgs::msg::TrafficLightRoi> *>(untyped_member);
  return &member[index];
}

void * get_function__TrafficLightRoiArray__rois(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tier4_perception_msgs::msg::TrafficLightRoi> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrafficLightRoiArray__rois(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tier4_perception_msgs::msg::TrafficLightRoi *>(
    get_const_function__TrafficLightRoiArray__rois(untyped_member, index));
  auto & value = *reinterpret_cast<tier4_perception_msgs::msg::TrafficLightRoi *>(untyped_value);
  value = item;
}

void assign_function__TrafficLightRoiArray__rois(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tier4_perception_msgs::msg::TrafficLightRoi *>(
    get_function__TrafficLightRoiArray__rois(untyped_member, index));
  const auto & value = *reinterpret_cast<const tier4_perception_msgs::msg::TrafficLightRoi *>(untyped_value);
  item = value;
}

void resize_function__TrafficLightRoiArray__rois(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tier4_perception_msgs::msg::TrafficLightRoi> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrafficLightRoiArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs::msg::TrafficLightRoiArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rois",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tier4_perception_msgs::msg::TrafficLightRoi>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs::msg::TrafficLightRoiArray, rois),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrafficLightRoiArray__rois,  // size() function pointer
    get_const_function__TrafficLightRoiArray__rois,  // get_const(index) function pointer
    get_function__TrafficLightRoiArray__rois,  // get(index) function pointer
    fetch_function__TrafficLightRoiArray__rois,  // fetch(index, &value) function pointer
    assign_function__TrafficLightRoiArray__rois,  // assign(index, value) function pointer
    resize_function__TrafficLightRoiArray__rois  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrafficLightRoiArray_message_members = {
  "tier4_perception_msgs::msg",  // message namespace
  "TrafficLightRoiArray",  // message name
  2,  // number of fields
  sizeof(tier4_perception_msgs::msg::TrafficLightRoiArray),
  TrafficLightRoiArray_message_member_array,  // message members
  TrafficLightRoiArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficLightRoiArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrafficLightRoiArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrafficLightRoiArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tier4_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_perception_msgs::msg::TrafficLightRoiArray>()
{
  return &::tier4_perception_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficLightRoiArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tier4_perception_msgs, msg, TrafficLightRoiArray)() {
  return &::tier4_perception_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficLightRoiArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif