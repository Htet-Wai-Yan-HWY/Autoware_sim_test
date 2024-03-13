// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robosense_msgs:msg/RobosenseScan.idl
// generated code does not contain a copyright notice

#ifndef ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_SCAN__STRUCT_HPP_
#define ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_SCAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'packets'
#include "robosense_msgs/msg/detail/robosense_packet__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robosense_msgs__msg__RobosenseScan __attribute__((deprecated))
#else
# define DEPRECATED__robosense_msgs__msg__RobosenseScan __declspec(deprecated)
#endif

namespace robosense_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobosenseScan_
{
  using Type = RobosenseScan_<ContainerAllocator>;

  explicit RobosenseScan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit RobosenseScan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _packets_type =
    std::vector<robosense_msgs::msg::RobosensePacket_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robosense_msgs::msg::RobosensePacket_<ContainerAllocator>>>;
  _packets_type packets;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__packets(
    const std::vector<robosense_msgs::msg::RobosensePacket_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robosense_msgs::msg::RobosensePacket_<ContainerAllocator>>> & _arg)
  {
    this->packets = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robosense_msgs::msg::RobosenseScan_<ContainerAllocator> *;
  using ConstRawPtr =
    const robosense_msgs::msg::RobosenseScan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robosense_msgs::msg::RobosenseScan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robosense_msgs::msg::RobosenseScan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robosense_msgs::msg::RobosenseScan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robosense_msgs::msg::RobosenseScan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robosense_msgs::msg::RobosenseScan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robosense_msgs::msg::RobosenseScan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robosense_msgs::msg::RobosenseScan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robosense_msgs::msg::RobosenseScan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robosense_msgs__msg__RobosenseScan
    std::shared_ptr<robosense_msgs::msg::RobosenseScan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robosense_msgs__msg__RobosenseScan
    std::shared_ptr<robosense_msgs::msg::RobosenseScan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobosenseScan_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->packets != other.packets) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobosenseScan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobosenseScan_

// alias to use template instance with default allocator
using RobosenseScan =
  robosense_msgs::msg::RobosenseScan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robosense_msgs

#endif  // ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_SCAN__STRUCT_HPP_
