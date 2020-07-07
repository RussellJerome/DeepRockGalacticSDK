#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Widget_DropPod_SeatMonitor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.Construct
struct UWidget_DropPod_SeatMonitor_C_Construct_Params
{
};

// Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.OnGeneratedMissionChanged
struct UWidget_DropPod_SeatMonitor_C_OnGeneratedMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.ExecuteUbergraph_Widget_DropPod_SeatMonitor
struct UWidget_DropPod_SeatMonitor_C_ExecuteUbergraph_Widget_DropPod_SeatMonitor_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
