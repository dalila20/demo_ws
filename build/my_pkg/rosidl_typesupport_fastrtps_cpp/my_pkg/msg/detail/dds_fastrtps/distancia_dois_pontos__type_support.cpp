// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_pkg:msg/DistanciaDoisPontos.idl
// generated code does not contain a copyright notice
#include "my_pkg/msg/detail/distancia_dois_pontos__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_pkg/msg/detail/distancia_dois_pontos__struct.hpp"

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

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_pkg
cdr_serialize(
  const my_pkg::msg::DistanciaDoisPontos & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: distanciax
  cdr << ros_message.distanciax;
  // Member: distanciay
  cdr << ros_message.distanciay;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_pkg::msg::DistanciaDoisPontos & ros_message)
{
  // Member: distanciax
  cdr >> ros_message.distanciax;

  // Member: distanciay
  cdr >> ros_message.distanciay;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_pkg
get_serialized_size(
  const my_pkg::msg::DistanciaDoisPontos & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: distanciax
  {
    size_t item_size = sizeof(ros_message.distanciax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distanciay
  {
    size_t item_size = sizeof(ros_message.distanciay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_pkg
max_serialized_size_DistanciaDoisPontos(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: distanciax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: distanciay
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _DistanciaDoisPontos__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_pkg::msg::DistanciaDoisPontos *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DistanciaDoisPontos__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_pkg::msg::DistanciaDoisPontos *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DistanciaDoisPontos__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_pkg::msg::DistanciaDoisPontos *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DistanciaDoisPontos__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DistanciaDoisPontos(full_bounded, 0);
}

static message_type_support_callbacks_t _DistanciaDoisPontos__callbacks = {
  "my_pkg::msg",
  "DistanciaDoisPontos",
  _DistanciaDoisPontos__cdr_serialize,
  _DistanciaDoisPontos__cdr_deserialize,
  _DistanciaDoisPontos__get_serialized_size,
  _DistanciaDoisPontos__max_serialized_size
};

static rosidl_message_type_support_t _DistanciaDoisPontos__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DistanciaDoisPontos__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace my_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<my_pkg::msg::DistanciaDoisPontos>()
{
  return &my_pkg::msg::typesupport_fastrtps_cpp::_DistanciaDoisPontos__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_pkg, msg, DistanciaDoisPontos)() {
  return &my_pkg::msg::typesupport_fastrtps_cpp::_DistanciaDoisPontos__handle;
}

#ifdef __cplusplus
}
#endif
