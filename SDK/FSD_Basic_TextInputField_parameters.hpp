#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_TextInputField_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_TextInputField.Basic_TextInputField_C.OnKeyUp
struct UBasic_TextInputField_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic_TextInputField.Basic_TextInputField_C.SetText
struct UBasic_TextInputField_C_SetText_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Basic_TextInputField.Basic_TextInputField_C.GetHint
struct UBasic_TextInputField_C_GetHint_Params
{
	struct FText                                       HintText;                                                 // (Parm, OutParm)
};

// Function Basic_TextInputField.Basic_TextInputField_C.GetText
struct UBasic_TextInputField_C_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic_TextInputField.Basic_TextInputField_C.PreConstruct
struct UBasic_TextInputField_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_TextInputField.Basic_TextInputField_C.BndEvt__InputField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
struct UBasic_TextInputField_C_BndEvt__InputField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Basic_TextInputField.Basic_TextInputField_C.BndEvt__InputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UBasic_TextInputField_C_BndEvt__InputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_TextInputField.Basic_TextInputField_C.ExecuteUbergraph_Basic_TextInputField
struct UBasic_TextInputField_C_ExecuteUbergraph_Basic_TextInputField_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_TextInputField.Basic_TextInputField_C.OnTextCommitted__DelegateSignature
struct UBasic_TextInputField_C_OnTextCommitted__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	unsigned char*                                     CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_TextInputField.Basic_TextInputField_C.OnTextChanged__DelegateSignature
struct UBasic_TextInputField_C_OnTextChanged__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
