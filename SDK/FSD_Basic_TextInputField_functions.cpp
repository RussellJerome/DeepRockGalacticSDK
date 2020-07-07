// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_TextInputField_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_TextInputField.Basic_TextInputField_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBasic_TextInputField_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_TextInputField.Basic_TextInputField_C.OnKeyUp");

	UBasic_TextInputField_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic_TextInputField.Basic_TextInputField_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBasic_TextInputField_C::SetText(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_TextInputField.Basic_TextInputField_C.SetText");

	UBasic_TextInputField_C_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_TextInputField.Basic_TextInputField_C.GetHint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   HintText                       (Parm, OutParm)

void UBasic_TextInputField_C::GetHint(struct FText* HintText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_TextInputField.Basic_TextInputField_C.GetHint");

	UBasic_TextInputField_C_GetHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HintText != nullptr)
		*HintText = params.HintText;
}


// Function Basic_TextInputField.Basic_TextInputField_C.GetText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBasic_TextInputField_C::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_TextInputField.Basic_TextInputField_C.GetText");

	UBasic_TextInputField_C_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic_TextInputField.Basic_TextInputField_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_TextInputField_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_TextInputField.Basic_TextInputField_C.PreConstruct");

	UBasic_TextInputField_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_TextInputField.Basic_TextInputField_C.BndEvt__InputField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBasic_TextInputField_C::BndEvt__InputField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_TextInputField.Basic_TextInputField_C.BndEvt__InputField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	UBasic_TextInputField_C_BndEvt__InputField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_TextInputField.Basic_TextInputField_C.BndEvt__InputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_TextInputField_C::BndEvt__InputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_TextInputField.Basic_TextInputField_C.BndEvt__InputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UBasic_TextInputField_C_BndEvt__InputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_TextInputField.Basic_TextInputField_C.ExecuteUbergraph_Basic_TextInputField
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_TextInputField_C::ExecuteUbergraph_Basic_TextInputField(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_TextInputField.Basic_TextInputField_C.ExecuteUbergraph_Basic_TextInputField");

	UBasic_TextInputField_C_ExecuteUbergraph_Basic_TextInputField_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_TextInputField.Basic_TextInputField_C.OnTextCommitted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// unsigned char*                 CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_TextInputField_C::OnTextCommitted__DelegateSignature(struct FText* Text, unsigned char* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_TextInputField.Basic_TextInputField_C.OnTextCommitted__DelegateSignature");

	UBasic_TextInputField_C_OnTextCommitted__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_TextInputField.Basic_TextInputField_C.OnTextChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBasic_TextInputField_C::OnTextChanged__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_TextInputField.Basic_TextInputField_C.OnTextChanged__DelegateSignature");

	UBasic_TextInputField_C_OnTextChanged__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
