// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from first_pkg:msg/DistanciaDoisPontos.idl
// generated code does not contain a copyright notice
#include "first_pkg/msg/detail/distancia_dois_pontos__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
first_pkg__msg__DistanciaDoisPontos__init(first_pkg__msg__DistanciaDoisPontos * msg)
{
  if (!msg) {
    return false;
  }
  // distanciax
  // distanciay
  return true;
}

void
first_pkg__msg__DistanciaDoisPontos__fini(first_pkg__msg__DistanciaDoisPontos * msg)
{
  if (!msg) {
    return;
  }
  // distanciax
  // distanciay
}

first_pkg__msg__DistanciaDoisPontos *
first_pkg__msg__DistanciaDoisPontos__create()
{
  first_pkg__msg__DistanciaDoisPontos * msg = (first_pkg__msg__DistanciaDoisPontos *)malloc(sizeof(first_pkg__msg__DistanciaDoisPontos));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(first_pkg__msg__DistanciaDoisPontos));
  bool success = first_pkg__msg__DistanciaDoisPontos__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
first_pkg__msg__DistanciaDoisPontos__destroy(first_pkg__msg__DistanciaDoisPontos * msg)
{
  if (msg) {
    first_pkg__msg__DistanciaDoisPontos__fini(msg);
  }
  free(msg);
}


bool
first_pkg__msg__DistanciaDoisPontos__Sequence__init(first_pkg__msg__DistanciaDoisPontos__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  first_pkg__msg__DistanciaDoisPontos * data = NULL;
  if (size) {
    data = (first_pkg__msg__DistanciaDoisPontos *)calloc(size, sizeof(first_pkg__msg__DistanciaDoisPontos));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = first_pkg__msg__DistanciaDoisPontos__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        first_pkg__msg__DistanciaDoisPontos__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
first_pkg__msg__DistanciaDoisPontos__Sequence__fini(first_pkg__msg__DistanciaDoisPontos__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      first_pkg__msg__DistanciaDoisPontos__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

first_pkg__msg__DistanciaDoisPontos__Sequence *
first_pkg__msg__DistanciaDoisPontos__Sequence__create(size_t size)
{
  first_pkg__msg__DistanciaDoisPontos__Sequence * array = (first_pkg__msg__DistanciaDoisPontos__Sequence *)malloc(sizeof(first_pkg__msg__DistanciaDoisPontos__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = first_pkg__msg__DistanciaDoisPontos__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
first_pkg__msg__DistanciaDoisPontos__Sequence__destroy(first_pkg__msg__DistanciaDoisPontos__Sequence * array)
{
  if (array) {
    first_pkg__msg__DistanciaDoisPontos__Sequence__fini(array);
  }
  free(array);
}
