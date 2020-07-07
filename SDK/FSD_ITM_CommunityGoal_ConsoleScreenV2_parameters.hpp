#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoal_ConsoleScreenV2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.UpdateTitle
struct UITM_CommunityGoal_ConsoleScreenV2_C_UpdateTitle_Params
{
};

// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.UpdateIcon
struct UITM_CommunityGoal_ConsoleScreenV2_C_UpdateIcon_Params
{
};

// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.SetFaction
struct UITM_CommunityGoal_ConsoleScreenV2_C_SetFaction_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.ResetAnim
struct UITM_CommunityGoal_ConsoleScreenV2_C_ResetAnim_Params
{
};

// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.SetCommunityGoal
struct UITM_CommunityGoal_ConsoleScreenV2_C_SetCommunityGoal_Params
{
	struct FText*                                      Goal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float*                                             Bronze_Progress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Silver_Progress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Gold_Progress;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.Tick
struct UITM_CommunityGoal_ConsoleScreenV2_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.PreConstruct
struct UITM_CommunityGoal_ConsoleScreenV2_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.SetGoal
struct UITM_CommunityGoal_ConsoleScreenV2_C_SetGoal_Params
{
	class FString*                                     GoalID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float*                                             GoalValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Members;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UITM_CommunityGoal_ConsoleScreenV2_C_BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UITM_CommunityGoal_ConsoleScreenV2_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.CheckFaction
struct UITM_CommunityGoal_ConsoleScreenV2_C_CheckFaction_Params
{
};

// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.ExecuteUbergraph_ITM_CommunityGoal_ConsoleScreenV2
struct UITM_CommunityGoal_ConsoleScreenV2_C_ExecuteUbergraph_ITM_CommunityGoal_ConsoleScreenV2_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.HoverEnded__DelegateSignature
struct UITM_CommunityGoal_ConsoleScreenV2_C_HoverEnded__DelegateSignature_Params
{
};

// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.HoverStarted__DelegateSignature
struct UITM_CommunityGoal_ConsoleScreenV2_C_HoverStarted__DelegateSignature_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommunityGoal**                             Goal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
