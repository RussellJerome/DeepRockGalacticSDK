// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_MouseSmooting_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_MouseSmooting.Options_MouseSmooting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_MouseSmooting_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_MouseSmooting.Options_MouseSmooting_C.Construct");

	UOptions_MouseSmooting_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_MouseSmooting.Options_MouseSmooting_C.ShowOptions
// (BlueprintCallable, BlueprintEvent)

void UOptions_MouseSmooting_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_MouseSmooting.Options_MouseSmooting_C.ShowOptions");

	UOptions_MouseSmooting_C_ShowOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_MouseSmooting.Options_MouseSmooting_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_MouseSmooting_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_MouseSmooting.Options_MouseSmooting_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	UOptions_MouseSmooting_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_MouseSmooting.Options_MouseSmooting_C.ExecuteUbergraph_Options_MouseSmooting
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_MouseSmooting_C::ExecuteUbergraph_Options_MouseSmooting(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_MouseSmooting.Options_MouseSmooting_C.ExecuteUbergraph_Options_MouseSmooting");

	UOptions_MouseSmooting_C_ExecuteUbergraph_Options_MouseSmooting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
