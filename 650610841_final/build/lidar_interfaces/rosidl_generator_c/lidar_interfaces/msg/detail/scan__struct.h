// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lidar_interfaces:msg/Scan.idl
// generated code does not contain a copyright notice

#ifndef LIDAR_INTERFACES__MSG__DETAIL__SCAN__STRUCT_H_
#define LIDAR_INTERFACES__MSG__DETAIL__SCAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'ranges'
// Member 'intensities'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Scan in the package lidar_interfaces.
typedef struct lidar_interfaces__msg__Scan
{
  std_msgs__msg__Header header;
  float angle_min;
  float angle_max;
  float angle_increment;
  float time_increment;
  float scan_time;
  float range_min;
  float range_max;
  rosidl_runtime_c__float__Sequence ranges;
  rosidl_runtime_c__float__Sequence intensities;
} lidar_interfaces__msg__Scan;

// Struct for a sequence of lidar_interfaces__msg__Scan.
typedef struct lidar_interfaces__msg__Scan__Sequence
{
  lidar_interfaces__msg__Scan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lidar_interfaces__msg__Scan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIDAR_INTERFACES__MSG__DETAIL__SCAN__STRUCT_H_
