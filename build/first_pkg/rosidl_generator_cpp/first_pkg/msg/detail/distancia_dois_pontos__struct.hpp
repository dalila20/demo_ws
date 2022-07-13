// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from first_pkg:msg/DistanciaDoisPontos.idl
// generated code does not contain a copyright notice

#ifndef FIRST_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__STRUCT_HPP_
#define FIRST_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__first_pkg__msg__DistanciaDoisPontos __attribute__((deprecated))
#else
# define DEPRECATED__first_pkg__msg__DistanciaDoisPontos __declspec(deprecated)
#endif

namespace first_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DistanciaDoisPontos_
{
  using Type = DistanciaDoisPontos_<ContainerAllocator>;

  explicit DistanciaDoisPontos_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distanciax = 0.0;
      this->distanciay = 0.0;
    }
  }

  explicit DistanciaDoisPontos_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distanciax = 0.0;
      this->distanciay = 0.0;
    }
  }

  // field types and members
  using _distanciax_type =
    double;
  _distanciax_type distanciax;
  using _distanciay_type =
    double;
  _distanciay_type distanciay;

  // setters for named parameter idiom
  Type & set__distanciax(
    const double & _arg)
  {
    this->distanciax = _arg;
    return *this;
  }
  Type & set__distanciay(
    const double & _arg)
  {
    this->distanciay = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    first_pkg::msg::DistanciaDoisPontos_<ContainerAllocator> *;
  using ConstRawPtr =
    const first_pkg::msg::DistanciaDoisPontos_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<first_pkg::msg::DistanciaDoisPontos_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<first_pkg::msg::DistanciaDoisPontos_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      first_pkg::msg::DistanciaDoisPontos_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<first_pkg::msg::DistanciaDoisPontos_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      first_pkg::msg::DistanciaDoisPontos_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<first_pkg::msg::DistanciaDoisPontos_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<first_pkg::msg::DistanciaDoisPontos_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<first_pkg::msg::DistanciaDoisPontos_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__first_pkg__msg__DistanciaDoisPontos
    std::shared_ptr<first_pkg::msg::DistanciaDoisPontos_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__first_pkg__msg__DistanciaDoisPontos
    std::shared_ptr<first_pkg::msg::DistanciaDoisPontos_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DistanciaDoisPontos_ & other) const
  {
    if (this->distanciax != other.distanciax) {
      return false;
    }
    if (this->distanciay != other.distanciay) {
      return false;
    }
    return true;
  }
  bool operator!=(const DistanciaDoisPontos_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DistanciaDoisPontos_

// alias to use template instance with default allocator
using DistanciaDoisPontos =
  first_pkg::msg::DistanciaDoisPontos_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace first_pkg

#endif  // FIRST_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__STRUCT_HPP_
