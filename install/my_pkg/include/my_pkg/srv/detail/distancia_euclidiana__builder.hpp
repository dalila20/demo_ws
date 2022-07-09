// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_pkg:srv/DistanciaEuclidiana.idl
// generated code does not contain a copyright notice

#ifndef MY_PKG__SRV__DETAIL__DISTANCIA_EUCLIDIANA__BUILDER_HPP_
#define MY_PKG__SRV__DETAIL__DISTANCIA_EUCLIDIANA__BUILDER_HPP_

#include "my_pkg/srv/detail/distancia_euclidiana__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_pkg
{

namespace srv
{

namespace builder
{

class Init_DistanciaEuclidiana_Request_y
{
public:
  explicit Init_DistanciaEuclidiana_Request_y(::my_pkg::srv::DistanciaEuclidiana_Request & msg)
  : msg_(msg)
  {}
  ::my_pkg::srv::DistanciaEuclidiana_Request y(::my_pkg::srv::DistanciaEuclidiana_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_pkg::srv::DistanciaEuclidiana_Request msg_;
};

class Init_DistanciaEuclidiana_Request_x
{
public:
  Init_DistanciaEuclidiana_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DistanciaEuclidiana_Request_y x(::my_pkg::srv::DistanciaEuclidiana_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_DistanciaEuclidiana_Request_y(msg_);
  }

private:
  ::my_pkg::srv::DistanciaEuclidiana_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_pkg::srv::DistanciaEuclidiana_Request>()
{
  return my_pkg::srv::builder::Init_DistanciaEuclidiana_Request_x();
}

}  // namespace my_pkg


namespace my_pkg
{

namespace srv
{

namespace builder
{

class Init_DistanciaEuclidiana_Response_dis
{
public:
  Init_DistanciaEuclidiana_Response_dis()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_pkg::srv::DistanciaEuclidiana_Response dis(::my_pkg::srv::DistanciaEuclidiana_Response::_dis_type arg)
  {
    msg_.dis = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_pkg::srv::DistanciaEuclidiana_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_pkg::srv::DistanciaEuclidiana_Response>()
{
  return my_pkg::srv::builder::Init_DistanciaEuclidiana_Response_dis();
}

}  // namespace my_pkg

#endif  // MY_PKG__SRV__DETAIL__DISTANCIA_EUCLIDIANA__BUILDER_HPP_
