#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_BasicTutorialWindow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetText
struct UITM_BasicTutorialWindow_C_SetText_Params
{
	struct FText*                                      Header;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      MainText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TaskText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayRemove
struct UITM_BasicTutorialWindow_C_PlayRemove_Params
{
};

// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayShow
struct UITM_BasicTutorialWindow_C_PlayShow_Params
{
};

// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayComplete
struct UITM_BasicTutorialWindow_C_PlayComplete_Params
{
};

// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.CompleteAnimFinished
struct UITM_BasicTutorialWindow_C_CompleteAnimFinished_Params
{
};

// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetImage
struct UITM_BasicTutorialWindow_C_SetImage_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayTaskProgress
struct UITM_BasicTutorialWindow_C_PlayTaskProgress_Params
{
};

// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetTaskCounter
struct UITM_BasicTutorialWindow_C_SetTaskCounter_Params
{
	int*                                               Counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Denominator;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.ExecuteUbergraph_ITM_BasicTutorialWindow
struct UITM_BasicTutorialWindow_C_ExecuteUbergraph_ITM_BasicTutorialWindow_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.RemoveAnimationFinished__DelegateSignature
struct UITM_BasicTutorialWindow_C_RemoveAnimationFinished__DelegateSignature_Params
{
};

// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.CompleteAnimationFinished__DelegateSignature
struct UITM_BasicTutorialWindow_C_CompleteAnimationFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
