// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_system_msgs:msg/AutowareState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__TRAITS_HPP_
#define AUTOWARE_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_system_msgs/msg/detail/autoware_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace autoware_system_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AutowareState & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AutowareState & msg,
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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AutowareState & msg, bool use_flow_style = false)
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

}  // namespace autoware_system_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_system_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_system_msgs::msg::AutowareState & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_system_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_system_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_system_msgs::msg::AutowareState & msg)
{
  return autoware_system_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_system_msgs::msg::AutowareState>()
{
  return "autoware_system_msgs::msg::AutowareState";
}

template<>
inline const char * name<autoware_system_msgs::msg::AutowareState>()
{
  return "autoware_system_msgs/msg/AutowareState";
}

template<>
struct has_fixed_size<autoware_system_msgs::msg::AutowareState>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_system_msgs::msg::AutowareState>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_system_msgs::msg::AutowareState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__TRAITS_HPP_