#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoalProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetInfoToCurrentFaction
struct UITM_CommunityGoalProgress_C_SetInfoToCurrentFaction_Params
{
};

// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetGoals
struct UITM_CommunityGoalProgress_C_SetGoals_Params
{
	TArray<class FString>                              Goals;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Values;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Members;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float*                                             Miners_Union_Tier;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceRefresh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TestCommunityGoal
struct UITM_CommunityGoalProgress_C_TestCommunityGoal_Params
{
};

// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetTime
struct UITM_CommunityGoalProgress_C_SetTime_Params
{
	float*                                             Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.Construct
struct UITM_CommunityGoalProgress_C_Construct_Params
{
};

// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.CHover
struct UITM_CommunityGoalProgress_C_CHover_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommunityGoal**                             Goal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F1Hover
struct UITM_CommunityGoalProgress_C_F1Hover_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommunityGoal**                             Goal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F2Hover
struct UITM_CommunityGoalProgress_C_F2Hover_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommunityGoal**                             Goal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.CHEnd
struct UITM_CommunityGoalProgress_C_CHEnd_Params
{
};

// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F1End
struct UITM_CommunityGoalProgress_C_F1End_Params
{
};

// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F2End
struct UITM_CommunityGoalProgress_C_F2End_Params
{
};

// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TotalHover
struct UITM_CommunityGoalProgress_C_TotalHover_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommunityGoal**                             Goal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TotalEnd
struct UITM_CommunityGoalProgress_C_TotalEnd_Params
{
};

// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.ExecuteUbergraph_ITM_CommunityGoalProgress
struct UITM_CommunityGoalProgress_C_ExecuteUbergraph_ITM_CommunityGoalProgress_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
