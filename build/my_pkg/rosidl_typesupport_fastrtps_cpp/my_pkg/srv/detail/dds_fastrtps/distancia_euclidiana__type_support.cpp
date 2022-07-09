// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_pkg:srv/DistanciaEuclidiana.idl
// generated code does not contain a copyright notice
#include "my_pkg/srv/detail/distancia_euclidiana__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_pkg/srv/detail/distancia_euclidiana__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace my_pkg
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_pkg
cdr_serialize(
  const my_pkg::srv::DistanciaEuclidiana_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x
  cdr << ros_message.x;
  // Member: y
  cdr << ros_message.y;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_pkg::srv::DistanciaEuclidiana_Request & ros_message)
{
  // Member: x
  cdr >> ros_message.x;

  // Member: y
  cdr >> ros_message.y;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_pkg
get_serialized_size(
  const my_pkg::srv::DistanciaEuclidiana_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x
  {
    size_t item_size = sizeof(ros_message.x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y
  {
    size_t item_size = sizeof(ros_message.y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_pkg
max_serialized_size_DistanciaEuclidiana_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _DistanciaEuclidiana_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_pkg::srv::DistanciaEuclidiana_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DistanciaEuclidiana_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_pkg::srv::DistanciaEuclidiana_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DistanciaEuclidiana_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_pkg::srv::DistanciaEuclidiana_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DistanciaEuclidiana_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DistanciaEuclidiana_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _DistanciaEuclidiana_Request__callbacks = {
  "my_pkg::srv",
  "DistanciaEuclidiana_Request",
  _DistanciaEuclidiana_Request__cdr_serialize,
  _DistanciaEuclidiana_Request__cdr_deserialize,
  _DistanciaEuclidiana_Request__get_serialized_size,
  _DistanciaEuclidiana_Request__max_serialized_size
};

static rosidl_message_type_support_t _DistanciaEuclidiana_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DistanciaEuclidiana_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace my_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<my_pkg::srv::DistanciaEuclidiana_Request>()
{
  return &my_pkg::srv::typesupport_fastrtps_cpp::_DistanciaEuclidiana_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_pkg, srv, DistanciaEuclidiana_Request)() {
  return &my_pkg::srv::typesupport_fastrtps_cpp::_DistanciaEuclidiana_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace my_pkg
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_pkg
cdr_serialize(
  const my_pkg::srv::DistanciaEuclidiana_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: dis
  cdr << ros_message.dis;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_pkg::srv::DistanciaEuclidiana_Response & ros_message)
{
  // Member: dis
  cdr >> ros_message.dis;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_pkg
get_serialized_size(
  const my_pkg::srv::DistanciaEuclidiana_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: dis
  {
    size_t item_size = sizeof(ros_message.dis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_pkg
max_serialized_size_DistanciaEuclidiana_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: dis
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _DistanciaEuclidiana_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_pkg::srv::DistanciaEuclidiana_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DistanciaEuclidiana_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_pkg::srv::DistanciaEuclidiana_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DistanciaEuclidiana_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_pkg::srv::DistanciaEuclidiana_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DistanciaEuclidiana_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DistanciaEuclidiana_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _DistanciaEuclidiana_Response__callbacks = {
  "my_pkg::srv",
  "DistanciaEuclidiana_Response",
  _DistanciaEuclidiana_Response__cdr_serialize,
  _DistanciaEuclidiana_Response__cdr_deserialize,
  _DistanciaEuclidiana_Response__get_serialized_size,
  _DistanciaEuclidiana_Response__max_serialized_size
};

static rosidl_message_type_support_t _DistanciaEuclidiana_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DistanciaEuclidiana_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace my_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<my_pkg::srv::DistanciaEuclidiana_Response>()
{
  return &my_pkg::srv::typesupport_fastrtps_cpp::_DistanciaEuclidiana_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_pkg, srv, DistanciaEuclidiana_Response)() {
  return &my_pkg::srv::typesupport_fastrtps_cpp::_DistanciaEuclidiana_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace my_pkg
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _DistanciaEuclidiana__callbacks = {
  "my_pkg::srv",
  "DistanciaEuclidiana",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_pkg, srv, DistanciaEuclidiana_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_pkg, srv, DistanciaEuclidiana_Response)(),
};

static rosidl_service_type_support_t _DistanciaEuclidiana__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DistanciaEuclidiana__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace my_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_pkg
const rosidl_service_type_support_t *
get_service_type_support_handle<my_pkg::srv::DistanciaEuclidiana>()
{
  return &my_pkg::srv::typesupport_fastrtps_cpp::_DistanciaEuclidiana__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_pkg, srv, DistanciaEuclidiana)() {
  return &my_pkg::srv::typesupport_fastrtps_cpp::_DistanciaEuclidiana__handle;
}

#ifdef __cplusplus
}
#endif
