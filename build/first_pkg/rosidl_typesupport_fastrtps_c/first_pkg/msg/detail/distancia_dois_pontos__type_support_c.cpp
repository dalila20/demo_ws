// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from first_pkg:msg/DistanciaDoisPontos.idl
// generated code does not contain a copyright notice
#include "first_pkg/msg/detail/distancia_dois_pontos__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "first_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "first_pkg/msg/detail/distancia_dois_pontos__struct.h"
#include "first_pkg/msg/detail/distancia_dois_pontos__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DistanciaDoisPontos__ros_msg_type = first_pkg__msg__DistanciaDoisPontos;

static bool _DistanciaDoisPontos__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DistanciaDoisPontos__ros_msg_type * ros_message = static_cast<const _DistanciaDoisPontos__ros_msg_type *>(untyped_ros_message);
  // Field name: distanciax
  {
    cdr << ros_message->distanciax;
  }

  // Field name: distanciay
  {
    cdr << ros_message->distanciay;
  }

  return true;
}

static bool _DistanciaDoisPontos__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DistanciaDoisPontos__ros_msg_type * ros_message = static_cast<_DistanciaDoisPontos__ros_msg_type *>(untyped_ros_message);
  // Field name: distanciax
  {
    cdr >> ros_message->distanciax;
  }

  // Field name: distanciay
  {
    cdr >> ros_message->distanciay;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_first_pkg
size_t get_serialized_size_first_pkg__msg__DistanciaDoisPontos(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DistanciaDoisPontos__ros_msg_type * ros_message = static_cast<const _DistanciaDoisPontos__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name distanciax
  {
    size_t item_size = sizeof(ros_message->distanciax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distanciay
  {
    size_t item_size = sizeof(ros_message->distanciay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DistanciaDoisPontos__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_first_pkg__msg__DistanciaDoisPontos(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_first_pkg
size_t max_serialized_size_first_pkg__msg__DistanciaDoisPontos(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: distanciax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: distanciay
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _DistanciaDoisPontos__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_first_pkg__msg__DistanciaDoisPontos(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DistanciaDoisPontos = {
  "first_pkg::msg",
  "DistanciaDoisPontos",
  _DistanciaDoisPontos__cdr_serialize,
  _DistanciaDoisPontos__cdr_deserialize,
  _DistanciaDoisPontos__get_serialized_size,
  _DistanciaDoisPontos__max_serialized_size
};

static rosidl_message_type_support_t _DistanciaDoisPontos__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DistanciaDoisPontos,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, first_pkg, msg, DistanciaDoisPontos)() {
  return &_DistanciaDoisPontos__type_support;
}

#if defined(__cplusplus)
}
#endif
