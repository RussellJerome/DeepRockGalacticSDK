// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_ShowNetInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_ShowNetInfo.Options_ShowNetInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_ShowNetInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowNetInfo.Options_ShowNetInfo_C.Construct");

	UOptions_ShowNetInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ShowNetInfo.Options_ShowNetInfo_C.OnShowFPSChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_ShowNetInfo_C::OnShowFPSChanged(bool* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowNetInfo.Options_ShowNetInfo_C.OnShowFPSChanged");

	UOptions_ShowNetInfo_C_OnShowFPSChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ShowNetInfo.Options_ShowNetInfo_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_ShowNetInfo_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowNetInfo.Options_ShowNetInfo_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	UOptions_ShowNetInfo_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ShowNetInfo.Options_ShowNetInfo_C.ExecuteUbergraph_Options_ShowNetInfo
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_ShowNetInfo_C::ExecuteUbergraph_Options_ShowNetInfo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowNetInfo.Options_ShowNetInfo_C.ExecuteUbergraph_Options_ShowNetInfo");

	UOptions_ShowNetInfo_C_ExecuteUbergraph_Options_ShowNetInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
