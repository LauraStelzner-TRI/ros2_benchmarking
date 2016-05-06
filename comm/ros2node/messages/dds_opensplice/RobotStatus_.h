//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: RobotStatus_.h
//  Source: robot_information_msgs/msg/dds_opensplice/RobotStatus_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _ROBOTSTATUS__H_
#define _ROBOTSTATUS__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"


namespace robot_information_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct RobotStatus_;

         struct RobotStatus_
         {
               DDS::Octet battery_;
               DDS::Octet turtle_factor_;
               DDS::Boolean battery_charging_;
               DDS::Boolean drive_reversed_;
               DDS::Boolean emergency_active_;
               DDS::Boolean brake_active_;
         };

         typedef DDS_DCPSStruct_var < RobotStatus_> RobotStatus__var;
         typedef RobotStatus_&RobotStatus__out;
      }
   }
}




#endif 
