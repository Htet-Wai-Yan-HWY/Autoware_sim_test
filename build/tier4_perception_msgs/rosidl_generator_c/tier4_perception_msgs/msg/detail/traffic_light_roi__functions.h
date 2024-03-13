// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tier4_perception_msgs:msg/TrafficLightRoi.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI__FUNCTIONS_H_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tier4_perception_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tier4_perception_msgs/msg/detail/traffic_light_roi__struct.h"

/// Initialize msg/TrafficLightRoi message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tier4_perception_msgs__msg__TrafficLightRoi
 * )) before or use
 * tier4_perception_msgs__msg__TrafficLightRoi__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_perception_msgs
bool
tier4_perception_msgs__msg__TrafficLightRoi__init(tier4_perception_msgs__msg__TrafficLightRoi * msg);

/// Finalize msg/TrafficLightRoi message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_perception_msgs
void
tier4_perception_msgs__msg__TrafficLightRoi__fini(tier4_perception_msgs__msg__TrafficLightRoi * msg);

/// Create msg/TrafficLightRoi message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tier4_perception_msgs__msg__TrafficLightRoi__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_perception_msgs
tier4_perception_msgs__msg__TrafficLightRoi *
tier4_perception_msgs__msg__TrafficLightRoi__create();

/// Destroy msg/TrafficLightRoi message.
/**
 * It calls
 * tier4_perception_msgs__msg__TrafficLightRoi__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_perception_msgs
void
tier4_perception_msgs__msg__TrafficLightRoi__destroy(tier4_perception_msgs__msg__TrafficLightRoi * msg);

/// Check for msg/TrafficLightRoi message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_perception_msgs
bool
tier4_perception_msgs__msg__TrafficLightRoi__are_equal(const tier4_perception_msgs__msg__TrafficLightRoi * lhs, const tier4_perception_msgs__msg__TrafficLightRoi * rhs);

/// Copy a msg/TrafficLightRoi message.
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
ROSIDL_GENERATOR_C_PUBLIC_tier4_perception_msgs
bool
tier4_perception_msgs__msg__TrafficLightRoi__copy(
  const tier4_perception_msgs__msg__TrafficLightRoi * input,
  tier4_perception_msgs__msg__TrafficLightRoi * output);

/// Initialize array of msg/TrafficLightRoi messages.
/**
 * It allocates the memory for the number of elements and calls
 * tier4_perception_msgs__msg__TrafficLightRoi__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_perception_msgs
bool
tier4_perception_msgs__msg__TrafficLightRoi__Sequence__init(tier4_perception_msgs__msg__TrafficLightRoi__Sequence * array, size_t size);

/// Finalize array of msg/TrafficLightRoi messages.
/**
 * It calls
 * tier4_perception_msgs__msg__TrafficLightRoi__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_perception_msgs
void
tier4_perception_msgs__msg__TrafficLightRoi__Sequence__fini(tier4_perception_msgs__msg__TrafficLightRoi__Sequence * array);

/// Create array of msg/TrafficLightRoi messages.
/**
 * It allocates the memory for the array and calls
 * tier4_perception_msgs__msg__TrafficLightRoi__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_perception_msgs
tier4_perception_msgs__msg__TrafficLightRoi__Sequence *
tier4_perception_msgs__msg__TrafficLightRoi__Sequence__create(size_t size);

/// Destroy array of msg/TrafficLightRoi messages.
/**
 * It calls
 * tier4_perception_msgs__msg__TrafficLightRoi__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_perception_msgs
void
tier4_perception_msgs__msg__TrafficLightRoi__Sequence__destroy(tier4_perception_msgs__msg__TrafficLightRoi__Sequence * array);

/// Check for msg/TrafficLightRoi message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_perception_msgs
bool
tier4_perception_msgs__msg__TrafficLightRoi__Sequence__are_equal(const tier4_perception_msgs__msg__TrafficLightRoi__Sequence * lhs, const tier4_perception_msgs__msg__TrafficLightRoi__Sequence * rhs);

/// Copy an array of msg/TrafficLightRoi messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tier4_perception_msgs
bool
tier4_perception_msgs__msg__TrafficLightRoi__Sequence__copy(
  const tier4_perception_msgs__msg__TrafficLightRoi__Sequence * input,
  tier4_perception_msgs__msg__TrafficLightRoi__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI__FUNCTIONS_H_