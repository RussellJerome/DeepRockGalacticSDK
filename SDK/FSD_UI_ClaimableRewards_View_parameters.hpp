#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_ClaimableRewards_View_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.GetLine
struct UUI_ClaimableRewards_View_C_GetLine_Params
{
	class UHorizontalBox*                              EntryBox;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.SetupView
struct UUI_ClaimableRewards_View_C_SetupView_Params
{
	struct FClaimableRewardView*                       InViewData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.TryFinish
struct UUI_ClaimableRewards_View_C_TryFinish_Params
{
};

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.StopAudio
struct UUI_ClaimableRewards_View_C_StopAudio_Params
{
};

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnAudioFinished_Event
struct UUI_ClaimableRewards_View_C_OnAudioFinished_Event_Params
{
};

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.Start Mission Control Speak
struct UUI_ClaimableRewards_View_C_Start_Mission_Control_Speak_Params
{
};

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ShowBlur
struct UUI_ClaimableRewards_View_C_ShowBlur_Params
{
};

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ShowMouseCursor
struct UUI_ClaimableRewards_View_C_ShowMouseCursor_Params
{
};

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.Move In Rewards
struct UUI_ClaimableRewards_View_C_Move_In_Rewards_Params
{
};

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardClaimed
struct UUI_ClaimableRewards_View_C_OnRewardClaimed_Params
{
	class UClaimableRewardEntryWidget**                InEntryWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveEndFlow
struct UUI_ClaimableRewards_View_C_ReceiveEndFlow_Params
{
};

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveDataChanged
struct UUI_ClaimableRewards_View_C_ReceiveDataChanged_Params
{
};

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveBeginFlow
struct UUI_ClaimableRewards_View_C_ReceiveBeginFlow_Params
{
};

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ExecuteUbergraph_UI_ClaimableRewards_View
struct UUI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardsAndMissionControlFinished__DelegateSignature
struct UUI_ClaimableRewards_View_C_OnRewardsAndMissionControlFinished__DelegateSignature_Params
{
};

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardsClaimed__DelegateSignature
struct UUI_ClaimableRewards_View_C_OnRewardsClaimed__DelegateSignature_Params
{
};

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnMissionControlFinished__DelegateSignature
struct UUI_ClaimableRewards_View_C_OnMissionControlFinished__DelegateSignature_Params
{
};

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnMissionControlStarted__DelegateSignature
struct UUI_ClaimableRewards_View_C_OnMissionControlStarted__DelegateSignature_Params
{
	class UAudioComponent**                            MissionControlAudio;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
