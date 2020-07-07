#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_ButtonCutCorner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.IsPressed
struct UBasic_ButtonCutCorner_C_IsPressed_Params
{
	bool                                               IsPressed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.SetButtonText
struct UBasic_ButtonCutCorner_C_SetButtonText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.SetFontSize
struct UBasic_ButtonCutCorner_C_SetFontSize_Params
{
	int*                                               FontSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.PreConstruct
struct UBasic_ButtonCutCorner_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBasic_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UBasic_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UBasic_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UBasic_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
struct UBasic_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.Update Look
struct UBasic_ButtonCutCorner_C_Update_Look_Params
{
};

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.Click
struct UBasic_ButtonCutCorner_C_Click_Params
{
};

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.Toggle
struct UBasic_ButtonCutCorner_C_Toggle_Params
{
	bool*                                              IsToggleOn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.ExecuteUbergraph_Basic_ButtonCutCorner
struct UBasic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.OnReleased__DelegateSignature
struct UBasic_ButtonCutCorner_C_OnReleased__DelegateSignature_Params
{
};

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.OnPressed__DelegateSignature
struct UBasic_ButtonCutCorner_C_OnPressed__DelegateSignature_Params
{
};

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.OnClicked__DelegateSignature
struct UBasic_ButtonCutCorner_C_OnClicked__DelegateSignature_Params
{
	class UBasic_ButtonCutCorner_C**                   Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
