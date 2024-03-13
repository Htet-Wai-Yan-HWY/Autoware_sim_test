// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robosense_msgs:msg/RobosensePacket.idl
// generated code does not contain a copyright notice

#ifndef ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_PACKET__BUILDER_HPP_
#define ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_PACKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robosense_msgs/msg/detail/robosense_packet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robosense_msgs
{

namespace msg
{

namespace builder
{

class Init_RobosensePacket_data
{
public:
  explicit Init_RobosensePacket_data(::robosense_msgs::msg::RobosensePacket & msg)
  : msg_(msg)
  {}
  ::robosense_msgs::msg::RobosensePacket data(::robosense_msgs::msg::RobosensePacket::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robosense_msgs::msg::RobosensePacket msg_;
};

class Init_RobosensePacket_stamp
{
public:
  Init_RobosensePacket_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobosensePacket_data stamp(::robosense_msgs::msg::RobosensePacket::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_RobosensePacket_data(msg_);
  }

private:
  ::robosense_msgs::msg::RobosensePacket msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robosense_msgs::msg::RobosensePacket>()
{
  return robosense_msgs::msg::builder::Init_RobosensePacket_stamp();
}

}  // namespace robosense_msgs

#endif  // ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_PACKET__BUILDER_HPP_
