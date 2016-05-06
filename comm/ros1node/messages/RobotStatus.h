// Generated by gencpp from file piap/RobotStatus.msg
// DO NOT EDIT!


#ifndef PIAP_MESSAGE_ROBOTSTATUS_H
#define PIAP_MESSAGE_ROBOTSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace piap
{
template <class ContainerAllocator>
struct RobotStatus_
{
  typedef RobotStatus_<ContainerAllocator> Type;

  RobotStatus_()
    : battery(0)
    , turtle_factor(0)
    , battery_charging(false)
    , drive_reversed(false)
    , emergency_active(false)
    , brake_active(false)  {
    }
  RobotStatus_(const ContainerAllocator& _alloc)
    : battery(0)
    , turtle_factor(0)
    , battery_charging(false)
    , drive_reversed(false)
    , emergency_active(false)
    , brake_active(false)  {
    }



   typedef int8_t _battery_type;
  _battery_type battery;

   typedef uint8_t _turtle_factor_type;
  _turtle_factor_type turtle_factor;

   typedef uint8_t _battery_charging_type;
  _battery_charging_type battery_charging;

   typedef uint8_t _drive_reversed_type;
  _drive_reversed_type drive_reversed;

   typedef uint8_t _emergency_active_type;
  _emergency_active_type emergency_active;

   typedef uint8_t _brake_active_type;
  _brake_active_type brake_active;




  typedef boost::shared_ptr< ::piap::RobotStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::piap::RobotStatus_<ContainerAllocator> const> ConstPtr;

}; // struct RobotStatus_

typedef ::piap::RobotStatus_<std::allocator<void> > RobotStatus;

typedef boost::shared_ptr< ::piap::RobotStatus > RobotStatusPtr;
typedef boost::shared_ptr< ::piap::RobotStatus const> RobotStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::piap::RobotStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::piap::RobotStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace piap

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'piap': ['/home/adabrowski/jade_ws/src/piap_demo2/msg'], 'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::piap::RobotStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piap::RobotStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piap::RobotStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piap::RobotStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piap::RobotStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piap::RobotStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::piap::RobotStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6d4b29379b9fa3a4d170c5f99afadde9";
  }

  static const char* value(const ::piap::RobotStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6d4b29379b9fa3a4ULL;
  static const uint64_t static_value2 = 0xd170c5f99afadde9ULL;
};

template<class ContainerAllocator>
struct DataType< ::piap::RobotStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "piap/RobotStatus";
  }

  static const char* value(const ::piap::RobotStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::piap::RobotStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# RobotStatus.msg\n\
# Message format for informing the OCU\n\
# about state of a particular robot\n\
\n\
# battery status\n\
int8 battery\n\
\n\
# turtle factor\n\
uint8 turtle_factor\n\
\n\
# is battery charging\n\
bool battery_charging\n\
\n\
# is drive direction reversed\n\
bool drive_reversed\n\
\n\
# is emergency stop active\n\
bool emergency_active\n\
\n\
# is brake active\n\
bool brake_active\n\
\n\
";
  }

  static const char* value(const ::piap::RobotStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::piap::RobotStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.battery);
      stream.next(m.turtle_factor);
      stream.next(m.battery_charging);
      stream.next(m.drive_reversed);
      stream.next(m.emergency_active);
      stream.next(m.brake_active);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct RobotStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::piap::RobotStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::piap::RobotStatus_<ContainerAllocator>& v)
  {
    s << indent << "battery: ";
    Printer<int8_t>::stream(s, indent + "  ", v.battery);
    s << indent << "turtle_factor: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.turtle_factor);
    s << indent << "battery_charging: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.battery_charging);
    s << indent << "drive_reversed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.drive_reversed);
    s << indent << "emergency_active: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.emergency_active);
    s << indent << "brake_active: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.brake_active);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PIAP_MESSAGE_ROBOTSTATUS_H
