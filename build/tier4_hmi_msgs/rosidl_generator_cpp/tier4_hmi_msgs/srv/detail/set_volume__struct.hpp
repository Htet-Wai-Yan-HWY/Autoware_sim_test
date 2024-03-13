// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_hmi_msgs:srv/SetVolume.idl
// generated code does not contain a copyright notice

#ifndef TIER4_HMI_MSGS__SRV__DETAIL__SET_VOLUME__STRUCT_HPP_
#define TIER4_HMI_MSGS__SRV__DETAIL__SET_VOLUME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_hmi_msgs__srv__SetVolume_Request __attribute__((deprecated))
#else
# define DEPRECATED__tier4_hmi_msgs__srv__SetVolume_Request __declspec(deprecated)
#endif

namespace tier4_hmi_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetVolume_Request_
{
  using Type = SetVolume_Request_<ContainerAllocator>;

  explicit SetVolume_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->volume = 0.0f;
    }
  }

  explicit SetVolume_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->volume = 0.0f;
    }
  }

  // field types and members
  using _volume_type =
    float;
  _volume_type volume;

  // setters for named parameter idiom
  Type & set__volume(
    const float & _arg)
  {
    this->volume = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_hmi_msgs::srv::SetVolume_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_hmi_msgs::srv::SetVolume_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_hmi_msgs::srv::SetVolume_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_hmi_msgs::srv::SetVolume_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_hmi_msgs::srv::SetVolume_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_hmi_msgs::srv::SetVolume_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_hmi_msgs::srv::SetVolume_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_hmi_msgs::srv::SetVolume_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_hmi_msgs::srv::SetVolume_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_hmi_msgs::srv::SetVolume_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_hmi_msgs__srv__SetVolume_Request
    std::shared_ptr<tier4_hmi_msgs::srv::SetVolume_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_hmi_msgs__srv__SetVolume_Request
    std::shared_ptr<tier4_hmi_msgs::srv::SetVolume_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetVolume_Request_ & other) const
  {
    if (this->volume != other.volume) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetVolume_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetVolume_Request_

// alias to use template instance with default allocator
using SetVolume_Request =
  tier4_hmi_msgs::srv::SetVolume_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_hmi_msgs


// Include directives for member types
// Member 'status'
#include "tier4_external_api_msgs/msg/detail/response_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_hmi_msgs__srv__SetVolume_Response __attribute__((deprecated))
#else
# define DEPRECATED__tier4_hmi_msgs__srv__SetVolume_Response __declspec(deprecated)
#endif

namespace tier4_hmi_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetVolume_Response_
{
  using Type = SetVolume_Response_<ContainerAllocator>;

  explicit SetVolume_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    (void)_init;
  }

  explicit SetVolume_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _status_type =
    tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_hmi_msgs::srv::SetVolume_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_hmi_msgs::srv::SetVolume_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_hmi_msgs::srv::SetVolume_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_hmi_msgs::srv::SetVolume_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_hmi_msgs::srv::SetVolume_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_hmi_msgs::srv::SetVolume_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_hmi_msgs::srv::SetVolume_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_hmi_msgs::srv::SetVolume_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_hmi_msgs::srv::SetVolume_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_hmi_msgs::srv::SetVolume_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_hmi_msgs__srv__SetVolume_Response
    std::shared_ptr<tier4_hmi_msgs::srv::SetVolume_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_hmi_msgs__srv__SetVolume_Response
    std::shared_ptr<tier4_hmi_msgs::srv::SetVolume_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetVolume_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetVolume_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetVolume_Response_

// alias to use template instance with default allocator
using SetVolume_Response =
  tier4_hmi_msgs::srv::SetVolume_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_hmi_msgs

namespace tier4_hmi_msgs
{

namespace srv
{

struct SetVolume
{
  using Request = tier4_hmi_msgs::srv::SetVolume_Request;
  using Response = tier4_hmi_msgs::srv::SetVolume_Response;
};

}  // namespace srv

}  // namespace tier4_hmi_msgs

#endif  // TIER4_HMI_MSGS__SRV__DETAIL__SET_VOLUME__STRUCT_HPP_
