#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_PasswordField_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_PasswordField.Basic_PasswordField_C.GetPassword
struct UBasic_PasswordField_C_GetPassword_Params
{
	struct FText                                       Password;                                                 // (Parm, OutParm)
};

// Function Basic_PasswordField.Basic_PasswordField_C.GetPasswordHint
struct UBasic_PasswordField_C_GetPasswordHint_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic_PasswordField.Basic_PasswordField_C.PreConstruct
struct UBasic_PasswordField_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_PasswordField.Basic_PasswordField_C.BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature
struct UBasic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Basic_PasswordField.Basic_PasswordField_C.BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UBasic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_PasswordField.Basic_PasswordField_C.ExecuteUbergraph_Basic_PasswordField
struct UBasic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_PasswordField.Basic_PasswordField_C.OnTextCommitted__DelegateSignature
struct UBasic_PasswordField_C_OnTextCommitted__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	unsigned char*                                     CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_PasswordField.Basic_PasswordField_C.OnTextChanged__DelegateSignature
struct UBasic_PasswordField_C_OnTextChanged__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
