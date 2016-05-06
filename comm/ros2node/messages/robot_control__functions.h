// generated from rosidl_generator_c/resource/msg__functions.h.template
// generated code does not contain a copyright notice

#ifndef robot_information_msgs__msg__robot_control__functions_h_
#define robot_information_msgs__msg__robot_control__functions_h_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "robot_information_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "robot_information_msgs/msg/robot_control__struct.h"

/// Initialize robot_information_msgs/RobotControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(robot_information_msgs__msg__RobotControl)) before
 * or use robot_information_msgs__msg__RobotControl__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_information_msgs
bool
robot_information_msgs__msg__RobotControl__init(robot_information_msgs__msg__RobotControl * msg);

/// Finalize robot_information_msgs/RobotControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_information_msgs
void
robot_information_msgs__msg__RobotControl__fini(robot_information_msgs__msg__RobotControl * msg);

/// Create robot_information_msgs/RobotControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls robot_information_msgs__msg__RobotControl__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_information_msgs
robot_information_msgs__msg__RobotControl *
robot_information_msgs__msg__RobotControl__create();

/// Destroy robot_information_msgs/RobotControl message.
/**
 * It calls robot_information_msgs__msg__RobotControl__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_information_msgs
void
robot_information_msgs__msg__RobotControl__destroy(robot_information_msgs__msg__RobotControl * msg);


/// Initialize array of robot_information_msgs/RobotControl messages.
/**
 * It allocates the memory for the number of elements and
 * calls robot_information_msgs__msg__RobotControl__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_information_msgs
bool
robot_information_msgs__msg__RobotControl__Array__init(robot_information_msgs__msg__RobotControl__Array * array, size_t size);

/// Finalize array of robot_information_msgs/RobotControl messages.
/**
 * It calls robot_information_msgs__msg__RobotControl__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_information_msgs
void
robot_information_msgs__msg__RobotControl__Array__fini(robot_information_msgs__msg__RobotControl__Array * array);

/// Create array of robot_information_msgs/RobotControl messages.
/**
 * It allocates the memory for the array and
 * calls robot_information_msgs__msg__RobotControl__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_information_msgs
robot_information_msgs__msg__RobotControl__Array *
robot_information_msgs__msg__RobotControl__Array__create(size_t size);

/// Destroy array of robot_information_msgs/RobotControl messages.
/**
 * It calls robot_information_msgs__msg__RobotControl__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_information_msgs
void
robot_information_msgs__msg__RobotControl__Array__destroy(robot_information_msgs__msg__RobotControl__Array * array);

#if __cplusplus
}
#endif

#endif  // robot_information_msgs__msg__robot_control__functions_h_