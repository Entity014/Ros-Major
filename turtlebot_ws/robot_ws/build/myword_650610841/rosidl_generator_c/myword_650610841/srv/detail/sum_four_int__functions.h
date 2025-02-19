// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from myword_650610841:srv/SumFourInt.idl
// generated code does not contain a copyright notice

#ifndef MYWORD_650610841__SRV__DETAIL__SUM_FOUR_INT__FUNCTIONS_H_
#define MYWORD_650610841__SRV__DETAIL__SUM_FOUR_INT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "myword_650610841/msg/rosidl_generator_c__visibility_control.h"

#include "myword_650610841/srv/detail/sum_four_int__struct.h"

/// Initialize srv/SumFourInt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * myword_650610841__srv__SumFourInt_Request
 * )) before or use
 * myword_650610841__srv__SumFourInt_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
bool
myword_650610841__srv__SumFourInt_Request__init(myword_650610841__srv__SumFourInt_Request * msg);

/// Finalize srv/SumFourInt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
void
myword_650610841__srv__SumFourInt_Request__fini(myword_650610841__srv__SumFourInt_Request * msg);

/// Create srv/SumFourInt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * myword_650610841__srv__SumFourInt_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
myword_650610841__srv__SumFourInt_Request *
myword_650610841__srv__SumFourInt_Request__create();

/// Destroy srv/SumFourInt message.
/**
 * It calls
 * myword_650610841__srv__SumFourInt_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
void
myword_650610841__srv__SumFourInt_Request__destroy(myword_650610841__srv__SumFourInt_Request * msg);

/// Check for srv/SumFourInt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
bool
myword_650610841__srv__SumFourInt_Request__are_equal(const myword_650610841__srv__SumFourInt_Request * lhs, const myword_650610841__srv__SumFourInt_Request * rhs);

/// Copy a srv/SumFourInt message.
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
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
bool
myword_650610841__srv__SumFourInt_Request__copy(
  const myword_650610841__srv__SumFourInt_Request * input,
  myword_650610841__srv__SumFourInt_Request * output);

/// Initialize array of srv/SumFourInt messages.
/**
 * It allocates the memory for the number of elements and calls
 * myword_650610841__srv__SumFourInt_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
bool
myword_650610841__srv__SumFourInt_Request__Sequence__init(myword_650610841__srv__SumFourInt_Request__Sequence * array, size_t size);

/// Finalize array of srv/SumFourInt messages.
/**
 * It calls
 * myword_650610841__srv__SumFourInt_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
void
myword_650610841__srv__SumFourInt_Request__Sequence__fini(myword_650610841__srv__SumFourInt_Request__Sequence * array);

/// Create array of srv/SumFourInt messages.
/**
 * It allocates the memory for the array and calls
 * myword_650610841__srv__SumFourInt_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
myword_650610841__srv__SumFourInt_Request__Sequence *
myword_650610841__srv__SumFourInt_Request__Sequence__create(size_t size);

/// Destroy array of srv/SumFourInt messages.
/**
 * It calls
 * myword_650610841__srv__SumFourInt_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
void
myword_650610841__srv__SumFourInt_Request__Sequence__destroy(myword_650610841__srv__SumFourInt_Request__Sequence * array);

/// Check for srv/SumFourInt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
bool
myword_650610841__srv__SumFourInt_Request__Sequence__are_equal(const myword_650610841__srv__SumFourInt_Request__Sequence * lhs, const myword_650610841__srv__SumFourInt_Request__Sequence * rhs);

/// Copy an array of srv/SumFourInt messages.
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
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
bool
myword_650610841__srv__SumFourInt_Request__Sequence__copy(
  const myword_650610841__srv__SumFourInt_Request__Sequence * input,
  myword_650610841__srv__SumFourInt_Request__Sequence * output);

/// Initialize srv/SumFourInt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * myword_650610841__srv__SumFourInt_Response
 * )) before or use
 * myword_650610841__srv__SumFourInt_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
bool
myword_650610841__srv__SumFourInt_Response__init(myword_650610841__srv__SumFourInt_Response * msg);

/// Finalize srv/SumFourInt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
void
myword_650610841__srv__SumFourInt_Response__fini(myword_650610841__srv__SumFourInt_Response * msg);

/// Create srv/SumFourInt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * myword_650610841__srv__SumFourInt_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
myword_650610841__srv__SumFourInt_Response *
myword_650610841__srv__SumFourInt_Response__create();

/// Destroy srv/SumFourInt message.
/**
 * It calls
 * myword_650610841__srv__SumFourInt_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
void
myword_650610841__srv__SumFourInt_Response__destroy(myword_650610841__srv__SumFourInt_Response * msg);

/// Check for srv/SumFourInt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
bool
myword_650610841__srv__SumFourInt_Response__are_equal(const myword_650610841__srv__SumFourInt_Response * lhs, const myword_650610841__srv__SumFourInt_Response * rhs);

/// Copy a srv/SumFourInt message.
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
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
bool
myword_650610841__srv__SumFourInt_Response__copy(
  const myword_650610841__srv__SumFourInt_Response * input,
  myword_650610841__srv__SumFourInt_Response * output);

/// Initialize array of srv/SumFourInt messages.
/**
 * It allocates the memory for the number of elements and calls
 * myword_650610841__srv__SumFourInt_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
bool
myword_650610841__srv__SumFourInt_Response__Sequence__init(myword_650610841__srv__SumFourInt_Response__Sequence * array, size_t size);

/// Finalize array of srv/SumFourInt messages.
/**
 * It calls
 * myword_650610841__srv__SumFourInt_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
void
myword_650610841__srv__SumFourInt_Response__Sequence__fini(myword_650610841__srv__SumFourInt_Response__Sequence * array);

/// Create array of srv/SumFourInt messages.
/**
 * It allocates the memory for the array and calls
 * myword_650610841__srv__SumFourInt_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
myword_650610841__srv__SumFourInt_Response__Sequence *
myword_650610841__srv__SumFourInt_Response__Sequence__create(size_t size);

/// Destroy array of srv/SumFourInt messages.
/**
 * It calls
 * myword_650610841__srv__SumFourInt_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
void
myword_650610841__srv__SumFourInt_Response__Sequence__destroy(myword_650610841__srv__SumFourInt_Response__Sequence * array);

/// Check for srv/SumFourInt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
bool
myword_650610841__srv__SumFourInt_Response__Sequence__are_equal(const myword_650610841__srv__SumFourInt_Response__Sequence * lhs, const myword_650610841__srv__SumFourInt_Response__Sequence * rhs);

/// Copy an array of srv/SumFourInt messages.
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
ROSIDL_GENERATOR_C_PUBLIC_myword_650610841
bool
myword_650610841__srv__SumFourInt_Response__Sequence__copy(
  const myword_650610841__srv__SumFourInt_Response__Sequence * input,
  myword_650610841__srv__SumFourInt_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MYWORD_650610841__SRV__DETAIL__SUM_FOUR_INT__FUNCTIONS_H_
