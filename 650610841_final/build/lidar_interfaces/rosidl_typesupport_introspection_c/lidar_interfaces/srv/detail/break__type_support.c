// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lidar_interfaces:srv/Break.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lidar_interfaces/srv/detail/break__rosidl_typesupport_introspection_c.h"
#include "lidar_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lidar_interfaces/srv/detail/break__functions.h"
#include "lidar_interfaces/srv/detail/break__struct.h"


// Include directives for member types
// Member `angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__Break_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lidar_interfaces__srv__Break_Request__init(message_memory);
}

void lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__Break_Request_fini_function(void * message_memory)
{
  lidar_interfaces__srv__Break_Request__fini(message_memory);
}

size_t lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__size_function__Break_Request__angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__get_const_function__Break_Request__angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__get_function__Break_Request__angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__fetch_function__Break_Request__angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__get_const_function__Break_Request__angles(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__assign_function__Break_Request__angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__get_function__Break_Request__angles(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__resize_function__Break_Request__angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__Break_Request_message_member_array[1] = {
  {
    "angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__srv__Break_Request, angles),  // bytes offset in struct
    NULL,  // default value
    lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__size_function__Break_Request__angles,  // size() function pointer
    lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__get_const_function__Break_Request__angles,  // get_const(index) function pointer
    lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__get_function__Break_Request__angles,  // get(index) function pointer
    lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__fetch_function__Break_Request__angles,  // fetch(index, &value) function pointer
    lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__assign_function__Break_Request__angles,  // assign(index, value) function pointer
    lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__resize_function__Break_Request__angles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__Break_Request_message_members = {
  "lidar_interfaces__srv",  // message namespace
  "Break_Request",  // message name
  1,  // number of fields
  sizeof(lidar_interfaces__srv__Break_Request),
  lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__Break_Request_message_member_array,  // message members
  lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__Break_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__Break_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__Break_Request_message_type_support_handle = {
  0,
  &lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__Break_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lidar_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lidar_interfaces, srv, Break_Request)() {
  if (!lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__Break_Request_message_type_support_handle.typesupport_identifier) {
    lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__Break_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lidar_interfaces__srv__Break_Request__rosidl_typesupport_introspection_c__Break_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "lidar_interfaces/srv/detail/break__rosidl_typesupport_introspection_c.h"
// already included above
// #include "lidar_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "lidar_interfaces/srv/detail/break__functions.h"
// already included above
// #include "lidar_interfaces/srv/detail/break__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void lidar_interfaces__srv__Break_Response__rosidl_typesupport_introspection_c__Break_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lidar_interfaces__srv__Break_Response__init(message_memory);
}

void lidar_interfaces__srv__Break_Response__rosidl_typesupport_introspection_c__Break_Response_fini_function(void * message_memory)
{
  lidar_interfaces__srv__Break_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lidar_interfaces__srv__Break_Response__rosidl_typesupport_introspection_c__Break_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__srv__Break_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lidar_interfaces__srv__Break_Response__rosidl_typesupport_introspection_c__Break_Response_message_members = {
  "lidar_interfaces__srv",  // message namespace
  "Break_Response",  // message name
  1,  // number of fields
  sizeof(lidar_interfaces__srv__Break_Response),
  lidar_interfaces__srv__Break_Response__rosidl_typesupport_introspection_c__Break_Response_message_member_array,  // message members
  lidar_interfaces__srv__Break_Response__rosidl_typesupport_introspection_c__Break_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  lidar_interfaces__srv__Break_Response__rosidl_typesupport_introspection_c__Break_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lidar_interfaces__srv__Break_Response__rosidl_typesupport_introspection_c__Break_Response_message_type_support_handle = {
  0,
  &lidar_interfaces__srv__Break_Response__rosidl_typesupport_introspection_c__Break_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lidar_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lidar_interfaces, srv, Break_Response)() {
  if (!lidar_interfaces__srv__Break_Response__rosidl_typesupport_introspection_c__Break_Response_message_type_support_handle.typesupport_identifier) {
    lidar_interfaces__srv__Break_Response__rosidl_typesupport_introspection_c__Break_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lidar_interfaces__srv__Break_Response__rosidl_typesupport_introspection_c__Break_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "lidar_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "lidar_interfaces/srv/detail/break__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers lidar_interfaces__srv__detail__break__rosidl_typesupport_introspection_c__Break_service_members = {
  "lidar_interfaces__srv",  // service namespace
  "Break",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // lidar_interfaces__srv__detail__break__rosidl_typesupport_introspection_c__Break_Request_message_type_support_handle,
  NULL  // response message
  // lidar_interfaces__srv__detail__break__rosidl_typesupport_introspection_c__Break_Response_message_type_support_handle
};

static rosidl_service_type_support_t lidar_interfaces__srv__detail__break__rosidl_typesupport_introspection_c__Break_service_type_support_handle = {
  0,
  &lidar_interfaces__srv__detail__break__rosidl_typesupport_introspection_c__Break_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lidar_interfaces, srv, Break_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lidar_interfaces, srv, Break_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lidar_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lidar_interfaces, srv, Break)() {
  if (!lidar_interfaces__srv__detail__break__rosidl_typesupport_introspection_c__Break_service_type_support_handle.typesupport_identifier) {
    lidar_interfaces__srv__detail__break__rosidl_typesupport_introspection_c__Break_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)lidar_interfaces__srv__detail__break__rosidl_typesupport_introspection_c__Break_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lidar_interfaces, srv, Break_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lidar_interfaces, srv, Break_Response)()->data;
  }

  return &lidar_interfaces__srv__detail__break__rosidl_typesupport_introspection_c__Break_service_type_support_handle;
}
