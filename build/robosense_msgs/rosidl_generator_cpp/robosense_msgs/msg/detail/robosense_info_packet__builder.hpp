// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robosense_msgs:msg/RobosenseInfoPacket.idl
// generated code does not contain a copyright notice

#ifndef ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_INFO_PACKET__BUILDER_HPP_
#define ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_INFO_PACKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robosense_msgs/msg/detail/robosense_info_packet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robosense_msgs
{

namespace msg
{

namespace builder
{

class Init_RobosenseInfoPacket_packet
{
public:
  explicit Init_RobosenseInfoPacket_packet(::robosense_msgs::msg::RobosenseInfoPacket & msg)
  : msg_(msg)
  {}
  ::robosense_msgs::msg::RobosenseInfoPacket packet(::robosense_msgs::msg::RobosenseInfoPacket::_packet_type arg)
  {
    msg_.packet = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robosense_msgs::msg::RobosenseInfoPacket msg_;
};

class Init_RobosenseInfoPacket_lidar_model
{
public:
  Init_RobosenseInfoPacket_lidar_model()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobosenseInfoPacket_packet lidar_model(::robosense_msgs::msg::RobosenseInfoPacket::_lidar_model_type arg)
  {
    msg_.lidar_model = std::move(arg);
    return Init_RobosenseInfoPacket_packet(msg_);
  }

private:
  ::robosense_msgs::msg::RobosenseInfoPacket msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robosense_msgs::msg::RobosenseInfoPacket>()
{
  return robosense_msgs::msg::builder::Init_RobosenseInfoPacket_lidar_model();
}

}  // namespace robosense_msgs

#endif  // ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_INFO_PACKET__BUILDER_HPP_
