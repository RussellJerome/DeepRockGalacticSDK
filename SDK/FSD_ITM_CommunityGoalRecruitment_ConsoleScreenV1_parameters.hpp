#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoalRecruitment_ConsoleScreenV1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.SetResultFactionID
struct UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_SetResultFactionID_Params
{
	class UITM_CommunityGoalResult_ConsoleScreenV1_C** ResultUI;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               FactionID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.BuildRecruitmentUI
struct UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_BuildRecruitmentUI_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.Construct
struct UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_Construct_Params
{
};

// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.ResetFactionCheckState
struct UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_ResetFactionCheckState_Params
{
};

// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1
struct UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.CheckState__DelegateSignature
struct UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_CheckState__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
