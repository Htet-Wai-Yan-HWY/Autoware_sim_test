// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robosense_msgs:msg/RobosenseScan.idl
// generated code does not contain a copyright notice

#ifndef ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_SCAN__BUILDER_HPP_
#define ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_SCAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robosense_msgs/msg/detail/robosense_scan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robosense_msgs
{

namespace msg
{

namespace builder
{

class Init_RobosenseScan_packets
{
public:
  explicit Init_RobosenseScan_packets(::robosense_msgs::msg::RobosenseScan & msg)
  : msg_(msg)
  {}
  ::robosense_msgs::msg::RobosenseScan packets(::robosense_msgs::msg::RobosenseScan::_packets_type arg)
  {
    msg_.packets = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robosense_msgs::msg::RobosenseScan msg_;
};

class Init_RobosenseScan_header
{
public:
  Init_RobosenseScan_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobosenseScan_packets header(::robosense_msgs::msg::RobosenseScan::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobosenseScan_packets(msg_);
  }

private:
  ::robosense_msgs::msg::RobosenseScan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robosense_msgs::msg::RobosenseScan>()
{
  return robosense_msgs::msg::builder::Init_RobosenseScan_header();
}

}  // namespace robosense_msgs

#endif  // ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_SCAN__BUILDER_HPP_
