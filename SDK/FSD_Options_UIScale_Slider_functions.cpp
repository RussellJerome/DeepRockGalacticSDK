// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_UIScale_Slider_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_UIScale_Slider.Options_UIScale_Slider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_UIScale_Slider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_UIScale_Slider.Options_UIScale_Slider_C.Construct");

	UOptions_UIScale_Slider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_UIScale_Slider.Options_UIScale_Slider_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_UIScale_Slider_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_UIScale_Slider.Options_UIScale_Slider_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature");

	UOptions_UIScale_Slider_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_UIScale_Slider.Options_UIScale_Slider_C.ExecuteUbergraph_Options_UIScale_Slider
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_UIScale_Slider_C::ExecuteUbergraph_Options_UIScale_Slider(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_UIScale_Slider.Options_UIScale_Slider_C.ExecuteUbergraph_Options_UIScale_Slider");

	UOptions_UIScale_Slider_C_ExecuteUbergraph_Options_UIScale_Slider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_UIScale_Slider.Options_UIScale_Slider_C.OnVolumeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_UIScale_Slider_C::OnVolumeChanged__DelegateSignature(float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_UIScale_Slider.Options_UIScale_Slider_C.OnVolumeChanged__DelegateSignature");

	UOptions_UIScale_Slider_C_OnVolumeChanged__DelegateSignature_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
