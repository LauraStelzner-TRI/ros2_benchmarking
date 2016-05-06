//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: RobotStatus_Dcps.h
//  Source: robot_information_msgs/msg/dds_opensplice/RobotStatus_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _ROBOTSTATUS_DCPS_H_
#define _ROBOTSTATUS_DCPS_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "dds_dcps.h"
#include "RobotStatus_.h"


namespace robot_information_msgs
{
   namespace msg
   {
      namespace dds_
      {

         class RobotStatus_TypeSupportInterface;

         typedef RobotStatus_TypeSupportInterface * RobotStatus_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < RobotStatus_TypeSupportInterface> RobotStatus_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < RobotStatus_TypeSupportInterface> RobotStatus_TypeSupportInterface_out;


         class RobotStatus_DataWriter;

         typedef RobotStatus_DataWriter * RobotStatus_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < RobotStatus_DataWriter> RobotStatus_DataWriter_var;
         typedef DDS_DCPSInterface_out < RobotStatus_DataWriter> RobotStatus_DataWriter_out;


         class RobotStatus_DataReader;

         typedef RobotStatus_DataReader * RobotStatus_DataReader_ptr;
         typedef DDS_DCPSInterface_var < RobotStatus_DataReader> RobotStatus_DataReader_var;
         typedef DDS_DCPSInterface_out < RobotStatus_DataReader> RobotStatus_DataReader_out;


         class RobotStatus_DataReaderView;

         typedef RobotStatus_DataReaderView * RobotStatus_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < RobotStatus_DataReaderView> RobotStatus_DataReaderView_var;
         typedef DDS_DCPSInterface_out < RobotStatus_DataReaderView> RobotStatus_DataReaderView_out;

         struct RobotStatus_Seq_uniq_ {};
         typedef DDS_DCPSUFLSeq < RobotStatus_, struct RobotStatus_Seq_uniq_> RobotStatus_Seq;
         typedef DDS_DCPSSequence_var < RobotStatus_Seq> RobotStatus_Seq_var;
         typedef DDS_DCPSSequence_out < RobotStatus_Seq> RobotStatus_Seq_out;
         class RobotStatus_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef RobotStatus_TypeSupportInterface_ptr _ptr_type;
            typedef RobotStatus_TypeSupportInterface_var _var_type;

            static RobotStatus_TypeSupportInterface_ptr _duplicate (RobotStatus_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static RobotStatus_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static RobotStatus_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static RobotStatus_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            RobotStatus_TypeSupportInterface_ptr _this () { return this; }


         protected:
            RobotStatus_TypeSupportInterface () {};
            ~RobotStatus_TypeSupportInterface () {};
         private:
            RobotStatus_TypeSupportInterface (const RobotStatus_TypeSupportInterface &);
            RobotStatus_TypeSupportInterface & operator = (const RobotStatus_TypeSupportInterface &);
         };

         class RobotStatus_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef RobotStatus_DataWriter_ptr _ptr_type;
            typedef RobotStatus_DataWriter_var _var_type;

            static RobotStatus_DataWriter_ptr _duplicate (RobotStatus_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static RobotStatus_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static RobotStatus_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static RobotStatus_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            RobotStatus_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const RobotStatus_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const RobotStatus_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const RobotStatus_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const RobotStatus_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const RobotStatus_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const RobotStatus_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const RobotStatus_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const RobotStatus_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const RobotStatus_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const RobotStatus_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (RobotStatus_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const RobotStatus_& instance_data) = 0;

         protected:
            RobotStatus_DataWriter () {};
            ~RobotStatus_DataWriter () {};
         private:
            RobotStatus_DataWriter (const RobotStatus_DataWriter &);
            RobotStatus_DataWriter & operator = (const RobotStatus_DataWriter &);
         };

         class RobotStatus_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef RobotStatus_DataReader_ptr _ptr_type;
            typedef RobotStatus_DataReader_var _var_type;

            static RobotStatus_DataReader_ptr _duplicate (RobotStatus_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static RobotStatus_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static RobotStatus_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static RobotStatus_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            RobotStatus_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (RobotStatus_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (RobotStatus_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (RobotStatus_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const RobotStatus_& instance) = 0;

         protected:
            RobotStatus_DataReader () {};
            ~RobotStatus_DataReader () {};
         private:
            RobotStatus_DataReader (const RobotStatus_DataReader &);
            RobotStatus_DataReader & operator = (const RobotStatus_DataReader &);
         };

         class RobotStatus_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef RobotStatus_DataReaderView_ptr _ptr_type;
            typedef RobotStatus_DataReaderView_var _var_type;

            static RobotStatus_DataReaderView_ptr _duplicate (RobotStatus_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static RobotStatus_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static RobotStatus_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static RobotStatus_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            RobotStatus_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (RobotStatus_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (RobotStatus_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (RobotStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (RobotStatus_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const RobotStatus_& instance) = 0;

         protected:
            RobotStatus_DataReaderView () {};
            ~RobotStatus_DataReaderView () {};
         private:
            RobotStatus_DataReaderView (const RobotStatus_DataReaderView &);
            RobotStatus_DataReaderView & operator = (const RobotStatus_DataReaderView &);
         };

      }
   }
}




#endif 
