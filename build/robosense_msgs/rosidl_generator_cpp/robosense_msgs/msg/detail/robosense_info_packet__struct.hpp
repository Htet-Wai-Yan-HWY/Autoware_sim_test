// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robosense_msgs:msg/RobosenseInfoPacket.idl
// generated code does not contain a copyright notice

#ifndef ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_INFO_PACKET__STRUCT_HPP_
#define ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_INFO_PACKET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'packet'
#include "robosense_msgs/msg/detail/robosense_packet__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robosense_msgs__msg__RobosenseInfoPacket __attribute__((deprecated))
#else
# define DEPRECATED__robosense_msgs__msg__RobosenseInfoPacket __declspec(deprecated)
#endif

namespace robosense_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobosenseInfoPacket_
{
  using Type = RobosenseInfoPacket_<ContainerAllocator>;

  explicit RobosenseInfoPacket_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : packet(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lidar_model = "";
    }
  }

  explicit RobosenseInfoPacket_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lidar_model(_alloc),
    packet(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lidar_model = "";
    }
  }

  // field types and members
  using _lidar_model_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lidar_model_type lidar_model;
  using _packet_type =
    robosense_msgs::msg::RobosensePacket_<ContainerAllocator>;
  _packet_type packet;

  // setters for named parameter idiom
  Type & set__lidar_model(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lidar_model = _arg;
    return *this;
  }
  Type & set__packet(
    const robosense_msgs::msg::RobosensePacket_<ContainerAllocator> & _arg)
  {
    this->packet = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robosense_msgs::msg::RobosenseInfoPacket_<ContainerAllocator> *;
  using ConstRawPtr =
    const robosense_msgs::msg::RobosenseInfoPacket_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robosense_msgs::msg::RobosenseInfoPacket_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robosense_msgs::msg::RobosenseInfoPacket_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robosense_msgs::msg::RobosenseInfoPacket_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robosense_msgs::msg::RobosenseInfoPacket_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robosense_msgs::msg::RobosenseInfoPacket_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robosense_msgs::msg::RobosenseInfoPacket_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robosense_msgs::msg::RobosenseInfoPacket_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robosense_msgs::msg::RobosenseInfoPacket_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robosense_msgs__msg__RobosenseInfoPacket
    std::shared_ptr<robosense_msgs::msg::RobosenseInfoPacket_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robosense_msgs__msg__RobosenseInfoPacket
    std::shared_ptr<robosense_msgs::msg::RobosenseInfoPacket_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobosenseInfoPacket_ & other) const
  {
    if (this->lidar_model != other.lidar_model) {
      return false;
    }
    if (this->packet != other.packet) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobosenseInfoPacket_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobosenseInfoPacket_

// alias to use template instance with default allocator
using RobosenseInfoPacket =
  robosense_msgs::msg::RobosenseInfoPacket_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robosense_msgs

#endif  // ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_INFO_PACKET__STRUCT_HPP_
