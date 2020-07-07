#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_ClaimableRewards_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_ClaimableRewards.WND_ClaimableRewards_C.GetData
struct UWND_ClaimableRewards_C_GetData_Params
{
	struct FClaimableRewardView                        OutData;                                                  // (Parm, OutParm)
};

// Function WND_ClaimableRewards.WND_ClaimableRewards_C.OnKeyUp
struct UWND_ClaimableRewards_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WND_ClaimableRewards.WND_ClaimableRewards_C.OnShown
struct UWND_ClaimableRewards_C_OnShown_Params
{
};

// Function WND_ClaimableRewards.WND_ClaimableRewards_C.BndEvt__RewardView_K2Node_ComponentBoundEvent_1_OnRewardsClaimed__DelegateSignature
struct UWND_ClaimableRewards_C_BndEvt__RewardView_K2Node_ComponentBoundEvent_1_OnRewardsClaimed__DelegateSignature_Params
{
};

// Function WND_ClaimableRewards.WND_ClaimableRewards_C.DoClose
struct UWND_ClaimableRewards_C_DoClose_Params
{
};

// Function WND_ClaimableRewards.WND_ClaimableRewards_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWND_ClaimableRewards_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WND_ClaimableRewards.WND_ClaimableRewards_C.PreConstruct
struct UWND_ClaimableRewards_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_ClaimableRewards.WND_ClaimableRewards_C.ExecuteUbergraph_WND_ClaimableRewards
struct UWND_ClaimableRewards_C_ExecuteUbergraph_WND_ClaimableRewards_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
