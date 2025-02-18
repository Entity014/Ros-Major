// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lidar_interfaces:srv/Break.idl
// generated code does not contain a copyright notice

#ifndef LIDAR_INTERFACES__SRV__DETAIL__BREAK__STRUCT_H_
#define LIDAR_INTERFACES__SRV__DETAIL__BREAK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'angles'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Break in the package lidar_interfaces.
typedef struct lidar_interfaces__srv__Break_Request
{
  rosidl_runtime_c__int64__Sequence angles;
} lidar_interfaces__srv__Break_Request;

// Struct for a sequence of lidar_interfaces__srv__Break_Request.
typedef struct lidar_interfaces__srv__Break_Request__Sequence
{
  lidar_interfaces__srv__Break_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lidar_interfaces__srv__Break_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Break in the package lidar_interfaces.
typedef struct lidar_interfaces__srv__Break_Response
{
  uint8_t structure_needs_at_least_one_member;
} lidar_interfaces__srv__Break_Response;

// Struct for a sequence of lidar_interfaces__srv__Break_Response.
typedef struct lidar_interfaces__srv__Break_Response__Sequence
{
  lidar_interfaces__srv__Break_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lidar_interfaces__srv__Break_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIDAR_INTERFACES__SRV__DETAIL__BREAK__STRUCT_H_
