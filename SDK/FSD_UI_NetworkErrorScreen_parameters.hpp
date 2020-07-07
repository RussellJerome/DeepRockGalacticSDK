#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_NetworkErrorScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.OnKeyUp
struct UUI_NetworkErrorScreen_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.FadeIt
struct UUI_NetworkErrorScreen_C_FadeIt_Params
{
	bool*                                              FadeIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.PreConstruct
struct UUI_NetworkErrorScreen_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UUI_NetworkErrorScreen_C_BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.Close
struct UUI_NetworkErrorScreen_C_Close_Params
{
};

// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.ExecuteUbergraph_UI_NetworkErrorScreen
struct UUI_NetworkErrorScreen_C_ExecuteUbergraph_UI_NetworkErrorScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
