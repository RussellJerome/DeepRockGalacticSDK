// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_PersonalMetrics_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_PersonalMetrics.Options_PersonalMetrics_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_PersonalMetrics_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PersonalMetrics.Options_PersonalMetrics_C.Construct");

	UOptions_PersonalMetrics_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_PersonalMetrics.Options_PersonalMetrics_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_PersonalMetrics_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PersonalMetrics.Options_PersonalMetrics_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	UOptions_PersonalMetrics_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_PersonalMetrics.Options_PersonalMetrics_C.OnPersonalMetricsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          AllowPersonalMetrics           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_PersonalMetrics_C::OnPersonalMetricsChanged(bool* AllowPersonalMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PersonalMetrics.Options_PersonalMetrics_C.OnPersonalMetricsChanged");

	UOptions_PersonalMetrics_C_OnPersonalMetricsChanged_Params params;
	params.AllowPersonalMetrics = AllowPersonalMetrics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_PersonalMetrics.Options_PersonalMetrics_C.ExecuteUbergraph_Options_PersonalMetrics
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_PersonalMetrics_C::ExecuteUbergraph_Options_PersonalMetrics(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PersonalMetrics.Options_PersonalMetrics_C.ExecuteUbergraph_Options_PersonalMetrics");

	UOptions_PersonalMetrics_C_ExecuteUbergraph_Options_PersonalMetrics_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
