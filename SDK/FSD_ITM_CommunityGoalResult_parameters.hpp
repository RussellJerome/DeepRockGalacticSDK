#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoalResult_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.DoFactionToolTip
struct UITM_CommunityGoalResult_C_DoFactionToolTip_Params
{
};

// Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.UpdateTitle
struct UITM_CommunityGoalResult_C_UpdateTitle_Params
{
};

// Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.UpdateIcon
struct UITM_CommunityGoalResult_C_UpdateIcon_Params
{
};

// Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.SetFaction
struct UITM_CommunityGoalResult_C_SetFaction_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.PreConstruct
struct UITM_CommunityGoalResult_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.SetResult
struct UITM_CommunityGoalResult_C_SetResult_Params
{
	int*                                               Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      GoalName;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.CheckFaction
struct UITM_CommunityGoalResult_C_CheckFaction_Params
{
};

// Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UITM_CommunityGoalResult_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UITM_CommunityGoalResult_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.ExecuteUbergraph_ITM_CommunityGoalResult
struct UITM_CommunityGoalResult_C_ExecuteUbergraph_ITM_CommunityGoalResult_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
