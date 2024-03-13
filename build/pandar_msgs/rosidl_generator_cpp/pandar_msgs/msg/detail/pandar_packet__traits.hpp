// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pandar_msgs:msg/PandarPacket.idl
// generated code does not contain a copyright notice

#ifndef PANDAR_MSGS__MSG__DETAIL__PANDAR_PACKET__TRAITS_HPP_
#define PANDAR_MSGS__MSG__DETAIL__PANDAR_PACKET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pandar_msgs/msg/detail/pandar_packet__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace pandar_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PandarPacket & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PandarPacket & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PandarPacket & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace pandar_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pandar_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pandar_msgs::msg::PandarPacket & msg,
  std::ostream & out, size_t indentation = 0)
{
  pandar_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pandar_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pandar_msgs::msg::PandarPacket & msg)
{
  return pandar_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pandar_msgs::msg::PandarPacket>()
{
  return "pandar_msgs::msg::PandarPacket";
}

template<>
inline const char * name<pandar_msgs::msg::PandarPacket>()
{
  return "pandar_msgs/msg/PandarPacket";
}

template<>
struct has_fixed_size<pandar_msgs::msg::PandarPacket>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<pandar_msgs::msg::PandarPacket>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<pandar_msgs::msg::PandarPacket>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PANDAR_MSGS__MSG__DETAIL__PANDAR_PACKET__TRAITS_HPP_