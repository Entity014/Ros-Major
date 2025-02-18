// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lidar_interfaces:msg/Scan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lidar_interfaces/msg/detail/scan__rosidl_typesupport_introspection_c.h"
#include "lidar_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lidar_interfaces/msg/detail/scan__functions.h"
#include "lidar_interfaces/msg/detail/scan__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ranges`
// Member `intensities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__Scan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lidar_interfaces__msg__Scan__init(message_memory);
}

void lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__Scan_fini_function(void * message_memory)
{
  lidar_interfaces__msg__Scan__fini(message_memory);
}

size_t lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__size_function__Scan__ranges(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__get_const_function__Scan__ranges(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__get_function__Scan__ranges(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__fetch_function__Scan__ranges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__get_const_function__Scan__ranges(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__assign_function__Scan__ranges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__get_function__Scan__ranges(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__resize_function__Scan__ranges(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__size_function__Scan__intensities(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__get_const_function__Scan__intensities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__get_function__Scan__intensities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__fetch_function__Scan__intensities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__get_const_function__Scan__intensities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__assign_function__Scan__intensities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__get_function__Scan__intensities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__resize_function__Scan__intensities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__msg__Scan, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__msg__Scan, angle_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__msg__Scan, angle_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_increment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__msg__Scan, angle_increment),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_increment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__msg__Scan, time_increment),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scan_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__msg__Scan, scan_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "range_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__msg__Scan, range_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "range_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__msg__Scan, range_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ranges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__msg__Scan, ranges),  // bytes offset in struct
    NULL,  // default value
    lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__size_function__Scan__ranges,  // size() function pointer
    lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__get_const_function__Scan__ranges,  // get_const(index) function pointer
    lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__get_function__Scan__ranges,  // get(index) function pointer
    lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__fetch_function__Scan__ranges,  // fetch(index, &value) function pointer
    lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__assign_function__Scan__ranges,  // assign(index, value) function pointer
    lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__resize_function__Scan__ranges  // resize(index) function pointer
  },
  {
    "intensities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__msg__Scan, intensities),  // bytes offset in struct
    NULL,  // default value
    lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__size_function__Scan__intensities,  // size() function pointer
    lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__get_const_function__Scan__intensities,  // get_const(index) function pointer
    lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__get_function__Scan__intensities,  // get(index) function pointer
    lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__fetch_function__Scan__intensities,  // fetch(index, &value) function pointer
    lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__assign_function__Scan__intensities,  // assign(index, value) function pointer
    lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__resize_function__Scan__intensities  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_members = {
  "lidar_interfaces__msg",  // message namespace
  "Scan",  // message name
  10,  // number of fields
  sizeof(lidar_interfaces__msg__Scan),
  lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_member_array,  // message members
  lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__Scan_init_function,  // function to initialize message memory (memory has to be allocated)
  lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__Scan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_type_support_handle = {
  0,
  &lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lidar_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lidar_interfaces, msg, Scan)() {
  lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_type_support_handle.typesupport_identifier) {
    lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lidar_interfaces__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
