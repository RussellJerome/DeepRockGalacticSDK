#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoalInformation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.DoFactionToolTip
struct UITM_CommunityGoalInformation_C_DoFactionToolTip_Params
{
};

// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetResourceBox
struct UITM_CommunityGoalInformation_C_SetResourceBox_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.UpdateIcon
struct UITM_CommunityGoalInformation_C_UpdateIcon_Params
{
};

// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetFaction
struct UITM_CommunityGoalInformation_C_SetFaction_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.ResetAnim
struct UITM_CommunityGoalInformation_C_ResetAnim_Params
{
};

// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.PreConstruct
struct UITM_CommunityGoalInformation_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetGoal
struct UITM_CommunityGoalInformation_C_SetGoal_Params
{
	class UCommunityGoal**                             Goal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.CheckFaction
struct UITM_CommunityGoalInformation_C_CheckFaction_Params
{
};

// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetFactionAndGoal
struct UITM_CommunityGoalInformation_C_SetFactionAndGoal_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommunityGoal**                             Goal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UITM_CommunityGoalInformation_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UITM_CommunityGoalInformation_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.ExecuteUbergraph_ITM_CommunityGoalInformation
struct UITM_CommunityGoalInformation_C_ExecuteUbergraph_ITM_CommunityGoalInformation_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
