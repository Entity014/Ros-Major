// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lidar_interfaces:srv/Break.idl
// generated code does not contain a copyright notice
#include "lidar_interfaces/srv/detail/break__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
lidar_interfaces__srv__Break_Request__init(lidar_interfaces__srv__Break_Request * msg)
{
  if (!msg) {
    return false;
  }
  // angles
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->angles, 0)) {
    lidar_interfaces__srv__Break_Request__fini(msg);
    return false;
  }
  return true;
}

void
lidar_interfaces__srv__Break_Request__fini(lidar_interfaces__srv__Break_Request * msg)
{
  if (!msg) {
    return;
  }
  // angles
  rosidl_runtime_c__int64__Sequence__fini(&msg->angles);
}

bool
lidar_interfaces__srv__Break_Request__are_equal(const lidar_interfaces__srv__Break_Request * lhs, const lidar_interfaces__srv__Break_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angles
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->angles), &(rhs->angles)))
  {
    return false;
  }
  return true;
}

bool
lidar_interfaces__srv__Break_Request__copy(
  const lidar_interfaces__srv__Break_Request * input,
  lidar_interfaces__srv__Break_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // angles
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->angles), &(output->angles)))
  {
    return false;
  }
  return true;
}

lidar_interfaces__srv__Break_Request *
lidar_interfaces__srv__Break_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lidar_interfaces__srv__Break_Request * msg = (lidar_interfaces__srv__Break_Request *)allocator.allocate(sizeof(lidar_interfaces__srv__Break_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lidar_interfaces__srv__Break_Request));
  bool success = lidar_interfaces__srv__Break_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lidar_interfaces__srv__Break_Request__destroy(lidar_interfaces__srv__Break_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lidar_interfaces__srv__Break_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lidar_interfaces__srv__Break_Request__Sequence__init(lidar_interfaces__srv__Break_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lidar_interfaces__srv__Break_Request * data = NULL;

  if (size) {
    data = (lidar_interfaces__srv__Break_Request *)allocator.zero_allocate(size, sizeof(lidar_interfaces__srv__Break_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lidar_interfaces__srv__Break_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lidar_interfaces__srv__Break_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lidar_interfaces__srv__Break_Request__Sequence__fini(lidar_interfaces__srv__Break_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lidar_interfaces__srv__Break_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lidar_interfaces__srv__Break_Request__Sequence *
lidar_interfaces__srv__Break_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lidar_interfaces__srv__Break_Request__Sequence * array = (lidar_interfaces__srv__Break_Request__Sequence *)allocator.allocate(sizeof(lidar_interfaces__srv__Break_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lidar_interfaces__srv__Break_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lidar_interfaces__srv__Break_Request__Sequence__destroy(lidar_interfaces__srv__Break_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lidar_interfaces__srv__Break_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lidar_interfaces__srv__Break_Request__Sequence__are_equal(const lidar_interfaces__srv__Break_Request__Sequence * lhs, const lidar_interfaces__srv__Break_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lidar_interfaces__srv__Break_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lidar_interfaces__srv__Break_Request__Sequence__copy(
  const lidar_interfaces__srv__Break_Request__Sequence * input,
  lidar_interfaces__srv__Break_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lidar_interfaces__srv__Break_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lidar_interfaces__srv__Break_Request * data =
      (lidar_interfaces__srv__Break_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lidar_interfaces__srv__Break_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lidar_interfaces__srv__Break_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lidar_interfaces__srv__Break_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
lidar_interfaces__srv__Break_Response__init(lidar_interfaces__srv__Break_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
lidar_interfaces__srv__Break_Response__fini(lidar_interfaces__srv__Break_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
lidar_interfaces__srv__Break_Response__are_equal(const lidar_interfaces__srv__Break_Response * lhs, const lidar_interfaces__srv__Break_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
lidar_interfaces__srv__Break_Response__copy(
  const lidar_interfaces__srv__Break_Response * input,
  lidar_interfaces__srv__Break_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

lidar_interfaces__srv__Break_Response *
lidar_interfaces__srv__Break_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lidar_interfaces__srv__Break_Response * msg = (lidar_interfaces__srv__Break_Response *)allocator.allocate(sizeof(lidar_interfaces__srv__Break_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lidar_interfaces__srv__Break_Response));
  bool success = lidar_interfaces__srv__Break_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lidar_interfaces__srv__Break_Response__destroy(lidar_interfaces__srv__Break_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lidar_interfaces__srv__Break_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lidar_interfaces__srv__Break_Response__Sequence__init(lidar_interfaces__srv__Break_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lidar_interfaces__srv__Break_Response * data = NULL;

  if (size) {
    data = (lidar_interfaces__srv__Break_Response *)allocator.zero_allocate(size, sizeof(lidar_interfaces__srv__Break_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lidar_interfaces__srv__Break_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lidar_interfaces__srv__Break_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lidar_interfaces__srv__Break_Response__Sequence__fini(lidar_interfaces__srv__Break_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lidar_interfaces__srv__Break_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lidar_interfaces__srv__Break_Response__Sequence *
lidar_interfaces__srv__Break_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lidar_interfaces__srv__Break_Response__Sequence * array = (lidar_interfaces__srv__Break_Response__Sequence *)allocator.allocate(sizeof(lidar_interfaces__srv__Break_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lidar_interfaces__srv__Break_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lidar_interfaces__srv__Break_Response__Sequence__destroy(lidar_interfaces__srv__Break_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lidar_interfaces__srv__Break_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lidar_interfaces__srv__Break_Response__Sequence__are_equal(const lidar_interfaces__srv__Break_Response__Sequence * lhs, const lidar_interfaces__srv__Break_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lidar_interfaces__srv__Break_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lidar_interfaces__srv__Break_Response__Sequence__copy(
  const lidar_interfaces__srv__Break_Response__Sequence * input,
  lidar_interfaces__srv__Break_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lidar_interfaces__srv__Break_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lidar_interfaces__srv__Break_Response * data =
      (lidar_interfaces__srv__Break_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lidar_interfaces__srv__Break_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lidar_interfaces__srv__Break_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lidar_interfaces__srv__Break_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
