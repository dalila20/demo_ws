// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_pkg:msg/DistanciaDoisPontos.idl
// generated code does not contain a copyright notice
#include "my_pkg/msg/detail/distancia_dois_pontos__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
my_pkg__msg__DistanciaDoisPontos__init(my_pkg__msg__DistanciaDoisPontos * msg)
{
  if (!msg) {
    return false;
  }
  // distanciax
  // distanciay
  return true;
}

void
my_pkg__msg__DistanciaDoisPontos__fini(my_pkg__msg__DistanciaDoisPontos * msg)
{
  if (!msg) {
    return;
  }
  // distanciax
  // distanciay
}

my_pkg__msg__DistanciaDoisPontos *
my_pkg__msg__DistanciaDoisPontos__create()
{
  my_pkg__msg__DistanciaDoisPontos * msg = (my_pkg__msg__DistanciaDoisPontos *)malloc(sizeof(my_pkg__msg__DistanciaDoisPontos));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_pkg__msg__DistanciaDoisPontos));
  bool success = my_pkg__msg__DistanciaDoisPontos__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
my_pkg__msg__DistanciaDoisPontos__destroy(my_pkg__msg__DistanciaDoisPontos * msg)
{
  if (msg) {
    my_pkg__msg__DistanciaDoisPontos__fini(msg);
  }
  free(msg);
}


bool
my_pkg__msg__DistanciaDoisPontos__Sequence__init(my_pkg__msg__DistanciaDoisPontos__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  my_pkg__msg__DistanciaDoisPontos * data = NULL;
  if (size) {
    data = (my_pkg__msg__DistanciaDoisPontos *)calloc(size, sizeof(my_pkg__msg__DistanciaDoisPontos));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_pkg__msg__DistanciaDoisPontos__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_pkg__msg__DistanciaDoisPontos__fini(&data[i - 1]);
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
my_pkg__msg__DistanciaDoisPontos__Sequence__fini(my_pkg__msg__DistanciaDoisPontos__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_pkg__msg__DistanciaDoisPontos__fini(&array->data[i]);
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

my_pkg__msg__DistanciaDoisPontos__Sequence *
my_pkg__msg__DistanciaDoisPontos__Sequence__create(size_t size)
{
  my_pkg__msg__DistanciaDoisPontos__Sequence * array = (my_pkg__msg__DistanciaDoisPontos__Sequence *)malloc(sizeof(my_pkg__msg__DistanciaDoisPontos__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = my_pkg__msg__DistanciaDoisPontos__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
my_pkg__msg__DistanciaDoisPontos__Sequence__destroy(my_pkg__msg__DistanciaDoisPontos__Sequence * array)
{
  if (array) {
    my_pkg__msg__DistanciaDoisPontos__Sequence__fini(array);
  }
  free(array);
}
