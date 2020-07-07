// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_TutorialHints_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_TutorialHints.Options_TutorialHints_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_TutorialHints_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_TutorialHints.Options_TutorialHints_C.Construct");

	UOptions_TutorialHints_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_TutorialHints.Options_TutorialHints_C.OnEnableTutorialHintsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_TutorialHints_C::OnEnableTutorialHintsChanged(bool* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_TutorialHints.Options_TutorialHints_C.OnEnableTutorialHintsChanged");

	UOptions_TutorialHints_C_OnEnableTutorialHintsChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_TutorialHints.Options_TutorialHints_C.BndEvt__Button_Reset_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UOptions_TutorialHints_C::BndEvt__Button_Reset_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_TutorialHints.Options_TutorialHints_C.BndEvt__Button_Reset_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UOptions_TutorialHints_C_BndEvt__Button_Reset_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_TutorialHints.Options_TutorialHints_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_TutorialHints_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_TutorialHints.Options_TutorialHints_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	UOptions_TutorialHints_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_TutorialHints.Options_TutorialHints_C.ExecuteUbergraph_Options_TutorialHints
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_TutorialHints_C::ExecuteUbergraph_Options_TutorialHints(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_TutorialHints.Options_TutorialHints_C.ExecuteUbergraph_Options_TutorialHints");

	UOptions_TutorialHints_C_ExecuteUbergraph_Options_TutorialHints_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
