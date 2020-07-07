#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.DoFactionToolTip
struct UITM_CommunityGoal_C_DoFactionToolTip_Params
{
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.DoToolTip
struct UITM_CommunityGoal_C_DoToolTip_Params
{
	class UWidget**                                    ToolTipTarget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.UpdateTitle
struct UITM_CommunityGoal_C_UpdateTitle_Params
{
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.UpdateIcon
struct UITM_CommunityGoal_C_UpdateIcon_Params
{
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.SetFaction
struct UITM_CommunityGoal_C_SetFaction_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.ResetAnim
struct UITM_CommunityGoal_C_ResetAnim_Params
{
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.Tick
struct UITM_CommunityGoal_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.SetCommunityGoal
struct UITM_CommunityGoal_C_SetCommunityGoal_Params
{
	struct FText*                                      Goal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float*                                             Bronze_Progress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Silver_Progress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Gold_Progress;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.PreConstruct
struct UITM_CommunityGoal_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.SetGoal
struct UITM_CommunityGoal_C_SetGoal_Params
{
	class FString*                                     GoalID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float*                                             GoalValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Members;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceRefresh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UITM_CommunityGoal_C_BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UITM_CommunityGoal_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.CheckFaction
struct UITM_CommunityGoal_C_CheckFaction_Params
{
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UITM_CommunityGoal_C_BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UITM_CommunityGoal_C_BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UITM_CommunityGoal_C_BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UITM_CommunityGoal_C_BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UITM_CommunityGoal_C_BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
struct UITM_CommunityGoal_C_BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UITM_CommunityGoal_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UITM_CommunityGoal_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.ExecuteUbergraph_ITM_CommunityGoal
struct UITM_CommunityGoal_C_ExecuteUbergraph_ITM_CommunityGoal_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.HoverEnded__DelegateSignature
struct UITM_CommunityGoal_C_HoverEnded__DelegateSignature_Params
{
};

// Function ITM_CommunityGoal.ITM_CommunityGoal_C.HoverStarted__DelegateSignature
struct UITM_CommunityGoal_C_HoverStarted__DelegateSignature_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommunityGoal**                             Goal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
