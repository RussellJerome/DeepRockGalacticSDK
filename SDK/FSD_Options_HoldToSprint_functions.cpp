// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_HoldToSprint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_HoldToSprint.Options_HoldToSprint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_HoldToSprint_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HoldToSprint.Options_HoldToSprint_C.Construct");

	UOptions_HoldToSprint_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_HoldToSprint.Options_HoldToSprint_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_HoldToSprint_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HoldToSprint.Options_HoldToSprint_C.UINeedsUpdate");

	UOptions_HoldToSprint_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_HoldToSprint.Options_HoldToSprint_C.ShowOptions
// (BlueprintCallable, BlueprintEvent)

void UOptions_HoldToSprint_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HoldToSprint.Options_HoldToSprint_C.ShowOptions");

	UOptions_HoldToSprint_C_ShowOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_HoldToSprint.Options_HoldToSprint_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_HoldToSprint_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HoldToSprint.Options_HoldToSprint_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	UOptions_HoldToSprint_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_HoldToSprint.Options_HoldToSprint_C.ExecuteUbergraph_Options_HoldToSprint
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_HoldToSprint_C::ExecuteUbergraph_Options_HoldToSprint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HoldToSprint.Options_HoldToSprint_C.ExecuteUbergraph_Options_HoldToSprint");

	UOptions_HoldToSprint_C_ExecuteUbergraph_Options_HoldToSprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
