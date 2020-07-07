// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_VolumeSlider_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_VolumeSlider.Options_VolumeSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_VolumeSlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VolumeSlider.Options_VolumeSlider_C.Construct");

	UOptions_VolumeSlider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_VolumeSlider.Options_VolumeSlider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_VolumeSlider_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VolumeSlider.Options_VolumeSlider_C.PreConstruct");

	UOptions_VolumeSlider_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_VolumeSlider.Options_VolumeSlider_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_VolumeSlider_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VolumeSlider.Options_VolumeSlider_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");

	UOptions_VolumeSlider_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_VolumeSlider.Options_VolumeSlider_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_VolumeSlider_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VolumeSlider.Options_VolumeSlider_C.UINeedsUpdate");

	UOptions_VolumeSlider_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_VolumeSlider.Options_VolumeSlider_C.Update Percentage Text
// (BlueprintCallable, BlueprintEvent)

void UOptions_VolumeSlider_C::Update_Percentage_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VolumeSlider.Options_VolumeSlider_C.Update Percentage Text");

	UOptions_VolumeSlider_C_Update_Percentage_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_VolumeSlider.Options_VolumeSlider_C.ExecuteUbergraph_Options_VolumeSlider
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_VolumeSlider_C::ExecuteUbergraph_Options_VolumeSlider(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VolumeSlider.Options_VolumeSlider_C.ExecuteUbergraph_Options_VolumeSlider");

	UOptions_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
