/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/robotlab/catkin_ws/src/drrobot_I90_player/msg/RangeArray.msg
 *
 */


#ifndef DRROBOT_I90_PLAYER_MESSAGE_RANGEARRAY_H
#define DRROBOT_I90_PLAYER_MESSAGE_RANGEARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include "Range.h"

namespace drrobot_I90_player
{
template <class ContainerAllocator>
struct RangeArray_
{
  typedef RangeArray_<ContainerAllocator> Type;

  RangeArray_()
    : ranges()  {
    }
  RangeArray_(const ContainerAllocator& _alloc)
    : ranges(_alloc)  {
    }



   typedef std::vector< ::drrobot_I90_player::Range_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::drrobot_I90_player::Range_<ContainerAllocator> >::other >  _ranges_type;
  _ranges_type ranges;




  typedef boost::shared_ptr< ::drrobot_I90_player::RangeArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::drrobot_I90_player::RangeArray_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct RangeArray_

typedef ::drrobot_I90_player::RangeArray_<std::allocator<void> > RangeArray;

typedef boost::shared_ptr< ::drrobot_I90_player::RangeArray > RangeArrayPtr;
typedef boost::shared_ptr< ::drrobot_I90_player::RangeArray const> RangeArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::drrobot_I90_player::RangeArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::drrobot_I90_player::RangeArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace drrobot_I90_player

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/groovy/share/nav_msgs/cmake/../msg'], 'drrobot_I90_player': ['/home/robotlab/catkin_ws/src/drrobot_I90_player/msg'], 'std_msgs': ['/opt/ros/groovy/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/groovy/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/groovy/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/groovy/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::drrobot_I90_player::RangeArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::drrobot_I90_player::RangeArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drrobot_I90_player::RangeArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drrobot_I90_player::RangeArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drrobot_I90_player::RangeArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drrobot_I90_player::RangeArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::drrobot_I90_player::RangeArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b72db098d4ed346ce682a1d5e70d327c";
  }

  static const char* value(const ::drrobot_I90_player::RangeArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb72db098d4ed346cULL;
  static const uint64_t static_value2 = 0xe682a1d5e70d327cULL;
};

template<class ContainerAllocator>
struct DataType< ::drrobot_I90_player::RangeArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "drrobot_I90_player/RangeArray";
  }

  static const char* value(const ::drrobot_I90_player::RangeArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::drrobot_I90_player::RangeArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#this message will be used for IR ranger sensor and ultrasonic range sensor\n\
Range[] ranges\n\
\n\
================================================================================\n\
MSG: drrobot_I90_player/Range\n\
# Single range reading from an active ranger that emits energy and reports\n\
# one range reading that is valid along an arc at the distance measured. \n\
# This message is not appropriate for fixed-range obstacle detectors, \n\
# such as the Sharp GP2D15. This message is also not appropriate for laser \n\
# scanners. See the LaserScan message if you are working with a laser scanner.\n\
\n\
Header header    	# timestamp in the header is the time the ranger\n\
		 	# returned the distance reading\n\
\n\
# Radiation type enums\n\
# If you want a value added to this list, send an email to the ros-users list\n\
uint8 ULTRASOUND=0\n\
uint8 INFRARED=1\n\
\n\
uint8 radiation_type    # the type of radiation used by the sensor\n\
		 	# (sound, IR, etc) [enum]\n\
\n\
float32 field_of_view   # the size of the arc that the distance reading is\n\
		 	# valid for [rad]\n\
		 	# the object causing the range reading may have\n\
		 	# been anywhere within -field_of_view/2 and\n\
		 	# field_of_view/2 at the measured range. \n\
                        # 0 angle corresponds to the x-axis of the sensor.\n\
\n\
float32 min_range       # minimum range value [m]\n\
float32 max_range       # maximum range value [m]\n\
\n\
float32 range           # range data [m]\n\
		 	# (Note: values < range_min or > range_max\n\
		 	# should be discarded)\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::drrobot_I90_player::RangeArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::drrobot_I90_player::RangeArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ranges);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct RangeArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::drrobot_I90_player::RangeArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::drrobot_I90_player::RangeArray_<ContainerAllocator>& v)
  {
    s << indent << "ranges[]" << std::endl;
    for (size_t i = 0; i < v.ranges.size(); ++i)
    {
      s << indent << "  ranges[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::drrobot_I90_player::Range_<ContainerAllocator> >::stream(s, indent + "    ", v.ranges[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DRROBOT_I90_PLAYER_MESSAGE_RANGEARRAY_H
