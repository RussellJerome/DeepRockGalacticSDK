#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_ButtonScalable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.IsPressed
struct UBasic_ButtonScalable_C_IsPressed_Params
{
	bool                                               IsPressed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.SetButtonText
struct UBasic_ButtonScalable_C_SetButtonText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.SetFontSize
struct UBasic_ButtonScalable_C_SetFontSize_Params
{
	int*                                               FontSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.PreConstruct
struct UBasic_ButtonScalable_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBasic_ButtonScalable_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UBasic_ButtonScalable_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UBasic_ButtonScalable_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UBasic_ButtonScalable_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
struct UBasic_ButtonScalable_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.ExecuteUbergraph_Basic_ButtonScalable
struct UBasic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.OnReleased__DelegateSignature
struct UBasic_ButtonScalable_C_OnReleased__DelegateSignature_Params
{
};

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.OnPressed__DelegateSignature
struct UBasic_ButtonScalable_C_OnPressed__DelegateSignature_Params
{
};

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.OnClicked__DelegateSignature
struct UBasic_ButtonScalable_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
