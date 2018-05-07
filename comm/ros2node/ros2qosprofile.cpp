#include "ros2qosprofile.h"
#include <common/logging.h>

using namespace roscommunication;
using namespace communication;

namespace
{
    static const rmw_qos_profile_t rmw_qos_profile_alarm =
    {
        RMW_QOS_POLICY_HISTORY_KEEP_ALL,
        0,
        RMW_QOS_POLICY_RELIABILITY_RELIABLE,
        RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL,
        false
    };

    static const rmw_qos_profile_t rmw_qos_profile_control =
    {
        RMW_QOS_POLICY_HISTORY_KEEP_LAST,
        50,
        RMW_QOS_POLICY_RELIABILITY_RELIABLE,
        RMW_QOS_POLICY_DURABILITY_VOLATILE,
        false
    };

    static const rmw_qos_profile_t rmw_qos_profile_sensor =
    {
        RMW_QOS_POLICY_HISTORY_KEEP_LAST,
        0,
        RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT,
        RMW_QOS_POLICY_DURABILITY_VOLATILE,
        false
    };
}

rmw_qos_profile_t Ros2QoSProfile::getProfile(QoSProfile p)
{
    switch (p)
    {
        case QoSProfileAlarm:
            return rmw_qos_profile_alarm;
        case QoSProfileSensor:
            return rmw_qos_profile_sensor;
        case QoSProfileControl:
            return rmw_qos_profile_control;
        default:
            debug(LOG_ERROR, "Ros2QoSProfile", "Profile unspecified for type, falling to default");
            return rmw_qos_profile_default;
    }
}

std::string Ros2QoSProfile::profileDescription(QoSProfile p)
{
    auto profile = Ros2QoSProfile::getProfile(p);
    std::string description;
    switch (profile.history)
    {
        case RMW_QOS_POLICY_HISTORY_KEEP_ALL:
            description.append("H: KEEP_ALL, ");
            break;
        case RMW_QOS_POLICY_HISTORY_KEEP_LAST:
            description.append("H: KEEP_LAST=" + std::to_string(profile.depth)+ ", ");
            break;
        case RMW_QOS_POLICY_HISTORY_SYSTEM_DEFAULT:
            description.append("H: DEFAULT, ");
            break;
    }
    switch (profile.reliability)
    {
        case RMW_QOS_POLICY_RELIABILITY_RELIABLE:
            description.append("R: RELIABLE, ");
            break;
        case RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT:
            description.append("R: BEST_EFFORT, ");
            break;
        case RMW_QOS_POLICY_RELIABILITY_SYSTEM_DEFAULT:
            description.append("R: DEFAULT, ");
            break;
    };
    switch (profile.durability)
    {
        case RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL:
            description.append("D: TRANSIENT");
            break;
        case RMW_QOS_POLICY_DURABILITY_VOLATILE:
            description.append("D: VOLATILE");
            break;
        case RMW_QOS_POLICY_DURABILITY_SYSTEM_DEFAULT:
            description.append("D: DEFAULT");
            break;
    };
    return description;
}

