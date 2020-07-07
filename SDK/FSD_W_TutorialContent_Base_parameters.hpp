#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_W_TutorialContent_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_TutorialContent_Base.W_TutorialContent_Base_C.CompleteWithAnim
struct UW_TutorialContent_Base_C_CompleteWithAnim_Params
{
};

// Function W_TutorialContent_Base.W_TutorialContent_Base_C.OnShown
struct UW_TutorialContent_Base_C_OnShown_Params
{
};

// Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetText
struct UW_TutorialContent_Base_C_SetText_Params
{
	struct FText*                                      TaskHeader;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TaskText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      CheckBoxText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetImage
struct UW_TutorialContent_Base_C_SetImage_Params
{
	class UTexture2D**                                 Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_TutorialContent_Base.W_TutorialContent_Base_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_CompleteAnimationFinished__DelegateSignature
struct UW_TutorialContent_Base_C_BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_CompleteAnimationFinished__DelegateSignature_Params
{
};

// Function W_TutorialContent_Base.W_TutorialContent_Base_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_RemoveAnimationFinished__DelegateSignature
struct UW_TutorialContent_Base_C_BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_RemoveAnimationFinished__DelegateSignature_Params
{
};

// Function W_TutorialContent_Base.W_TutorialContent_Base_C.PlayTaskProgress
struct UW_TutorialContent_Base_C_PlayTaskProgress_Params
{
};

// Function W_TutorialContent_Base.W_TutorialContent_Base_C.OnRemoveWidget
struct UW_TutorialContent_Base_C_OnRemoveWidget_Params
{
};

// Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetTaskCounter
struct UW_TutorialContent_Base_C_SetTaskCounter_Params
{
	int*                                               Counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Denominator;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_TutorialContent_Base.W_TutorialContent_Base_C.ExecuteUbergraph_W_TutorialContent_Base
struct UW_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
