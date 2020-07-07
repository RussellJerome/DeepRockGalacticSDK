#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Widget_DropPod_Complexity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.AdjustBar
struct UWidget_DropPod_Complexity_C_AdjustBar_Params
{
	float*                                             InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.SetGeneratedMission
struct UWidget_DropPod_Complexity_C_SetGeneratedMission_Params
{
	class UGeneratedMission**                          In_Mission;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.Construct
struct UWidget_DropPod_Complexity_C_Construct_Params
{
};

// Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.Tick
struct UWidget_DropPod_Complexity_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.OnGeneratedMissionChanged
struct UWidget_DropPod_Complexity_C_OnGeneratedMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.ExecuteUbergraph_Widget_DropPod_Complexity
struct UWidget_DropPod_Complexity_C_ExecuteUbergraph_Widget_DropPod_Complexity_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
