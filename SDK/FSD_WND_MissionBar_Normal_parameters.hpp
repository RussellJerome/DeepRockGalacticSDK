#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_MissionBar_Normal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.SetDifficultyData
struct UWND_MissionBar_Normal_C_SetDifficultyData_Params
{
	class UDifficultySetting**                         Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.CampaignChecks
struct UWND_MissionBar_Normal_C_CampaignChecks_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CampaignMission;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AreRestrictionsMet;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.SetGeneratedMission
struct UWND_MissionBar_Normal_C_SetGeneratedMission_Params
{
	class UGeneratedMission**                          InMission;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.PreConstruct
struct UWND_MissionBar_Normal_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.Construct
struct UWND_MissionBar_Normal_C_Construct_Params
{
};

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.OnDifficultyChanged_Event_1
struct UWND_MissionBar_Normal_C_OnDifficultyChanged_Event_1_Params
{
	class UDifficultySetting**                         Setting;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.ExecuteUbergraph_WND_MissionBar_Normal
struct UWND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
