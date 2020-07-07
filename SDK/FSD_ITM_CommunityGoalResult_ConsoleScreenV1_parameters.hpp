#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoalResult_ConsoleScreenV1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.UpdateTitle
struct UITM_CommunityGoalResult_ConsoleScreenV1_C_UpdateTitle_Params
{
};

// Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.UpdateIcon
struct UITM_CommunityGoalResult_ConsoleScreenV1_C_UpdateIcon_Params
{
};

// Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.SetFaction
struct UITM_CommunityGoalResult_ConsoleScreenV1_C_SetFaction_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.PreConstruct
struct UITM_CommunityGoalResult_ConsoleScreenV1_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.SetResult
struct UITM_CommunityGoalResult_ConsoleScreenV1_C_SetResult_Params
{
	int*                                               Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.ExecuteUbergraph_ITM_CommunityGoalResult_ConsoleScreenV1
struct UITM_CommunityGoalResult_ConsoleScreenV1_C_ExecuteUbergraph_ITM_CommunityGoalResult_ConsoleScreenV1_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
