#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_ButtonScalable2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.HideCountDown
struct UBasic_ButtonScalable2_C_HideCountDown_Params
{
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetCountDown
struct UBasic_ButtonScalable2_C_SetCountDown_Params
{
	int*                                               SecondsRemaining;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MinimumIntegralDigits;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetBackgroundColor
struct UBasic_ButtonScalable2_C_SetBackgroundColor_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      ColorSelector;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconBrush
struct UBasic_ButtonScalable2_C_SetIconBrush_Params
{
	class UImage*                                      Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FSlateBrush*                                InBrush;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FMargin*                                    InPadding;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetTints
struct UBasic_ButtonScalable2_C_SetTints_Params
{
	struct FLinearColor*                               PC__Icon_Tint;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Controller_Icon_Tint;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconTint
struct UBasic_ButtonScalable2_C_SetIconTint_Params
{
	struct FLinearColor*                               PC__Icon_Tint;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Controller_Icon_Tint;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnNewLine
struct UBasic_ButtonScalable2_C_OnNewLine_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddIcon
struct UBasic_ButtonScalable2_C_OnAddIcon_Params
{
	class FString*                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FActionIconMapping*                         Icon;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddKeyName
struct UBasic_ButtonScalable2_C_OnAddKeyName_Params
{
	class FString*                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.PreConstruct
struct UBasic_ButtonScalable2_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBasic_ButtonScalable2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UBasic_ButtonScalable2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UBasic_ButtonScalable2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddString
struct UBasic_ButtonScalable2_C_OnAddString_Params
{
	class FString*                                     Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnReset
struct UBasic_ButtonScalable2_C_OnReset_Params
{
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Toggle
struct UBasic_ButtonScalable2_C_Toggle_Params
{
	bool*                                              IsToggledOn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetToggled
struct UBasic_ButtonScalable2_C_SetToggled_Params
{
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetUntoggled
struct UBasic_ButtonScalable2_C_SetUntoggled_Params
{
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Click
struct UBasic_ButtonScalable2_C_Click_Params
{
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.ExecuteUbergraph_Basic_ButtonScalable2
struct UBasic_ButtonScalable2_C_ExecuteUbergraph_Basic_ButtonScalable2_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnUnhovered__DelegateSignature
struct UBasic_ButtonScalable2_C_OnUnhovered__DelegateSignature_Params
{
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnHovered__DelegateSignature
struct UBasic_ButtonScalable2_C_OnHovered__DelegateSignature_Params
{
};

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnClicked__DelegateSignature
struct UBasic_ButtonScalable2_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
