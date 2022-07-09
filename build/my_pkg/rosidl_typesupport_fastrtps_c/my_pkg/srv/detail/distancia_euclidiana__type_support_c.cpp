// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_pkg:srv/DistanciaEuclidiana.idl
// generated code does not contain a copyright notice
#include "my_pkg/srv/detail/distancia_euclidiana__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_pkg/srv/detail/distancia_euclidiana__struct.h"
#include "my_pkg/srv/detail/distancia_euclidiana__functions.h"
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


using _DistanciaEuclidiana_Request__ros_msg_type = my_pkg__srv__DistanciaEuclidiana_Request;

static bool _DistanciaEuclidiana_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DistanciaEuclidiana_Request__ros_msg_type * ros_message = static_cast<const _DistanciaEuclidiana_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  return true;
}

static bool _DistanciaEuclidiana_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DistanciaEuclidiana_Request__ros_msg_type * ros_message = static_cast<_DistanciaEuclidiana_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_pkg
size_t get_serialized_size_my_pkg__srv__DistanciaEuclidiana_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DistanciaEuclidiana_Request__ros_msg_type * ros_message = static_cast<const _DistanciaEuclidiana_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DistanciaEuclidiana_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_pkg__srv__DistanciaEuclidiana_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_pkg
size_t max_serialized_size_my_pkg__srv__DistanciaEuclidiana_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _DistanciaEuclidiana_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_my_pkg__srv__DistanciaEuclidiana_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DistanciaEuclidiana_Request = {
  "my_pkg::srv",
  "DistanciaEuclidiana_Request",
  _DistanciaEuclidiana_Request__cdr_serialize,
  _DistanciaEuclidiana_Request__cdr_deserialize,
  _DistanciaEuclidiana_Request__get_serialized_size,
  _DistanciaEuclidiana_Request__max_serialized_size
};

static rosidl_message_type_support_t _DistanciaEuclidiana_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DistanciaEuclidiana_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_pkg, srv, DistanciaEuclidiana_Request)() {
  return &_DistanciaEuclidiana_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "my_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "my_pkg/srv/detail/distancia_euclidiana__struct.h"
// already included above
// #include "my_pkg/srv/detail/distancia_euclidiana__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _DistanciaEuclidiana_Response__ros_msg_type = my_pkg__srv__DistanciaEuclidiana_Response;

static bool _DistanciaEuclidiana_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DistanciaEuclidiana_Response__ros_msg_type * ros_message = static_cast<const _DistanciaEuclidiana_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: dis
  {
    cdr << ros_message->dis;
  }

  return true;
}

static bool _DistanciaEuclidiana_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DistanciaEuclidiana_Response__ros_msg_type * ros_message = static_cast<_DistanciaEuclidiana_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: dis
  {
    cdr >> ros_message->dis;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_pkg
size_t get_serialized_size_my_pkg__srv__DistanciaEuclidiana_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DistanciaEuclidiana_Response__ros_msg_type * ros_message = static_cast<const _DistanciaEuclidiana_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name dis
  {
    size_t item_size = sizeof(ros_message->dis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DistanciaEuclidiana_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_pkg__srv__DistanciaEuclidiana_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_pkg
size_t max_serialized_size_my_pkg__srv__DistanciaEuclidiana_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: dis
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _DistanciaEuclidiana_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_my_pkg__srv__DistanciaEuclidiana_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DistanciaEuclidiana_Response = {
  "my_pkg::srv",
  "DistanciaEuclidiana_Response",
  _DistanciaEuclidiana_Response__cdr_serialize,
  _DistanciaEuclidiana_Response__cdr_deserialize,
  _DistanciaEuclidiana_Response__get_serialized_size,
  _DistanciaEuclidiana_Response__max_serialized_size
};

static rosidl_message_type_support_t _DistanciaEuclidiana_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DistanciaEuclidiana_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_pkg, srv, DistanciaEuclidiana_Response)() {
  return &_DistanciaEuclidiana_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "my_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_pkg/srv/distancia_euclidiana.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t DistanciaEuclidiana__callbacks = {
  "my_pkg::srv",
  "DistanciaEuclidiana",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_pkg, srv, DistanciaEuclidiana_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_pkg, srv, DistanciaEuclidiana_Response)(),
};

static rosidl_service_type_support_t DistanciaEuclidiana__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &DistanciaEuclidiana__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_pkg, srv, DistanciaEuclidiana)() {
  return &DistanciaEuclidiana__handle;
}

#if defined(__cplusplus)
}
#endif