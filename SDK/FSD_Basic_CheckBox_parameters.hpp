#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_CheckBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_CheckBox.Basic_CheckBox_C.SetText
struct UBasic_CheckBox_C_SetText_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              InUpperCase;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_CheckBox.Basic_CheckBox_C.SetIsChecked
struct UBasic_CheckBox_C_SetIsChecked_Params
{
	bool*                                              InIsChecked;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_CheckBox.Basic_CheckBox_C.GetIsChecked
struct UBasic_CheckBox_C_GetIsChecked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic_CheckBox.Basic_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBasic_CheckBox_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Basic_CheckBox.Basic_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UBasic_CheckBox_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_CheckBox.Basic_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UBasic_CheckBox_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_CheckBox.Basic_CheckBox_C.PreConstruct
struct UBasic_CheckBox_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_CheckBox.Basic_CheckBox_C.ClickButton
struct UBasic_CheckBox_C_ClickButton_Params
{
};

// Function Basic_CheckBox.Basic_CheckBox_C.ExecuteUbergraph_Basic_CheckBox
struct UBasic_CheckBox_C_ExecuteUbergraph_Basic_CheckBox_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_CheckBox.Basic_CheckBox_C.OnCheckStateChanged__DelegateSignature
struct UBasic_CheckBox_C_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
