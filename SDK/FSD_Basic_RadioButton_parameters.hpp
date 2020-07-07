#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_RadioButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_RadioButton.Basic_RadioButton_C.SetTextColor
struct UBasic_RadioButton_C_SetTextColor_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_RadioButton.Basic_RadioButton_C.SetText
struct UBasic_RadioButton_C_SetText_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              InUpperCase;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_RadioButton.Basic_RadioButton_C.SetIsChecked
struct UBasic_RadioButton_C_SetIsChecked_Params
{
	bool*                                              InIsChecked;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_RadioButton.Basic_RadioButton_C.GetIsChecked
struct UBasic_RadioButton_C_GetIsChecked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic_RadioButton.Basic_RadioButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBasic_RadioButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Basic_RadioButton.Basic_RadioButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UBasic_RadioButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_RadioButton.Basic_RadioButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UBasic_RadioButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_RadioButton.Basic_RadioButton_C.PreConstruct
struct UBasic_RadioButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_RadioButton.Basic_RadioButton_C.Construct
struct UBasic_RadioButton_C_Construct_Params
{
};

// Function Basic_RadioButton.Basic_RadioButton_C.ExecuteUbergraph_Basic_RadioButton
struct UBasic_RadioButton_C_ExecuteUbergraph_Basic_RadioButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_RadioButton.Basic_RadioButton_C.OnCheckStateChanged__DelegateSignature
struct UBasic_RadioButton_C_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
