// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robosense_msgs:msg/RobosenseInfoPacket.idl
// generated code does not contain a copyright notice

#ifndef ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_INFO_PACKET__TRAITS_HPP_
#define ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_INFO_PACKET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robosense_msgs/msg/detail/robosense_info_packet__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'packet'
#include "robosense_msgs/msg/detail/robosense_packet__traits.hpp"

namespace robosense_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobosenseInfoPacket & msg,
  std::ostream & out)
{
  out << "{";
  // member: lidar_model
  {
    out << "lidar_model: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_model, out);
    out << ", ";
  }

  // member: packet
  {
    out << "packet: ";
    to_flow_style_yaml(msg.packet, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobosenseInfoPacket & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lidar_model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lidar_model: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_model, out);
    out << "\n";
  }

  // member: packet
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "packet:\n";
    to_block_style_yaml(msg.packet, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobosenseInfoPacket & msg, bool use_flow_style = false)
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

}  // namespace robosense_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robosense_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robosense_msgs::msg::RobosenseInfoPacket & msg,
  std::ostream & out, size_t indentation = 0)
{
  robosense_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robosense_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robosense_msgs::msg::RobosenseInfoPacket & msg)
{
  return robosense_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robosense_msgs::msg::RobosenseInfoPacket>()
{
  return "robosense_msgs::msg::RobosenseInfoPacket";
}

template<>
inline const char * name<robosense_msgs::msg::RobosenseInfoPacket>()
{
  return "robosense_msgs/msg/RobosenseInfoPacket";
}

template<>
struct has_fixed_size<robosense_msgs::msg::RobosenseInfoPacket>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robosense_msgs::msg::RobosenseInfoPacket>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robosense_msgs::msg::RobosenseInfoPacket>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_INFO_PACKET__TRAITS_HPP_
