#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_OptionSwitcher_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.RemoveOption
struct UBasic_OptionSwitcher_C_RemoveOption_Params
{
	struct FText                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetOptionCount
struct UBasic_OptionSwitcher_C_GetOptionCount_Params
{
	int                                                count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.ClearOptions
struct UBasic_OptionSwitcher_C_ClearOptions_Params
{
};

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.Add Option
struct UBasic_OptionSwitcher_C_Add_Option_Params
{
	struct FText*                                      Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetSelectedValue
struct UBasic_OptionSwitcher_C_GetSelectedValue_Params
{
	struct FText                                       Value;                                                    // (Parm, OutParm)
};

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetSelectedIndex
struct UBasic_OptionSwitcher_C_GetSelectedIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.SetSelectedValue
struct UBasic_OptionSwitcher_C_SetSelectedValue_Params
{
	struct FText*                                      Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.SetSelectedIndex
struct UBasic_OptionSwitcher_C_SetSelectedIndex_Params
{
	int*                                               NewIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.Set Options
struct UBasic_OptionSwitcher_C_Set_Options_Params
{
	TArray<struct FText>                               options;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               DefaultIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.PreConstruct
struct UBasic_OptionSwitcher_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_143_OnButtonClickedEvent__DelegateSignature
struct UBasic_OptionSwitcher_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_143_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature
struct UBasic_OptionSwitcher_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UBasic_OptionSwitcher_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UBasic_OptionSwitcher_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UBasic_OptionSwitcher_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UBasic_OptionSwitcher_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.ExecuteUbergraph_Basic_OptionSwitcher
struct UBasic_OptionSwitcher_C_ExecuteUbergraph_Basic_OptionSwitcher_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.OnSelectionChanged__DelegateSignature
struct UBasic_OptionSwitcher_C_OnSelectionChanged__DelegateSignature_Params
{
	struct FText*                                      Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
