#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoalRecruitment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.SetResult
struct UITM_CommunityGoalRecruitment_C_SetResult_Params
{
	class UITM_CommunityGoalResult_C**                 ResultUI;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               FactionID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.BuildRecruitmentUI
struct UITM_CommunityGoalRecruitment_C_BuildRecruitmentUI_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.SetTime
struct UITM_CommunityGoalRecruitment_C_SetTime_Params
{
	float*                                             Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.Construct
struct UITM_CommunityGoalRecruitment_C_Construct_Params
{
};

// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.ResetFactionCheckState
struct UITM_CommunityGoalRecruitment_C_ResetFactionCheckState_Params
{
};

// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.ExecuteUbergraph_ITM_CommunityGoalRecruitment
struct UITM_CommunityGoalRecruitment_C_ExecuteUbergraph_ITM_CommunityGoalRecruitment_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.CheckState__DelegateSignature
struct UITM_CommunityGoalRecruitment_C_CheckState__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
