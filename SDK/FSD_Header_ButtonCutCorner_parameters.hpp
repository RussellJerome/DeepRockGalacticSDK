#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Header_ButtonCutCorner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.IsPressed
struct UHeader_ButtonCutCorner_C_IsPressed_Params
{
	bool                                               IsPressed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.SetButtonText
struct UHeader_ButtonCutCorner_C_SetButtonText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.SetFontSize
struct UHeader_ButtonCutCorner_C_SetFontSize_Params
{
	int*                                               FontSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.PreConstruct
struct UHeader_ButtonCutCorner_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UHeader_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UHeader_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UHeader_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UHeader_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
struct UHeader_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.Toggle
struct UHeader_ButtonCutCorner_C_Toggle_Params
{
	bool*                                              IsToggleOn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.Update Look
struct UHeader_ButtonCutCorner_C_Update_Look_Params
{
};

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.Click
struct UHeader_ButtonCutCorner_C_Click_Params
{
};

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.ExecuteUbergraph_Header_ButtonCutCorner
struct UHeader_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.OnReleased__DelegateSignature
struct UHeader_ButtonCutCorner_C_OnReleased__DelegateSignature_Params
{
};

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.OnPressed__DelegateSignature
struct UHeader_ButtonCutCorner_C_OnPressed__DelegateSignature_Params
{
};

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.OnClicked__DelegateSignature
struct UHeader_ButtonCutCorner_C_OnClicked__DelegateSignature_Params
{
	class UHeader_ButtonCutCorner_C**                  Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
