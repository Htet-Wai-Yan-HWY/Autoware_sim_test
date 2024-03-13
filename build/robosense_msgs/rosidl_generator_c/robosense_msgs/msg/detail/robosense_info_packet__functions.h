// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robosense_msgs:msg/RobosenseInfoPacket.idl
// generated code does not contain a copyright notice

#ifndef ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_INFO_PACKET__FUNCTIONS_H_
#define ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_INFO_PACKET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robosense_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "robosense_msgs/msg/detail/robosense_info_packet__struct.h"

/// Initialize msg/RobosenseInfoPacket message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robosense_msgs__msg__RobosenseInfoPacket
 * )) before or use
 * robosense_msgs__msg__RobosenseInfoPacket__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robosense_msgs
bool
robosense_msgs__msg__RobosenseInfoPacket__init(robosense_msgs__msg__RobosenseInfoPacket * msg);

/// Finalize msg/RobosenseInfoPacket message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robosense_msgs
void
robosense_msgs__msg__RobosenseInfoPacket__fini(robosense_msgs__msg__RobosenseInfoPacket * msg);

/// Create msg/RobosenseInfoPacket message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robosense_msgs__msg__RobosenseInfoPacket__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robosense_msgs
robosense_msgs__msg__RobosenseInfoPacket *
robosense_msgs__msg__RobosenseInfoPacket__create();

/// Destroy msg/RobosenseInfoPacket message.
/**
 * It calls
 * robosense_msgs__msg__RobosenseInfoPacket__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robosense_msgs
void
robosense_msgs__msg__RobosenseInfoPacket__destroy(robosense_msgs__msg__RobosenseInfoPacket * msg);

/// Check for msg/RobosenseInfoPacket message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robosense_msgs
bool
robosense_msgs__msg__RobosenseInfoPacket__are_equal(const robosense_msgs__msg__RobosenseInfoPacket * lhs, const robosense_msgs__msg__RobosenseInfoPacket * rhs);

/// Copy a msg/RobosenseInfoPacket message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robosense_msgs
bool
robosense_msgs__msg__RobosenseInfoPacket__copy(
  const robosense_msgs__msg__RobosenseInfoPacket * input,
  robosense_msgs__msg__RobosenseInfoPacket * output);

/// Initialize array of msg/RobosenseInfoPacket messages.
/**
 * It allocates the memory for the number of elements and calls
 * robosense_msgs__msg__RobosenseInfoPacket__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robosense_msgs
bool
robosense_msgs__msg__RobosenseInfoPacket__Sequence__init(robosense_msgs__msg__RobosenseInfoPacket__Sequence * array, size_t size);

/// Finalize array of msg/RobosenseInfoPacket messages.
/**
 * It calls
 * robosense_msgs__msg__RobosenseInfoPacket__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robosense_msgs
void
robosense_msgs__msg__RobosenseInfoPacket__Sequence__fini(robosense_msgs__msg__RobosenseInfoPacket__Sequence * array);

/// Create array of msg/RobosenseInfoPacket messages.
/**
 * It allocates the memory for the array and calls
 * robosense_msgs__msg__RobosenseInfoPacket__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robosense_msgs
robosense_msgs__msg__RobosenseInfoPacket__Sequence *
robosense_msgs__msg__RobosenseInfoPacket__Sequence__create(size_t size);

/// Destroy array of msg/RobosenseInfoPacket messages.
/**
 * It calls
 * robosense_msgs__msg__RobosenseInfoPacket__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robosense_msgs
void
robosense_msgs__msg__RobosenseInfoPacket__Sequence__destroy(robosense_msgs__msg__RobosenseInfoPacket__Sequence * array);

/// Check for msg/RobosenseInfoPacket message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robosense_msgs
bool
robosense_msgs__msg__RobosenseInfoPacket__Sequence__are_equal(const robosense_msgs__msg__RobosenseInfoPacket__Sequence * lhs, const robosense_msgs__msg__RobosenseInfoPacket__Sequence * rhs);

/// Copy an array of msg/RobosenseInfoPacket messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robosense_msgs
bool
robosense_msgs__msg__RobosenseInfoPacket__Sequence__copy(
  const robosense_msgs__msg__RobosenseInfoPacket__Sequence * input,
  robosense_msgs__msg__RobosenseInfoPacket__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOSENSE_MSGS__MSG__DETAIL__ROBOSENSE_INFO_PACKET__FUNCTIONS_H_
