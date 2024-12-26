// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from myword_650610841:srv/SumThreeInt.idl
// generated code does not contain a copyright notice
#include "myword_650610841/srv/detail/sum_three_int__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
myword_650610841__srv__SumThreeInt_Request__init(myword_650610841__srv__SumThreeInt_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  // d
  return true;
}

void
myword_650610841__srv__SumThreeInt_Request__fini(myword_650610841__srv__SumThreeInt_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
  // d
}

bool
myword_650610841__srv__SumThreeInt_Request__are_equal(const myword_650610841__srv__SumThreeInt_Request * lhs, const myword_650610841__srv__SumThreeInt_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  // d
  if (lhs->d != rhs->d) {
    return false;
  }
  return true;
}

bool
myword_650610841__srv__SumThreeInt_Request__copy(
  const myword_650610841__srv__SumThreeInt_Request * input,
  myword_650610841__srv__SumThreeInt_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // c
  output->c = input->c;
  // d
  output->d = input->d;
  return true;
}

myword_650610841__srv__SumThreeInt_Request *
myword_650610841__srv__SumThreeInt_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myword_650610841__srv__SumThreeInt_Request * msg = (myword_650610841__srv__SumThreeInt_Request *)allocator.allocate(sizeof(myword_650610841__srv__SumThreeInt_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(myword_650610841__srv__SumThreeInt_Request));
  bool success = myword_650610841__srv__SumThreeInt_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
myword_650610841__srv__SumThreeInt_Request__destroy(myword_650610841__srv__SumThreeInt_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    myword_650610841__srv__SumThreeInt_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
myword_650610841__srv__SumThreeInt_Request__Sequence__init(myword_650610841__srv__SumThreeInt_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myword_650610841__srv__SumThreeInt_Request * data = NULL;

  if (size) {
    data = (myword_650610841__srv__SumThreeInt_Request *)allocator.zero_allocate(size, sizeof(myword_650610841__srv__SumThreeInt_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = myword_650610841__srv__SumThreeInt_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        myword_650610841__srv__SumThreeInt_Request__fini(&data[i - 1]);
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
myword_650610841__srv__SumThreeInt_Request__Sequence__fini(myword_650610841__srv__SumThreeInt_Request__Sequence * array)
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
      myword_650610841__srv__SumThreeInt_Request__fini(&array->data[i]);
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

myword_650610841__srv__SumThreeInt_Request__Sequence *
myword_650610841__srv__SumThreeInt_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myword_650610841__srv__SumThreeInt_Request__Sequence * array = (myword_650610841__srv__SumThreeInt_Request__Sequence *)allocator.allocate(sizeof(myword_650610841__srv__SumThreeInt_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = myword_650610841__srv__SumThreeInt_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
myword_650610841__srv__SumThreeInt_Request__Sequence__destroy(myword_650610841__srv__SumThreeInt_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    myword_650610841__srv__SumThreeInt_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
myword_650610841__srv__SumThreeInt_Request__Sequence__are_equal(const myword_650610841__srv__SumThreeInt_Request__Sequence * lhs, const myword_650610841__srv__SumThreeInt_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!myword_650610841__srv__SumThreeInt_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
myword_650610841__srv__SumThreeInt_Request__Sequence__copy(
  const myword_650610841__srv__SumThreeInt_Request__Sequence * input,
  myword_650610841__srv__SumThreeInt_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(myword_650610841__srv__SumThreeInt_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    myword_650610841__srv__SumThreeInt_Request * data =
      (myword_650610841__srv__SumThreeInt_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!myword_650610841__srv__SumThreeInt_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          myword_650610841__srv__SumThreeInt_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!myword_650610841__srv__SumThreeInt_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
myword_650610841__srv__SumThreeInt_Response__init(myword_650610841__srv__SumThreeInt_Response * msg)
{
  if (!msg) {
    return false;
  }
  // i
  return true;
}

void
myword_650610841__srv__SumThreeInt_Response__fini(myword_650610841__srv__SumThreeInt_Response * msg)
{
  if (!msg) {
    return;
  }
  // i
}

bool
myword_650610841__srv__SumThreeInt_Response__are_equal(const myword_650610841__srv__SumThreeInt_Response * lhs, const myword_650610841__srv__SumThreeInt_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // i
  if (lhs->i != rhs->i) {
    return false;
  }
  return true;
}

bool
myword_650610841__srv__SumThreeInt_Response__copy(
  const myword_650610841__srv__SumThreeInt_Response * input,
  myword_650610841__srv__SumThreeInt_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // i
  output->i = input->i;
  return true;
}

myword_650610841__srv__SumThreeInt_Response *
myword_650610841__srv__SumThreeInt_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myword_650610841__srv__SumThreeInt_Response * msg = (myword_650610841__srv__SumThreeInt_Response *)allocator.allocate(sizeof(myword_650610841__srv__SumThreeInt_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(myword_650610841__srv__SumThreeInt_Response));
  bool success = myword_650610841__srv__SumThreeInt_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
myword_650610841__srv__SumThreeInt_Response__destroy(myword_650610841__srv__SumThreeInt_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    myword_650610841__srv__SumThreeInt_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
myword_650610841__srv__SumThreeInt_Response__Sequence__init(myword_650610841__srv__SumThreeInt_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myword_650610841__srv__SumThreeInt_Response * data = NULL;

  if (size) {
    data = (myword_650610841__srv__SumThreeInt_Response *)allocator.zero_allocate(size, sizeof(myword_650610841__srv__SumThreeInt_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = myword_650610841__srv__SumThreeInt_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        myword_650610841__srv__SumThreeInt_Response__fini(&data[i - 1]);
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
myword_650610841__srv__SumThreeInt_Response__Sequence__fini(myword_650610841__srv__SumThreeInt_Response__Sequence * array)
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
      myword_650610841__srv__SumThreeInt_Response__fini(&array->data[i]);
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

myword_650610841__srv__SumThreeInt_Response__Sequence *
myword_650610841__srv__SumThreeInt_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myword_650610841__srv__SumThreeInt_Response__Sequence * array = (myword_650610841__srv__SumThreeInt_Response__Sequence *)allocator.allocate(sizeof(myword_650610841__srv__SumThreeInt_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = myword_650610841__srv__SumThreeInt_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
myword_650610841__srv__SumThreeInt_Response__Sequence__destroy(myword_650610841__srv__SumThreeInt_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    myword_650610841__srv__SumThreeInt_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
myword_650610841__srv__SumThreeInt_Response__Sequence__are_equal(const myword_650610841__srv__SumThreeInt_Response__Sequence * lhs, const myword_650610841__srv__SumThreeInt_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!myword_650610841__srv__SumThreeInt_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
myword_650610841__srv__SumThreeInt_Response__Sequence__copy(
  const myword_650610841__srv__SumThreeInt_Response__Sequence * input,
  myword_650610841__srv__SumThreeInt_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(myword_650610841__srv__SumThreeInt_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    myword_650610841__srv__SumThreeInt_Response * data =
      (myword_650610841__srv__SumThreeInt_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!myword_650610841__srv__SumThreeInt_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          myword_650610841__srv__SumThreeInt_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!myword_650610841__srv__SumThreeInt_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
