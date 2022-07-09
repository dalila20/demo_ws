// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_pkg:srv/DistanciaEuclidiana.idl
// generated code does not contain a copyright notice

#ifndef MY_PKG__SRV__DETAIL__DISTANCIA_EUCLIDIANA__STRUCT_H_
#define MY_PKG__SRV__DETAIL__DISTANCIA_EUCLIDIANA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/DistanciaEuclidiana in the package my_pkg.
typedef struct my_pkg__srv__DistanciaEuclidiana_Request
{
  double x;
  double y;
} my_pkg__srv__DistanciaEuclidiana_Request;

// Struct for a sequence of my_pkg__srv__DistanciaEuclidiana_Request.
typedef struct my_pkg__srv__DistanciaEuclidiana_Request__Sequence
{
  my_pkg__srv__DistanciaEuclidiana_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_pkg__srv__DistanciaEuclidiana_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/DistanciaEuclidiana in the package my_pkg.
typedef struct my_pkg__srv__DistanciaEuclidiana_Response
{
  double dis;
} my_pkg__srv__DistanciaEuclidiana_Response;

// Struct for a sequence of my_pkg__srv__DistanciaEuclidiana_Response.
typedef struct my_pkg__srv__DistanciaEuclidiana_Response__Sequence
{
  my_pkg__srv__DistanciaEuclidiana_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_pkg__srv__DistanciaEuclidiana_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_PKG__SRV__DETAIL__DISTANCIA_EUCLIDIANA__STRUCT_H_
