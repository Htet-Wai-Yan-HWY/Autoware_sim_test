// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_hmi_msgs:srv/SetVolume.idl
// generated code does not contain a copyright notice

#ifndef TIER4_HMI_MSGS__SRV__DETAIL__SET_VOLUME__BUILDER_HPP_
#define TIER4_HMI_MSGS__SRV__DETAIL__SET_VOLUME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_hmi_msgs/srv/detail/set_volume__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_hmi_msgs
{

namespace srv
{

namespace builder
{

class Init_SetVolume_Request_volume
{
public:
  Init_SetVolume_Request_volume()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_hmi_msgs::srv::SetVolume_Request volume(::tier4_hmi_msgs::srv::SetVolume_Request::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_hmi_msgs::srv::SetVolume_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_hmi_msgs::srv::SetVolume_Request>()
{
  return tier4_hmi_msgs::srv::builder::Init_SetVolume_Request_volume();
}

}  // namespace tier4_hmi_msgs


namespace tier4_hmi_msgs
{

namespace srv
{

namespace builder
{

class Init_SetVolume_Response_status
{
public:
  Init_SetVolume_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_hmi_msgs::srv::SetVolume_Response status(::tier4_hmi_msgs::srv::SetVolume_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_hmi_msgs::srv::SetVolume_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_hmi_msgs::srv::SetVolume_Response>()
{
  return tier4_hmi_msgs::srv::builder::Init_SetVolume_Response_status();
}

}  // namespace tier4_hmi_msgs

#endif  // TIER4_HMI_MSGS__SRV__DETAIL__SET_VOLUME__BUILDER_HPP_
