// Generated by gencpp from file actionlib_tutorials/NwtrapGoal.msg
// DO NOT EDIT!


#ifndef ACTIONLIB_TUTORIALS_MESSAGE_NWTRAPGOAL_H
#define ACTIONLIB_TUTORIALS_MESSAGE_NWTRAPGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace actionlib_tutorials
{
template <class ContainerAllocator>
struct NwtrapGoal_
{
  typedef NwtrapGoal_<ContainerAllocator> Type;

  NwtrapGoal_()
    : order(0)  {
    }
  NwtrapGoal_(const ContainerAllocator& _alloc)
    : order(0)  {
  (void)_alloc;
    }



   typedef int32_t _order_type;
  _order_type order;





  typedef boost::shared_ptr< ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator> const> ConstPtr;

}; // struct NwtrapGoal_

typedef ::actionlib_tutorials::NwtrapGoal_<std::allocator<void> > NwtrapGoal;

typedef boost::shared_ptr< ::actionlib_tutorials::NwtrapGoal > NwtrapGoalPtr;
typedef boost::shared_ptr< ::actionlib_tutorials::NwtrapGoal const> NwtrapGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace actionlib_tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'actionlib_tutorials': ['/home/lavish/catkin_ws/devel/share/actionlib_tutorials/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6889063349a00b249bd1661df429d822";
  }

  static const char* value(const ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6889063349a00b24ULL;
  static const uint64_t static_value2 = 0x9bd1661df429d822ULL;
};

template<class ContainerAllocator>
struct DataType< ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "actionlib_tutorials/NwtrapGoal";
  }

  static const char* value(const ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
int32 order\n\
";
  }

  static const char* value(const ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.order);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NwtrapGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::actionlib_tutorials::NwtrapGoal_<ContainerAllocator>& v)
  {
    s << indent << "order: ";
    Printer<int32_t>::stream(s, indent + "  ", v.order);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTIONLIB_TUTORIALS_MESSAGE_NWTRAPGOAL_H
