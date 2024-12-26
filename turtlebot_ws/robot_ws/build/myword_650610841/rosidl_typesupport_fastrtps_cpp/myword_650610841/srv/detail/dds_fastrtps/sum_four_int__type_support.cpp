// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from myword_650610841:srv/SumFourInt.idl
// generated code does not contain a copyright notice
#include "myword_650610841/srv/detail/sum_four_int__rosidl_typesupport_fastrtps_cpp.hpp"
#include "myword_650610841/srv/detail/sum_four_int__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace myword_650610841
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_myword_650610841
cdr_serialize(
  const myword_650610841::srv::SumFourInt_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: a
  cdr << ros_message.a;
  // Member: b
  cdr << ros_message.b;
  // Member: c
  cdr << ros_message.c;
  // Member: d
  cdr << ros_message.d;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_myword_650610841
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  myword_650610841::srv::SumFourInt_Request & ros_message)
{
  // Member: a
  cdr >> ros_message.a;

  // Member: b
  cdr >> ros_message.b;

  // Member: c
  cdr >> ros_message.c;

  // Member: d
  cdr >> ros_message.d;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_myword_650610841
get_serialized_size(
  const myword_650610841::srv::SumFourInt_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: a
  {
    size_t item_size = sizeof(ros_message.a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b
  {
    size_t item_size = sizeof(ros_message.b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: c
  {
    size_t item_size = sizeof(ros_message.c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: d
  {
    size_t item_size = sizeof(ros_message.d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_myword_650610841
max_serialized_size_SumFourInt_Request(
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


  // Member: a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = myword_650610841::srv::SumFourInt_Request;
    is_plain =
      (
      offsetof(DataType, d) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SumFourInt_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const myword_650610841::srv::SumFourInt_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SumFourInt_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<myword_650610841::srv::SumFourInt_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SumFourInt_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const myword_650610841::srv::SumFourInt_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SumFourInt_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SumFourInt_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SumFourInt_Request__callbacks = {
  "myword_650610841::srv",
  "SumFourInt_Request",
  _SumFourInt_Request__cdr_serialize,
  _SumFourInt_Request__cdr_deserialize,
  _SumFourInt_Request__get_serialized_size,
  _SumFourInt_Request__max_serialized_size
};

static rosidl_message_type_support_t _SumFourInt_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SumFourInt_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace myword_650610841

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_myword_650610841
const rosidl_message_type_support_t *
get_message_type_support_handle<myword_650610841::srv::SumFourInt_Request>()
{
  return &myword_650610841::srv::typesupport_fastrtps_cpp::_SumFourInt_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, myword_650610841, srv, SumFourInt_Request)() {
  return &myword_650610841::srv::typesupport_fastrtps_cpp::_SumFourInt_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace myword_650610841
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_myword_650610841
cdr_serialize(
  const myword_650610841::srv::SumFourInt_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: i
  cdr << ros_message.i;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_myword_650610841
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  myword_650610841::srv::SumFourInt_Response & ros_message)
{
  // Member: i
  cdr >> ros_message.i;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_myword_650610841
get_serialized_size(
  const myword_650610841::srv::SumFourInt_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: i
  {
    size_t item_size = sizeof(ros_message.i);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_myword_650610841
max_serialized_size_SumFourInt_Response(
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


  // Member: i
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = myword_650610841::srv::SumFourInt_Response;
    is_plain =
      (
      offsetof(DataType, i) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SumFourInt_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const myword_650610841::srv::SumFourInt_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SumFourInt_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<myword_650610841::srv::SumFourInt_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SumFourInt_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const myword_650610841::srv::SumFourInt_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SumFourInt_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SumFourInt_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SumFourInt_Response__callbacks = {
  "myword_650610841::srv",
  "SumFourInt_Response",
  _SumFourInt_Response__cdr_serialize,
  _SumFourInt_Response__cdr_deserialize,
  _SumFourInt_Response__get_serialized_size,
  _SumFourInt_Response__max_serialized_size
};

static rosidl_message_type_support_t _SumFourInt_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SumFourInt_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace myword_650610841

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_myword_650610841
const rosidl_message_type_support_t *
get_message_type_support_handle<myword_650610841::srv::SumFourInt_Response>()
{
  return &myword_650610841::srv::typesupport_fastrtps_cpp::_SumFourInt_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, myword_650610841, srv, SumFourInt_Response)() {
  return &myword_650610841::srv::typesupport_fastrtps_cpp::_SumFourInt_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace myword_650610841
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SumFourInt__callbacks = {
  "myword_650610841::srv",
  "SumFourInt",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, myword_650610841, srv, SumFourInt_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, myword_650610841, srv, SumFourInt_Response)(),
};

static rosidl_service_type_support_t _SumFourInt__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SumFourInt__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace myword_650610841

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_myword_650610841
const rosidl_service_type_support_t *
get_service_type_support_handle<myword_650610841::srv::SumFourInt>()
{
  return &myword_650610841::srv::typesupport_fastrtps_cpp::_SumFourInt__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, myword_650610841, srv, SumFourInt)() {
  return &myword_650610841::srv::typesupport_fastrtps_cpp::_SumFourInt__handle;
}

#ifdef __cplusplus
}
#endif
