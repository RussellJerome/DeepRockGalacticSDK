#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_CoreInfuser_Rewards_Animator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C.ShowAsReward
struct UUI_CoreInfuser_Rewards_Animator_C_ShowAsReward_Params
{
	bool*                                              IsReward;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C.GetIsOpen
struct UUI_CoreInfuser_Rewards_Animator_C_GetIsOpen_Params
{
	bool                                               IsOpen;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C.SetOpen
struct UUI_CoreInfuser_Rewards_Animator_C_SetOpen_Params
{
	bool*                                              InIsOpen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C.OnOpenChanged__DelegateSignature
struct UUI_CoreInfuser_Rewards_Animator_C_OnOpenChanged__DelegateSignature_Params
{
	bool*                                              Open;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
