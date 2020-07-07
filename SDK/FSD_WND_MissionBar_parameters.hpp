#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_MissionBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_MissionBar.WND_MissionBar_C.SetMissionType
struct UWND_MissionBar_C_SetMissionType_Params
{
	EMissionStructure*                                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MissionBar.WND_MissionBar_C.SetGeneratedMission
struct UWND_MissionBar_C_SetGeneratedMission_Params
{
	class UGeneratedMission**                          InMission;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MissionBar.WND_MissionBar_C.OnGeneratedMissionChanged
struct UWND_MissionBar_C_OnGeneratedMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MissionBar.WND_MissionBar_C.Construct
struct UWND_MissionBar_C_Construct_Params
{
};

// Function WND_MissionBar.WND_MissionBar_C.PreConstruct
struct UWND_MissionBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MissionBar.WND_MissionBar_C.ExecuteUbergraph_WND_MissionBar
struct UWND_MissionBar_C_ExecuteUbergraph_WND_MissionBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
