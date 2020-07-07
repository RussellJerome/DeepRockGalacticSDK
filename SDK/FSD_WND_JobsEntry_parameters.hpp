#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_JobsEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_JobsEntry.WND_JobsEntry_C.CreateValidSeedRequirement
struct UWND_JobsEntry_C_CreateValidSeedRequirement_Params
{
	class UValidWeeklySeedCampaignRequirement**        Requirement;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCampaign**                                  Campaign;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_JobsEntry.WND_JobsEntry_C.CreateCampaignCompletedRequirement
struct UWND_JobsEntry_C_CreateCampaignCompletedRequirement_Params
{
	class UCamapaignCompletedRequirement**             Requirement;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCampaign**                                  Campaign;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_JobsEntry.WND_JobsEntry_C.CreateAnyRequirement
struct UWND_JobsEntry_C_CreateAnyRequirement_Params
{
	class UAnyRetiredCampaignRequirement**             Requirement;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCampaign**                                  Campaign;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_JobsEntry.WND_JobsEntry_C.CanStartCampaign
struct UWND_JobsEntry_C_CanStartCampaign_Params
{
	class UCampaign**                                  InCampaign;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WND_JobsEntry.WND_JobsEntry_C.CreateWeeklyRequirement
struct UWND_JobsEntry_C_CreateWeeklyRequirement_Params
{
	class UWeeklyTimerCampaignRequirement**            Requirement;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCampaign**                                  Campaign;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_JobsEntry.WND_JobsEntry_C.CreatePlayerRankBox
struct UWND_JobsEntry_C_CreatePlayerRankBox_Params
{
	int*                                               RequiredRank;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_JobsEntry.WND_JobsEntry_C.VisibleAndEnabled
struct UWND_JobsEntry_C_VisibleAndEnabled_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WND_JobsEntry.WND_JobsEntry_C.CreateLevelRequirementBox
struct UWND_JobsEntry_C_CreateLevelRequirementBox_Params
{
	int*                                               RequiredLevel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerCharacterID**                         ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_JobsEntry.WND_JobsEntry_C.HandleAbortMissionButton
struct UWND_JobsEntry_C_HandleAbortMissionButton_Params
{
};

// Function WND_JobsEntry.WND_JobsEntry_C.SetInfo
struct UWND_JobsEntry_C_SetInfo_Params
{
};

// Function WND_JobsEntry.WND_JobsEntry_C.IsActiveCampaign
struct UWND_JobsEntry_C_IsActiveCampaign_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WND_JobsEntry.WND_JobsEntry_C.CreateRequirements
struct UWND_JobsEntry_C_CreateRequirements_Params
{
};

// Function WND_JobsEntry.WND_JobsEntry_C.SetActiveLook
struct UWND_JobsEntry_C_SetActiveLook_Params
{
};

// Function WND_JobsEntry.WND_JobsEntry_C.SetInactiveLook
struct UWND_JobsEntry_C_SetInactiveLook_Params
{
};

// Function WND_JobsEntry.WND_JobsEntry_C.PreConstruct
struct UWND_JobsEntry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWND_JobsEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWND_JobsEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWND_JobsEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__BTN_Accept_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UWND_JobsEntry_C_BndEvt__BTN_Accept_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__BTN_Abort_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UWND_JobsEntry_C_BndEvt__BTN_Abort_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function WND_JobsEntry.WND_JobsEntry_C.Fold
struct UWND_JobsEntry_C_Fold_Params
{
};

// Function WND_JobsEntry.WND_JobsEntry_C.Answer
struct UWND_JobsEntry_C_Answer_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_JobsEntry.WND_JobsEntry_C.SkipAnswer
struct UWND_JobsEntry_C_SkipAnswer_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_JobsEntry.WND_JobsEntry_C.SetData
struct UWND_JobsEntry_C_SetData_Params
{
	class UCampaign**                                  Campaign;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_JobsEntry.WND_JobsEntry_C.Refresh
struct UWND_JobsEntry_C_Refresh_Params
{
};

// Function WND_JobsEntry.WND_JobsEntry_C.SetFolded
struct UWND_JobsEntry_C_SetFolded_Params
{
	bool*                                              IsFolded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_JobsEntry.WND_JobsEntry_C.Unfold
struct UWND_JobsEntry_C_Unfold_Params
{
};

// Function WND_JobsEntry.WND_JobsEntry_C.ExecuteUbergraph_WND_JobsEntry
struct UWND_JobsEntry_C_ExecuteUbergraph_WND_JobsEntry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_JobsEntry.WND_JobsEntry_C.OnBeginUnfolding__DelegateSignature
struct UWND_JobsEntry_C_OnBeginUnfolding__DelegateSignature_Params
{
	class UWND_JobsEntry_C**                           entry;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
