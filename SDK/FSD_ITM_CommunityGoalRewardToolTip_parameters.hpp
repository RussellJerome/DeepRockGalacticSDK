#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoalRewardToolTip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.SetGoal
struct UITM_CommunityGoalRewardToolTip_C_SetGoal_Params
{
	class UCommunityGoal**                             Goal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.TotalTiers
struct UITM_CommunityGoalRewardToolTip_C_TotalTiers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.SetGoalResultTier
struct UITM_CommunityGoalRewardToolTip_C_SetGoalResultTier_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommunityGoal**                             Goal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.BuildResources
struct UITM_CommunityGoalRewardToolTip_C_BuildResources_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.SetFaction
struct UITM_CommunityGoalRewardToolTip_C_SetFaction_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.PreConstruct
struct UITM_CommunityGoalRewardToolTip_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.ExecuteUbergraph_ITM_CommunityGoalRewardToolTip
struct UITM_CommunityGoalRewardToolTip_C_ExecuteUbergraph_ITM_CommunityGoalRewardToolTip_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
