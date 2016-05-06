//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: RobotControl_.h
//  Source: robot_information_msgs/msg/dds_opensplice/RobotControl_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _ROBOTCONTROL__H_
#define _ROBOTCONTROL__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"


namespace robot_information_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct RobotControl_;

         struct RobotControl_
         {
               DDS::Octet turtle_;
               DDS::Boolean drive_reversed_;
               DDS::Boolean emergency_active_;
         };

         typedef DDS_DCPSStruct_var < RobotControl_> RobotControl__var;
         typedef RobotControl_&RobotControl__out;
      }
   }
}




#endif 