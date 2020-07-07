#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoalReward_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.TotalTiers
struct UITM_CommunityGoalReward_C_TotalTiers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetGoalResultTier
struct UITM_CommunityGoalReward_C_SetGoalResultTier_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommunityGoal**                             Goal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.BuildResources
struct UITM_CommunityGoalReward_C_BuildResources_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetGoalResult
struct UITM_CommunityGoalReward_C_SetGoalResult_Params
{
	float*                                             Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Members;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommunityGoal**                             Goal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.UpdateTitle
struct UITM_CommunityGoalReward_C_UpdateTitle_Params
{
};

// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.UpdateIcon
struct UITM_CommunityGoalReward_C_UpdateIcon_Params
{
};

// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetFaction
struct UITM_CommunityGoalReward_C_SetFaction_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.PreConstruct
struct UITM_CommunityGoalReward_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.ExecuteUbergraph_ITM_CommunityGoalReward
struct UITM_CommunityGoalReward_C_ExecuteUbergraph_ITM_CommunityGoalReward_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
