// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_pkg:srv/DistanciaEuclidiana.idl
// generated code does not contain a copyright notice

#ifndef MY_PKG__SRV__DETAIL__DISTANCIA_EUCLIDIANA__STRUCT_HPP_
#define MY_PKG__SRV__DETAIL__DISTANCIA_EUCLIDIANA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__my_pkg__srv__DistanciaEuclidiana_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_pkg__srv__DistanciaEuclidiana_Request __declspec(deprecated)
#endif

namespace my_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DistanciaEuclidiana_Request_
{
  using Type = DistanciaEuclidiana_Request_<ContainerAllocator>;

  explicit DistanciaEuclidiana_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  explicit DistanciaEuclidiana_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_pkg::srv::DistanciaEuclidiana_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_pkg::srv::DistanciaEuclidiana_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_pkg::srv::DistanciaEuclidiana_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_pkg::srv::DistanciaEuclidiana_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_pkg::srv::DistanciaEuclidiana_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_pkg::srv::DistanciaEuclidiana_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_pkg::srv::DistanciaEuclidiana_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_pkg::srv::DistanciaEuclidiana_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_pkg::srv::DistanciaEuclidiana_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_pkg::srv::DistanciaEuclidiana_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_pkg__srv__DistanciaEuclidiana_Request
    std::shared_ptr<my_pkg::srv::DistanciaEuclidiana_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_pkg__srv__DistanciaEuclidiana_Request
    std::shared_ptr<my_pkg::srv::DistanciaEuclidiana_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DistanciaEuclidiana_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const DistanciaEuclidiana_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DistanciaEuclidiana_Request_

// alias to use template instance with default allocator
using DistanciaEuclidiana_Request =
  my_pkg::srv::DistanciaEuclidiana_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_pkg


#ifndef _WIN32
# define DEPRECATED__my_pkg__srv__DistanciaEuclidiana_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_pkg__srv__DistanciaEuclidiana_Response __declspec(deprecated)
#endif

namespace my_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DistanciaEuclidiana_Response_
{
  using Type = DistanciaEuclidiana_Response_<ContainerAllocator>;

  explicit DistanciaEuclidiana_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dis = 0.0;
    }
  }

  explicit DistanciaEuclidiana_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dis = 0.0;
    }
  }

  // field types and members
  using _dis_type =
    double;
  _dis_type dis;

  // setters for named parameter idiom
  Type & set__dis(
    const double & _arg)
  {
    this->dis = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_pkg::srv::DistanciaEuclidiana_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_pkg::srv::DistanciaEuclidiana_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_pkg::srv::DistanciaEuclidiana_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_pkg::srv::DistanciaEuclidiana_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_pkg::srv::DistanciaEuclidiana_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_pkg::srv::DistanciaEuclidiana_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_pkg::srv::DistanciaEuclidiana_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_pkg::srv::DistanciaEuclidiana_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_pkg::srv::DistanciaEuclidiana_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_pkg::srv::DistanciaEuclidiana_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_pkg__srv__DistanciaEuclidiana_Response
    std::shared_ptr<my_pkg::srv::DistanciaEuclidiana_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_pkg__srv__DistanciaEuclidiana_Response
    std::shared_ptr<my_pkg::srv::DistanciaEuclidiana_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DistanciaEuclidiana_Response_ & other) const
  {
    if (this->dis != other.dis) {
      return false;
    }
    return true;
  }
  bool operator!=(const DistanciaEuclidiana_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DistanciaEuclidiana_Response_

// alias to use template instance with default allocator
using DistanciaEuclidiana_Response =
  my_pkg::srv::DistanciaEuclidiana_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_pkg

namespace my_pkg
{

namespace srv
{

struct DistanciaEuclidiana
{
  using Request = my_pkg::srv::DistanciaEuclidiana_Request;
  using Response = my_pkg::srv::DistanciaEuclidiana_Response;
};

}  // namespace srv

}  // namespace my_pkg

#endif  // MY_PKG__SRV__DETAIL__DISTANCIA_EUCLIDIANA__STRUCT_HPP_
