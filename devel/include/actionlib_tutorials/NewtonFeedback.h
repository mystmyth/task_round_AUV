// Generated by gencpp from file actionlib_tutorials/NewtonFeedback.msg
// DO NOT EDIT!


#ifndef ACTIONLIB_TUTORIALS_MESSAGE_NEWTONFEEDBACK_H
#define ACTIONLIB_TUTORIALS_MESSAGE_NEWTONFEEDBACK_H


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
struct NewtonFeedback_
{
  typedef NewtonFeedback_<ContainerAllocator> Type;

  NewtonFeedback_()
    : sequence()  {
    }
  NewtonFeedback_(const ContainerAllocator& _alloc)
    : sequence(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _sequence_type;
  _sequence_type sequence;





  typedef boost::shared_ptr< ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct NewtonFeedback_

typedef ::actionlib_tutorials::NewtonFeedback_<std::allocator<void> > NewtonFeedback;

typedef boost::shared_ptr< ::actionlib_tutorials::NewtonFeedback > NewtonFeedbackPtr;
typedef boost::shared_ptr< ::actionlib_tutorials::NewtonFeedback const> NewtonFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace actionlib_tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'actionlib_tutorials': ['/home/lavish/catkin_ws/devel/share/actionlib_tutorials/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "30f5835fa11e45a6e77f7b4b083ad898";
  }

  static const char* value(const ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x30f5835fa11e45a6ULL;
  static const uint64_t static_value2 = 0xe77f7b4b083ad898ULL;
};

template<class ContainerAllocator>
struct DataType< ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "actionlib_tutorials/NewtonFeedback";
  }

  static const char* value(const ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
float32[] sequence\n\
\n\
";
  }

  static const char* value(const ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sequence);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NewtonFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::actionlib_tutorials::NewtonFeedback_<ContainerAllocator>& v)
  {
    s << indent << "sequence[]" << std::endl;
    for (size_t i = 0; i < v.sequence.size(); ++i)
    {
      s << indent << "  sequence[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.sequence[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTIONLIB_TUTORIALS_MESSAGE_NEWTONFEEDBACK_H
