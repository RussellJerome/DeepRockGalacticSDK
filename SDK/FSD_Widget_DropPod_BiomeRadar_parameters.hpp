#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Widget_DropPod_BiomeRadar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.SetGeneratedMission
struct UWidget_DropPod_BiomeRadar_C_SetGeneratedMission_Params
{
	class UGeneratedMission**                          In_Mission;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.Construct
struct UWidget_DropPod_BiomeRadar_C_Construct_Params
{
};

// Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.OnGeneratedMissionChanged
struct UWidget_DropPod_BiomeRadar_C_OnGeneratedMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.ExecuteUbergraph_Widget_DropPod_BiomeRadar
struct UWidget_DropPod_BiomeRadar_C_ExecuteUbergraph_Widget_DropPod_BiomeRadar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
