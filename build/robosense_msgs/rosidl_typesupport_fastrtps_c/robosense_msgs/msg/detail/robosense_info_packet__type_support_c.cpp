// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robosense_msgs:msg/RobosenseInfoPacket.idl
// generated code does not contain a copyright notice
#include "robosense_msgs/msg/detail/robosense_info_packet__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robosense_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robosense_msgs/msg/detail/robosense_info_packet__struct.h"
#include "robosense_msgs/msg/detail/robosense_info_packet__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "robosense_msgs/msg/detail/robosense_packet__functions.h"  // packet
#include "rosidl_runtime_c/string.h"  // lidar_model
#include "rosidl_runtime_c/string_functions.h"  // lidar_model

// forward declare type support functions
size_t get_serialized_size_robosense_msgs__msg__RobosensePacket(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_robosense_msgs__msg__RobosensePacket(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robosense_msgs, msg, RobosensePacket)();


using _RobosenseInfoPacket__ros_msg_type = robosense_msgs__msg__RobosenseInfoPacket;

static bool _RobosenseInfoPacket__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobosenseInfoPacket__ros_msg_type * ros_message = static_cast<const _RobosenseInfoPacket__ros_msg_type *>(untyped_ros_message);
  // Field name: lidar_model
  {
    const rosidl_runtime_c__String * str = &ros_message->lidar_model;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: packet
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robosense_msgs, msg, RobosensePacket
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->packet, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RobosenseInfoPacket__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobosenseInfoPacket__ros_msg_type * ros_message = static_cast<_RobosenseInfoPacket__ros_msg_type *>(untyped_ros_message);
  // Field name: lidar_model
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lidar_model.data) {
      rosidl_runtime_c__String__init(&ros_message->lidar_model);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lidar_model,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lidar_model'\n");
      return false;
    }
  }

  // Field name: packet
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robosense_msgs, msg, RobosensePacket
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->packet))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robosense_msgs
size_t get_serialized_size_robosense_msgs__msg__RobosenseInfoPacket(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobosenseInfoPacket__ros_msg_type * ros_message = static_cast<const _RobosenseInfoPacket__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lidar_model
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lidar_model.size + 1);
  // field.name packet

  current_alignment += get_serialized_size_robosense_msgs__msg__RobosensePacket(
    &(ros_message->packet), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RobosenseInfoPacket__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robosense_msgs__msg__RobosenseInfoPacket(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robosense_msgs
size_t max_serialized_size_robosense_msgs__msg__RobosenseInfoPacket(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: lidar_model
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: packet
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_robosense_msgs__msg__RobosensePacket(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robosense_msgs__msg__RobosenseInfoPacket;
    is_plain =
      (
      offsetof(DataType, packet) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RobosenseInfoPacket__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robosense_msgs__msg__RobosenseInfoPacket(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobosenseInfoPacket = {
  "robosense_msgs::msg",
  "RobosenseInfoPacket",
  _RobosenseInfoPacket__cdr_serialize,
  _RobosenseInfoPacket__cdr_deserialize,
  _RobosenseInfoPacket__get_serialized_size,
  _RobosenseInfoPacket__max_serialized_size
};

static rosidl_message_type_support_t _RobosenseInfoPacket__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobosenseInfoPacket,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robosense_msgs, msg, RobosenseInfoPacket)() {
  return &_RobosenseInfoPacket__type_support;
}

#if defined(__cplusplus)
}
#endif
