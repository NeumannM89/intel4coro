// Generated by gencpp from file planning_msgs/Planning.msg
// DO NOT EDIT!


#ifndef PLANNING_MSGS_MESSAGE_PLANNING_H
#define PLANNING_MSGS_MESSAGE_PLANNING_H

#include <ros/service_traits.h>


#include <planning_msgs/PlanningRequest.h>
#include <planning_msgs/PlanningResponse.h>


namespace planning_msgs
{

struct Planning
{

typedef PlanningRequest Request;
typedef PlanningResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Planning
} // namespace planning_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::planning_msgs::Planning > {
  static const char* value()
  {
    return "63b30a5b2209d6af2bdcdcf4940aca3f";
  }

  static const char* value(const ::planning_msgs::Planning&) { return value(); }
};

template<>
struct DataType< ::planning_msgs::Planning > {
  static const char* value()
  {
    return "planning_msgs/Planning";
  }

  static const char* value(const ::planning_msgs::Planning&) { return value(); }
};


// service_traits::MD5Sum< ::planning_msgs::PlanningRequest> should match
// service_traits::MD5Sum< ::planning_msgs::Planning >
template<>
struct MD5Sum< ::planning_msgs::PlanningRequest>
{
  static const char* value()
  {
    return MD5Sum< ::planning_msgs::Planning >::value();
  }
  static const char* value(const ::planning_msgs::PlanningRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::planning_msgs::PlanningRequest> should match
// service_traits::DataType< ::planning_msgs::Planning >
template<>
struct DataType< ::planning_msgs::PlanningRequest>
{
  static const char* value()
  {
    return DataType< ::planning_msgs::Planning >::value();
  }
  static const char* value(const ::planning_msgs::PlanningRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::planning_msgs::PlanningResponse> should match
// service_traits::MD5Sum< ::planning_msgs::Planning >
template<>
struct MD5Sum< ::planning_msgs::PlanningResponse>
{
  static const char* value()
  {
    return MD5Sum< ::planning_msgs::Planning >::value();
  }
  static const char* value(const ::planning_msgs::PlanningResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::planning_msgs::PlanningResponse> should match
// service_traits::DataType< ::planning_msgs::Planning >
template<>
struct DataType< ::planning_msgs::PlanningResponse>
{
  static const char* value()
  {
    return DataType< ::planning_msgs::Planning >::value();
  }
  static const char* value(const ::planning_msgs::PlanningResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PLANNING_MSGS_MESSAGE_PLANNING_H