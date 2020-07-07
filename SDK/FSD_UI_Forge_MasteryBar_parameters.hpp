#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Forge_MasteryBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.Get_MasteryBarBox_ToolTipWidget_1
struct UUI_Forge_MasteryBar_C_Get_MasteryBarBox_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.StartCounting
struct UUI_Forge_MasteryBar_C_StartCounting_Params
{
	int*                                               InStartLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InStartXP;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetLerpProgress
struct UUI_Forge_MasteryBar_C_SetLerpProgress_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetFromSaveGame
struct UUI_Forge_MasteryBar_C_SetFromSaveGame_Params
{
	bool*                                              animate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.PreConstruct
struct UUI_Forge_MasteryBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.Construct
struct UUI_Forge_MasteryBar_C_Construct_Params
{
};

// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.PlayRewardAnim
struct UUI_Forge_MasteryBar_C_PlayRewardAnim_Params
{
};

// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.RewardPopUpStarted
struct UUI_Forge_MasteryBar_C_RewardPopUpStarted_Params
{
};

// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.FinishedCounting
struct UUI_Forge_MasteryBar_C_FinishedCounting_Params
{
};

// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.ResetReward
struct UUI_Forge_MasteryBar_C_ResetReward_Params
{
};

// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.ExecuteUbergraph_UI_Forge_MasteryBar
struct UUI_Forge_MasteryBar_C_ExecuteUbergraph_UI_Forge_MasteryBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.OnCountingFinished__DelegateSignature
struct UUI_Forge_MasteryBar_C_OnCountingFinished__DelegateSignature_Params
{
	unsigned char*                                     Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
