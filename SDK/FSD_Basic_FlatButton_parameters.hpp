#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_FlatButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_FlatButton.Basic_FlatButton_C.IsInteractable
struct UBasic_FlatButton_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic_FlatButton.Basic_FlatButton_C.SetStyle
struct UBasic_FlatButton_C_SetStyle_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      InBaseColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_MenuColors>*                      InHoverColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_MenuColors>*                      InTextColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_MenuColors>*                      InTextHoverColor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_FlatButton.Basic_FlatButton_C.CreateMenuStyle
struct UBasic_FlatButton_C_CreateMenuStyle_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      ColorSelector;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 SlateBrush;                                               // (Parm, OutParm)
};

// Function Basic_FlatButton.Basic_FlatButton_C.PreConstruct
struct UBasic_FlatButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_FlatButton.Basic_FlatButton_C.Set Text
struct UBasic_FlatButton_C_Set_Text_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              UpperCase;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_FlatButton.Basic_FlatButton_C.Set Font Size
struct UBasic_FlatButton_C_Set_Font_Size_Params
{
	int*                                               FontSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_FlatButton.Basic_FlatButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBasic_FlatButton_C_BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Basic_FlatButton.Basic_FlatButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UBasic_FlatButton_C_BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_FlatButton.Basic_FlatButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UBasic_FlatButton_C_BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_FlatButton.Basic_FlatButton_C.ExecuteUbergraph_Basic_FlatButton
struct UBasic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_FlatButton.Basic_FlatButton_C.OnClicked__DelegateSignature
struct UBasic_FlatButton_C_OnClicked__DelegateSignature_Params
{
	class UBasic_FlatButton_C**                        Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
