#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Widget_DropPod_AltitudeMeter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.UpdateHeader
struct UWidget_DropPod_AltitudeMeter_C_UpdateHeader_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.UpdateDepthText
struct UWidget_DropPod_AltitudeMeter_C_UpdateDepthText_Params
{
};

// Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.SetProgress
struct UWidget_DropPod_AltitudeMeter_C_SetProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.Construct
struct UWidget_DropPod_AltitudeMeter_C_Construct_Params
{
};

// Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.OnGeneratedMissionChanged
struct UWidget_DropPod_AltitudeMeter_C_OnGeneratedMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.ExecuteUbergraph_Widget_DropPod_AltitudeMeter
struct UWidget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
