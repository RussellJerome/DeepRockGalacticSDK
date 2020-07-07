// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_InvertMouseWheel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_InvertMouseWheel.Options_InvertMouseWheel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_InvertMouseWheel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_InvertMouseWheel.Options_InvertMouseWheel_C.Construct");

	UOptions_InvertMouseWheel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_InvertMouseWheel.Options_InvertMouseWheel_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_InvertMouseWheel_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_InvertMouseWheel.Options_InvertMouseWheel_C.UINeedsUpdate");

	UOptions_InvertMouseWheel_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_InvertMouseWheel.Options_InvertMouseWheel_C.ShowOptions
// (BlueprintCallable, BlueprintEvent)

void UOptions_InvertMouseWheel_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_InvertMouseWheel.Options_InvertMouseWheel_C.ShowOptions");

	UOptions_InvertMouseWheel_C_ShowOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_InvertMouseWheel.Options_InvertMouseWheel_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_InvertMouseWheel_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_InvertMouseWheel.Options_InvertMouseWheel_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature");

	UOptions_InvertMouseWheel_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_InvertMouseWheel.Options_InvertMouseWheel_C.ExecuteUbergraph_Options_InvertMouseWheel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_InvertMouseWheel_C::ExecuteUbergraph_Options_InvertMouseWheel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_InvertMouseWheel.Options_InvertMouseWheel_C.ExecuteUbergraph_Options_InvertMouseWheel");

	UOptions_InvertMouseWheel_C_ExecuteUbergraph_Options_InvertMouseWheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
