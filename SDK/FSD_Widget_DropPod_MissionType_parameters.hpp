#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Widget_DropPod_MissionType_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.SetGeneratedMission
struct UWidget_DropPod_MissionType_C_SetGeneratedMission_Params
{
	class UGeneratedMission**                          In_Mission;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.Construct
struct UWidget_DropPod_MissionType_C_Construct_Params
{
};

// Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.OnGeneratedMissionChanged
struct UWidget_DropPod_MissionType_C_OnGeneratedMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.OnDifficultyChanged_Event_1
struct UWidget_DropPod_MissionType_C_OnDifficultyChanged_Event_1_Params
{
	class UDifficultySetting**                         Setting;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.ExecuteUbergraph_Widget_DropPod_MissionType
struct UWidget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
