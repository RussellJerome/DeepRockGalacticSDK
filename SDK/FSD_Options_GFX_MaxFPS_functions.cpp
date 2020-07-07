// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_GFX_MaxFPS_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_GFX_MaxFPS_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.Construct");

	UOptions_GFX_MaxFPS_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_GFX_MaxFPS_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.UINeedsUpdate");

	UOptions_GFX_MaxFPS_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.ShowOptions
// (BlueprintCallable, BlueprintEvent)

void UOptions_GFX_MaxFPS_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.ShowOptions");

	UOptions_GFX_MaxFPS_C_ShowOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_GFX_MaxFPS_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	UOptions_GFX_MaxFPS_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_GFX_MaxFPS_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");

	UOptions_GFX_MaxFPS_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.ExecuteUbergraph_Options_GFX_MaxFPS
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_GFX_MaxFPS_C::ExecuteUbergraph_Options_GFX_MaxFPS(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.ExecuteUbergraph_Options_GFX_MaxFPS");

	UOptions_GFX_MaxFPS_C_ExecuteUbergraph_Options_GFX_MaxFPS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
