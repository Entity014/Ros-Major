// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from myword_650610841:srv/SumThreeInt.idl
// generated code does not contain a copyright notice

#ifndef MYWORD_650610841__SRV__DETAIL__SUM_THREE_INT__STRUCT_H_
#define MYWORD_650610841__SRV__DETAIL__SUM_THREE_INT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SumThreeInt in the package myword_650610841.
typedef struct myword_650610841__srv__SumThreeInt_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
  int64_t d;
} myword_650610841__srv__SumThreeInt_Request;

// Struct for a sequence of myword_650610841__srv__SumThreeInt_Request.
typedef struct myword_650610841__srv__SumThreeInt_Request__Sequence
{
  myword_650610841__srv__SumThreeInt_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myword_650610841__srv__SumThreeInt_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SumThreeInt in the package myword_650610841.
typedef struct myword_650610841__srv__SumThreeInt_Response
{
  int64_t i;
} myword_650610841__srv__SumThreeInt_Response;

// Struct for a sequence of myword_650610841__srv__SumThreeInt_Response.
typedef struct myword_650610841__srv__SumThreeInt_Response__Sequence
{
  myword_650610841__srv__SumThreeInt_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myword_650610841__srv__SumThreeInt_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYWORD_650610841__SRV__DETAIL__SUM_THREE_INT__STRUCT_H_
