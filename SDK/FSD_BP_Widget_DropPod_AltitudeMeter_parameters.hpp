#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Widget_DropPod_AltitudeMeter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.TriggerCountdown
struct ABP_Widget_DropPod_AltitudeMeter_C_TriggerCountdown_Params
{
};

// Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ReceiveTick
struct ABP_Widget_DropPod_AltitudeMeter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ReceiveBeginPlay
struct ABP_Widget_DropPod_AltitudeMeter_C_ReceiveBeginPlay_Params
{
};

// Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.OnMissionChanged
struct ABP_Widget_DropPod_AltitudeMeter_C_OnMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ExecuteUbergraph_BP_Widget_DropPod_AltitudeMeter
struct ABP_Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_BP_Widget_DropPod_AltitudeMeter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
