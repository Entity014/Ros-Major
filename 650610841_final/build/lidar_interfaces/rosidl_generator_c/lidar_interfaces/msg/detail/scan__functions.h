// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lidar_interfaces:msg/Scan.idl
// generated code does not contain a copyright notice

#ifndef LIDAR_INTERFACES__MSG__DETAIL__SCAN__FUNCTIONS_H_
#define LIDAR_INTERFACES__MSG__DETAIL__SCAN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lidar_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "lidar_interfaces/msg/detail/scan__struct.h"

/// Initialize msg/Scan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lidar_interfaces__msg__Scan
 * )) before or use
 * lidar_interfaces__msg__Scan__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lidar_interfaces
bool
lidar_interfaces__msg__Scan__init(lidar_interfaces__msg__Scan * msg);

/// Finalize msg/Scan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lidar_interfaces
void
lidar_interfaces__msg__Scan__fini(lidar_interfaces__msg__Scan * msg);

/// Create msg/Scan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lidar_interfaces__msg__Scan__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lidar_interfaces
lidar_interfaces__msg__Scan *
lidar_interfaces__msg__Scan__create();

/// Destroy msg/Scan message.
/**
 * It calls
 * lidar_interfaces__msg__Scan__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lidar_interfaces
void
lidar_interfaces__msg__Scan__destroy(lidar_interfaces__msg__Scan * msg);

/// Check for msg/Scan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lidar_interfaces
bool
lidar_interfaces__msg__Scan__are_equal(const lidar_interfaces__msg__Scan * lhs, const lidar_interfaces__msg__Scan * rhs);

/// Copy a msg/Scan message.
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
ROSIDL_GENERATOR_C_PUBLIC_lidar_interfaces
bool
lidar_interfaces__msg__Scan__copy(
  const lidar_interfaces__msg__Scan * input,
  lidar_interfaces__msg__Scan * output);

/// Initialize array of msg/Scan messages.
/**
 * It allocates the memory for the number of elements and calls
 * lidar_interfaces__msg__Scan__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lidar_interfaces
bool
lidar_interfaces__msg__Scan__Sequence__init(lidar_interfaces__msg__Scan__Sequence * array, size_t size);

/// Finalize array of msg/Scan messages.
/**
 * It calls
 * lidar_interfaces__msg__Scan__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lidar_interfaces
void
lidar_interfaces__msg__Scan__Sequence__fini(lidar_interfaces__msg__Scan__Sequence * array);

/// Create array of msg/Scan messages.
/**
 * It allocates the memory for the array and calls
 * lidar_interfaces__msg__Scan__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lidar_interfaces
lidar_interfaces__msg__Scan__Sequence *
lidar_interfaces__msg__Scan__Sequence__create(size_t size);

/// Destroy array of msg/Scan messages.
/**
 * It calls
 * lidar_interfaces__msg__Scan__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lidar_interfaces
void
lidar_interfaces__msg__Scan__Sequence__destroy(lidar_interfaces__msg__Scan__Sequence * array);

/// Check for msg/Scan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lidar_interfaces
bool
lidar_interfaces__msg__Scan__Sequence__are_equal(const lidar_interfaces__msg__Scan__Sequence * lhs, const lidar_interfaces__msg__Scan__Sequence * rhs);

/// Copy an array of msg/Scan messages.
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
ROSIDL_GENERATOR_C_PUBLIC_lidar_interfaces
bool
lidar_interfaces__msg__Scan__Sequence__copy(
  const lidar_interfaces__msg__Scan__Sequence * input,
  lidar_interfaces__msg__Scan__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LIDAR_INTERFACES__MSG__DETAIL__SCAN__FUNCTIONS_H_
