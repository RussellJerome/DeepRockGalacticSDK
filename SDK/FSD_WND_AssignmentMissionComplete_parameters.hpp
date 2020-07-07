#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_AssignmentMissionComplete_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CheckMinersManualNotifications
struct UWND_AssignmentMissionComplete_C_CheckMinersManualNotifications_Params
{
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.UpdateGoogleAnalytics
struct UWND_AssignmentMissionComplete_C_UpdateGoogleAnalytics_Params
{
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.UpdateCampaignProgressBar
struct UWND_AssignmentMissionComplete_C_UpdateCampaignProgressBar_Params
{
	bool*                                              ShowLastMission;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.IsWindowOpen
struct UWND_AssignmentMissionComplete_C_IsWindowOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnKeyUp
struct UWND_AssignmentMissionComplete_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.SetFrameColor
struct UWND_AssignmentMissionComplete_C_SetFrameColor_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.GetMissionCompleteShout
struct UWND_AssignmentMissionComplete_C_GetMissionCompleteShout_Params
{
	class UDialogDataAsset*                            MissionCompleteShout;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CreateRewardWidget
struct UWND_AssignmentMissionComplete_C_CreateRewardWidget_Params
{
	class UReward**                                    Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class URewardWidget*                               Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Add Reward List
struct UWND_AssignmentMissionComplete_C_Add_Reward_List_Params
{
	TArray<class UReward*>*                            List;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Add Reward
struct UWND_AssignmentMissionComplete_C_Add_Reward_Params
{
	class UReward**                                    Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.PreConstruct
struct UWND_AssignmentMissionComplete_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWND_AssignmentMissionComplete_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnShown
struct UWND_AssignmentMissionComplete_C_OnShown_Params
{
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnClosed
struct UWND_AssignmentMissionComplete_C_OnClosed_Params
{
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.SetMissionControlPaused
struct UWND_AssignmentMissionComplete_C_SetMissionControlPaused_Params
{
	bool*                                              IsPaused;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Continue
struct UWND_AssignmentMissionComplete_C_Continue_Params
{
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CursorInputHack
struct UWND_AssignmentMissionComplete_C_CursorInputHack_Params
{
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Init Window
struct UWND_AssignmentMissionComplete_C_Init_Window_Params
{
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Start Mission Control Speak
struct UWND_AssignmentMissionComplete_C_Start_Mission_Control_Speak_Params
{
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnAppearFinished
struct UWND_AssignmentMissionComplete_C_OnAppearFinished_Params
{
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.On Mission Control Finished
struct UWND_AssignmentMissionComplete_C_On_Mission_Control_Finished_Params
{
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Count Down
struct UWND_AssignmentMissionComplete_C_Count_Down_Params
{
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Reward Claimed
struct UWND_AssignmentMissionComplete_C_Reward_Claimed_Params
{
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnNewTopWindow
struct UWND_AssignmentMissionComplete_C_OnNewTopWindow_Params
{
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnProgressBarMoveFinished
struct UWND_AssignmentMissionComplete_C_OnProgressBarMoveFinished_Params
{
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnUpdateProgressBarFinished
struct UWND_AssignmentMissionComplete_C_OnUpdateProgressBarFinished_Params
{
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnProgressBarUpdateStep
struct UWND_AssignmentMissionComplete_C_OnProgressBarUpdateStep_Params
{
};

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.ExecuteUbergraph_WND_AssignmentMissionComplete
struct UWND_AssignmentMissionComplete_C_ExecuteUbergraph_WND_AssignmentMissionComplete_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
