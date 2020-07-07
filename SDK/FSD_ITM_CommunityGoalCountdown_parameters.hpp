#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoalCountdown_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C.PreConstruct
struct UITM_CommunityGoalCountdown_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C.Tick
struct UITM_CommunityGoalCountdown_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C.SetTime
struct UITM_CommunityGoalCountdown_C_SetTime_Params
{
	float*                                             Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C.ExecuteUbergraph_ITM_CommunityGoalCountdown
struct UITM_CommunityGoalCountdown_C_ExecuteUbergraph_ITM_CommunityGoalCountdown_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
