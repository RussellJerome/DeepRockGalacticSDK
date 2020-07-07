#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UnlockedCelebration_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.OnKeyUp
struct UITM_UnlockedCelebration_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.Construct
struct UITM_UnlockedCelebration_C_Construct_Params
{
};

// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UITM_UnlockedCelebration_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ClickContinue
struct UITM_UnlockedCelebration_C_ClickContinue_Params
{
};

// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ShowRewards
struct UITM_UnlockedCelebration_C_ShowRewards_Params
{
	struct FMasteryItem*                               Rewards;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ExecuteUbergraph_ITM_UnlockedCelebration
struct UITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.OnFinished__DelegateSignature
struct UITM_UnlockedCelebration_C_OnFinished__DelegateSignature_Params
{
	TArray<class UUnlockReward*>                       Rewards;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
