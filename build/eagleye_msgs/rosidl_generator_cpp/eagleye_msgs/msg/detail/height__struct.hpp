// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eagleye_msgs:msg/Height.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__HEIGHT__STRUCT_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__HEIGHT__STRUCT_HPP_

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
// Member 'status'
#include "eagleye_msgs/msg/detail/status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__eagleye_msgs__msg__Height __attribute__((deprecated))
#else
# define DEPRECATED__eagleye_msgs__msg__Height __declspec(deprecated)
#endif

namespace eagleye_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Height_
{
  using Type = Height_<ContainerAllocator>;

  explicit Height_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0.0;
    }
  }

  explicit Height_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _height_type =
    double;
  _height_type height;
  using _status_type =
    eagleye_msgs::msg::Status_<ContainerAllocator>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__status(
    const eagleye_msgs::msg::Status_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eagleye_msgs::msg::Height_<ContainerAllocator> *;
  using ConstRawPtr =
    const eagleye_msgs::msg::Height_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eagleye_msgs::msg::Height_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eagleye_msgs::msg::Height_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eagleye_msgs::msg::Height_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eagleye_msgs::msg::Height_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eagleye_msgs::msg::Height_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eagleye_msgs::msg::Height_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eagleye_msgs::msg::Height_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eagleye_msgs::msg::Height_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eagleye_msgs__msg__Height
    std::shared_ptr<eagleye_msgs::msg::Height_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eagleye_msgs__msg__Height
    std::shared_ptr<eagleye_msgs::msg::Height_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Height_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Height_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Height_

// alias to use template instance with default allocator
using Height =
  eagleye_msgs::msg::Height_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__HEIGHT__STRUCT_HPP_
