// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_CameraShake_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_CameraShake.Options_CameraShake_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_CameraShake_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_CameraShake.Options_CameraShake_C.Construct");

	UOptions_CameraShake_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_CameraShake.Options_CameraShake_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_CameraShake_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_CameraShake.Options_CameraShake_C.UINeedsUpdate");

	UOptions_CameraShake_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_CameraShake.Options_CameraShake_C.ShowUI
// (BlueprintCallable, BlueprintEvent)

void UOptions_CameraShake_C::ShowUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_CameraShake.Options_CameraShake_C.ShowUI");

	UOptions_CameraShake_C_ShowUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_CameraShake.Options_CameraShake_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_CameraShake_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_CameraShake.Options_CameraShake_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature");

	UOptions_CameraShake_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_CameraShake.Options_CameraShake_C.ExecuteUbergraph_Options_CameraShake
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_CameraShake_C::ExecuteUbergraph_Options_CameraShake(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_CameraShake.Options_CameraShake_C.ExecuteUbergraph_Options_CameraShake");

	UOptions_CameraShake_C_ExecuteUbergraph_Options_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
