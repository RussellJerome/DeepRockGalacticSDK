// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_AnonymousMetrics_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_AnonymousMetrics_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.Construct");

	UOptions_AnonymousMetrics_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_AnonymousMetrics_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	UOptions_AnonymousMetrics_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.OnAnonymousMetricsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          AllowAnonymousMetrics          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_AnonymousMetrics_C::OnAnonymousMetricsChanged(bool* AllowAnonymousMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.OnAnonymousMetricsChanged");

	UOptions_AnonymousMetrics_C_OnAnonymousMetricsChanged_Params params;
	params.AllowAnonymousMetrics = AllowAnonymousMetrics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.ExecuteUbergraph_Options_AnonymousMetrics
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_AnonymousMetrics_C::ExecuteUbergraph_Options_AnonymousMetrics(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.ExecuteUbergraph_Options_AnonymousMetrics");

	UOptions_AnonymousMetrics_C_ExecuteUbergraph_Options_AnonymousMetrics_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
