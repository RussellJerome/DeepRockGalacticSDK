#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_TrialExpired_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_TrialExpired.UI_TrialExpired_C.OnKeyUp
struct UUI_TrialExpired_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_TrialExpired.UI_TrialExpired_C.FadeIt
struct UUI_TrialExpired_C_FadeIt_Params
{
	bool*                                              FadeIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TrialExpired.UI_TrialExpired_C.PreConstruct
struct UUI_TrialExpired_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TrialExpired.UI_TrialExpired_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UUI_TrialExpired_C_BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function UI_TrialExpired.UI_TrialExpired_C.Close
struct UUI_TrialExpired_C_Close_Params
{
};

// Function UI_TrialExpired.UI_TrialExpired_C.ExecuteUbergraph_UI_TrialExpired
struct UUI_TrialExpired_C_ExecuteUbergraph_UI_TrialExpired_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
