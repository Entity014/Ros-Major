// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from myword_650610841:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef MYWORD_650610841__MSG__DETAIL__NUM__STRUCT_H_
#define MYWORD_650610841__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Num in the package myword_650610841.
typedef struct myword_650610841__msg__Num
{
  int64_t n;
} myword_650610841__msg__Num;

// Struct for a sequence of myword_650610841__msg__Num.
typedef struct myword_650610841__msg__Num__Sequence
{
  myword_650610841__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myword_650610841__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYWORD_650610841__MSG__DETAIL__NUM__STRUCT_H_
