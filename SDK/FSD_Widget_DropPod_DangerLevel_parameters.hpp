#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Widget_DropPod_DangerLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.AdjustBar
struct UWidget_DropPod_DangerLevel_C_AdjustBar_Params
{
	float*                                             InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.SetGeneratedMission
struct UWidget_DropPod_DangerLevel_C_SetGeneratedMission_Params
{
	class UGeneratedMission**                          In_Mission;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.Construct
struct UWidget_DropPod_DangerLevel_C_Construct_Params
{
};

// Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.Tick
struct UWidget_DropPod_DangerLevel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.OnGeneratedMissionChanged
struct UWidget_DropPod_DangerLevel_C_OnGeneratedMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.ExecuteUbergraph_Widget_DropPod_DangerLevel
struct UWidget_DropPod_DangerLevel_C_ExecuteUbergraph_Widget_DropPod_DangerLevel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
