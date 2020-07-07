#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_TutorialWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnShow
struct UHUD_TutorialWidget_C_OnShow_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      Title;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      TaskText;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UTexture2D**                                 Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TutorialWidget.HUD_TutorialWidget_C.Construct
struct UHUD_TutorialWidget_C_Construct_Params
{
};

// Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnHide
struct UHUD_TutorialWidget_C_OnHide_Params
{
	bool*                                              watched;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TutorialWidget.HUD_TutorialWidget_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_RemoveAnimationFinished__DelegateSignature
struct UHUD_TutorialWidget_C_BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_RemoveAnimationFinished__DelegateSignature_Params
{
};

// Function HUD_TutorialWidget.HUD_TutorialWidget_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_CompleteAnimationFinished__DelegateSignature
struct UHUD_TutorialWidget_C_BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_CompleteAnimationFinished__DelegateSignature_Params
{
};

// Function HUD_TutorialWidget.HUD_TutorialWidget_C.ContinueChange
struct UHUD_TutorialWidget_C_ContinueChange_Params
{
};

// Function HUD_TutorialWidget.HUD_TutorialWidget_C.ExecuteUbergraph_HUD_TutorialWidget
struct UHUD_TutorialWidget_C_ExecuteUbergraph_HUD_TutorialWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
