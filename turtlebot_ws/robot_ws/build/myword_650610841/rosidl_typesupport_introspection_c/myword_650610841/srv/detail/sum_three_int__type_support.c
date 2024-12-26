// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from myword_650610841:srv/SumThreeInt.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "myword_650610841/srv/detail/sum_three_int__rosidl_typesupport_introspection_c.h"
#include "myword_650610841/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "myword_650610841/srv/detail/sum_three_int__functions.h"
#include "myword_650610841/srv/detail/sum_three_int__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void myword_650610841__srv__SumThreeInt_Request__rosidl_typesupport_introspection_c__SumThreeInt_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  myword_650610841__srv__SumThreeInt_Request__init(message_memory);
}

void myword_650610841__srv__SumThreeInt_Request__rosidl_typesupport_introspection_c__SumThreeInt_Request_fini_function(void * message_memory)
{
  myword_650610841__srv__SumThreeInt_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember myword_650610841__srv__SumThreeInt_Request__rosidl_typesupport_introspection_c__SumThreeInt_Request_message_member_array[4] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myword_650610841__srv__SumThreeInt_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myword_650610841__srv__SumThreeInt_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myword_650610841__srv__SumThreeInt_Request, c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myword_650610841__srv__SumThreeInt_Request, d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers myword_650610841__srv__SumThreeInt_Request__rosidl_typesupport_introspection_c__SumThreeInt_Request_message_members = {
  "myword_650610841__srv",  // message namespace
  "SumThreeInt_Request",  // message name
  4,  // number of fields
  sizeof(myword_650610841__srv__SumThreeInt_Request),
  myword_650610841__srv__SumThreeInt_Request__rosidl_typesupport_introspection_c__SumThreeInt_Request_message_member_array,  // message members
  myword_650610841__srv__SumThreeInt_Request__rosidl_typesupport_introspection_c__SumThreeInt_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  myword_650610841__srv__SumThreeInt_Request__rosidl_typesupport_introspection_c__SumThreeInt_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t myword_650610841__srv__SumThreeInt_Request__rosidl_typesupport_introspection_c__SumThreeInt_Request_message_type_support_handle = {
  0,
  &myword_650610841__srv__SumThreeInt_Request__rosidl_typesupport_introspection_c__SumThreeInt_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_myword_650610841
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myword_650610841, srv, SumThreeInt_Request)() {
  if (!myword_650610841__srv__SumThreeInt_Request__rosidl_typesupport_introspection_c__SumThreeInt_Request_message_type_support_handle.typesupport_identifier) {
    myword_650610841__srv__SumThreeInt_Request__rosidl_typesupport_introspection_c__SumThreeInt_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &myword_650610841__srv__SumThreeInt_Request__rosidl_typesupport_introspection_c__SumThreeInt_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "myword_650610841/srv/detail/sum_three_int__rosidl_typesupport_introspection_c.h"
// already included above
// #include "myword_650610841/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "myword_650610841/srv/detail/sum_three_int__functions.h"
// already included above
// #include "myword_650610841/srv/detail/sum_three_int__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void myword_650610841__srv__SumThreeInt_Response__rosidl_typesupport_introspection_c__SumThreeInt_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  myword_650610841__srv__SumThreeInt_Response__init(message_memory);
}

void myword_650610841__srv__SumThreeInt_Response__rosidl_typesupport_introspection_c__SumThreeInt_Response_fini_function(void * message_memory)
{
  myword_650610841__srv__SumThreeInt_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember myword_650610841__srv__SumThreeInt_Response__rosidl_typesupport_introspection_c__SumThreeInt_Response_message_member_array[1] = {
  {
    "i",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myword_650610841__srv__SumThreeInt_Response, i),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers myword_650610841__srv__SumThreeInt_Response__rosidl_typesupport_introspection_c__SumThreeInt_Response_message_members = {
  "myword_650610841__srv",  // message namespace
  "SumThreeInt_Response",  // message name
  1,  // number of fields
  sizeof(myword_650610841__srv__SumThreeInt_Response),
  myword_650610841__srv__SumThreeInt_Response__rosidl_typesupport_introspection_c__SumThreeInt_Response_message_member_array,  // message members
  myword_650610841__srv__SumThreeInt_Response__rosidl_typesupport_introspection_c__SumThreeInt_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  myword_650610841__srv__SumThreeInt_Response__rosidl_typesupport_introspection_c__SumThreeInt_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t myword_650610841__srv__SumThreeInt_Response__rosidl_typesupport_introspection_c__SumThreeInt_Response_message_type_support_handle = {
  0,
  &myword_650610841__srv__SumThreeInt_Response__rosidl_typesupport_introspection_c__SumThreeInt_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_myword_650610841
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myword_650610841, srv, SumThreeInt_Response)() {
  if (!myword_650610841__srv__SumThreeInt_Response__rosidl_typesupport_introspection_c__SumThreeInt_Response_message_type_support_handle.typesupport_identifier) {
    myword_650610841__srv__SumThreeInt_Response__rosidl_typesupport_introspection_c__SumThreeInt_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &myword_650610841__srv__SumThreeInt_Response__rosidl_typesupport_introspection_c__SumThreeInt_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "myword_650610841/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "myword_650610841/srv/detail/sum_three_int__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers myword_650610841__srv__detail__sum_three_int__rosidl_typesupport_introspection_c__SumThreeInt_service_members = {
  "myword_650610841__srv",  // service namespace
  "SumThreeInt",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // myword_650610841__srv__detail__sum_three_int__rosidl_typesupport_introspection_c__SumThreeInt_Request_message_type_support_handle,
  NULL  // response message
  // myword_650610841__srv__detail__sum_three_int__rosidl_typesupport_introspection_c__SumThreeInt_Response_message_type_support_handle
};

static rosidl_service_type_support_t myword_650610841__srv__detail__sum_three_int__rosidl_typesupport_introspection_c__SumThreeInt_service_type_support_handle = {
  0,
  &myword_650610841__srv__detail__sum_three_int__rosidl_typesupport_introspection_c__SumThreeInt_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myword_650610841, srv, SumThreeInt_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myword_650610841, srv, SumThreeInt_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_myword_650610841
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myword_650610841, srv, SumThreeInt)() {
  if (!myword_650610841__srv__detail__sum_three_int__rosidl_typesupport_introspection_c__SumThreeInt_service_type_support_handle.typesupport_identifier) {
    myword_650610841__srv__detail__sum_three_int__rosidl_typesupport_introspection_c__SumThreeInt_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)myword_650610841__srv__detail__sum_three_int__rosidl_typesupport_introspection_c__SumThreeInt_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myword_650610841, srv, SumThreeInt_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myword_650610841, srv, SumThreeInt_Response)()->data;
  }

  return &myword_650610841__srv__detail__sum_three_int__rosidl_typesupport_introspection_c__SumThreeInt_service_type_support_handle;
}
