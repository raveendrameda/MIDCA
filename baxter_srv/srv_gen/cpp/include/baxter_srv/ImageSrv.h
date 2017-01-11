/* Auto-generated by genmsg_cpp for file /home/veyorokon/ros/baxter_ws/src/baxter_srv/srv/ImageSrv.srv */
#ifndef BAXTER_SRV_SERVICE_IMAGESRV_H
#define BAXTER_SRV_SERVICE_IMAGESRV_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"



#include "sensor_msgs/Image.h"

namespace baxter_srv
{
template <class ContainerAllocator>
struct ImageSrvRequest_ {
  typedef ImageSrvRequest_<ContainerAllocator> Type;

  ImageSrvRequest_()
  {
  }

  ImageSrvRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::baxter_srv::ImageSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_srv::ImageSrvRequest_<ContainerAllocator>  const> ConstPtr;
}; // struct ImageSrvRequest
typedef  ::baxter_srv::ImageSrvRequest_<std::allocator<void> > ImageSrvRequest;

typedef boost::shared_ptr< ::baxter_srv::ImageSrvRequest> ImageSrvRequestPtr;
typedef boost::shared_ptr< ::baxter_srv::ImageSrvRequest const> ImageSrvRequestConstPtr;



template <class ContainerAllocator>
struct ImageSrvResponse_ {
  typedef ImageSrvResponse_<ContainerAllocator> Type;

  ImageSrvResponse_()
  : last_image()
  {
  }

  ImageSrvResponse_(const ContainerAllocator& _alloc)
  : last_image(_alloc)
  {
  }

  typedef  ::sensor_msgs::Image_<ContainerAllocator>  _last_image_type;
   ::sensor_msgs::Image_<ContainerAllocator>  last_image;


  typedef boost::shared_ptr< ::baxter_srv::ImageSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_srv::ImageSrvResponse_<ContainerAllocator>  const> ConstPtr;
}; // struct ImageSrvResponse
typedef  ::baxter_srv::ImageSrvResponse_<std::allocator<void> > ImageSrvResponse;

typedef boost::shared_ptr< ::baxter_srv::ImageSrvResponse> ImageSrvResponsePtr;
typedef boost::shared_ptr< ::baxter_srv::ImageSrvResponse const> ImageSrvResponseConstPtr;


struct ImageSrv
{

typedef ImageSrvRequest Request;
typedef ImageSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct ImageSrv
} // namespace baxter_srv

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::baxter_srv::ImageSrvRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::baxter_srv::ImageSrvRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::baxter_srv::ImageSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::baxter_srv::ImageSrvRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_srv::ImageSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "baxter_srv/ImageSrvRequest";
  }

  static const char* value(const  ::baxter_srv::ImageSrvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::baxter_srv::ImageSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::baxter_srv::ImageSrvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::baxter_srv::ImageSrvRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::baxter_srv::ImageSrvResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::baxter_srv::ImageSrvResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::baxter_srv::ImageSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4d2f9eea61bb74d22309b1bc310a8635";
  }

  static const char* value(const  ::baxter_srv::ImageSrvResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4d2f9eea61bb74d2ULL;
  static const uint64_t static_value2 = 0x2309b1bc310a8635ULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_srv::ImageSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "baxter_srv/ImageSrvResponse";
  }

  static const char* value(const  ::baxter_srv::ImageSrvResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::baxter_srv::ImageSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sensor_msgs/Image last_image\n\
\n\
\n\
\n\
================================================================================\n\
MSG: sensor_msgs/Image\n\
# This message contains an uncompressed image\n\
# (0, 0) is at top-left corner of image\n\
#\n\
\n\
Header header        # Header timestamp should be acquisition time of image\n\
                     # Header frame_id should be optical frame of camera\n\
                     # origin of frame should be optical center of cameara\n\
                     # +x should point to the right in the image\n\
                     # +y should point down in the image\n\
                     # +z should point into to plane of the image\n\
                     # If the frame_id here and the frame_id of the CameraInfo\n\
                     # message associated with the image conflict\n\
                     # the behavior is undefined\n\
\n\
uint32 height         # image height, that is, number of rows\n\
uint32 width          # image width, that is, number of columns\n\
\n\
# The legal values for encoding are in file src/image_encodings.cpp\n\
# If you want to standardize a new string format, join\n\
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n\
\n\
string encoding       # Encoding of pixels -- channel meaning, ordering, size\n\
                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n\
\n\
uint8 is_bigendian    # is this data bigendian?\n\
uint32 step           # Full row length in bytes\n\
uint8[] data          # actual matrix data, size is (step * rows)\n\
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
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::baxter_srv::ImageSrvResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::baxter_srv::ImageSrvRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ImageSrvRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::baxter_srv::ImageSrvResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.last_image);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ImageSrvResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<baxter_srv::ImageSrv> {
  static const char* value() 
  {
    return "4d2f9eea61bb74d22309b1bc310a8635";
  }

  static const char* value(const baxter_srv::ImageSrv&) { return value(); } 
};

template<>
struct DataType<baxter_srv::ImageSrv> {
  static const char* value() 
  {
    return "baxter_srv/ImageSrv";
  }

  static const char* value(const baxter_srv::ImageSrv&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<baxter_srv::ImageSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4d2f9eea61bb74d22309b1bc310a8635";
  }

  static const char* value(const baxter_srv::ImageSrvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<baxter_srv::ImageSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "baxter_srv/ImageSrv";
  }

  static const char* value(const baxter_srv::ImageSrvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<baxter_srv::ImageSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4d2f9eea61bb74d22309b1bc310a8635";
  }

  static const char* value(const baxter_srv::ImageSrvResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<baxter_srv::ImageSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "baxter_srv/ImageSrv";
  }

  static const char* value(const baxter_srv::ImageSrvResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // BAXTER_SRV_SERVICE_IMAGESRV_H
