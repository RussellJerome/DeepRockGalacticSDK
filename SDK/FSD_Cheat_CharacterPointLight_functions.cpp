// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_CharacterPointLight_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_CharacterPointLight.Cheat_CharacterPointLight_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UCheat_CharacterPointLight_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_CharacterPointLight.Cheat_CharacterPointLight_C.Update");

	UCheat_CharacterPointLight_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_CharacterPointLight.Cheat_CharacterPointLight_C.BndEvt__IntensitySlider_K2Node_ComponentBoundEvent_79_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_CharacterPointLight_C::BndEvt__IntensitySlider_K2Node_ComponentBoundEvent_79_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_CharacterPointLight.Cheat_CharacterPointLight_C.BndEvt__IntensitySlider_K2Node_ComponentBoundEvent_79_OnFloatValueChangedEvent__DelegateSignature");

	UCheat_CharacterPointLight_C_BndEvt__IntensitySlider_K2Node_ComponentBoundEvent_79_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_CharacterPointLight.Cheat_CharacterPointLight_C.BndEvt__Radius_K2Node_ComponentBoundEvent_96_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_CharacterPointLight_C::BndEvt__Radius_K2Node_ComponentBoundEvent_96_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_CharacterPointLight.Cheat_CharacterPointLight_C.BndEvt__Radius_K2Node_ComponentBoundEvent_96_OnFloatValueChangedEvent__DelegateSignature");

	UCheat_CharacterPointLight_C_BndEvt__Radius_K2Node_ComponentBoundEvent_96_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_CharacterPointLight.Cheat_CharacterPointLight_C.Set max value on radius and intensity
// (BlueprintCallable, BlueprintEvent)

void UCheat_CharacterPointLight_C::Set_max_value_on_radius_and_intensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_CharacterPointLight.Cheat_CharacterPointLight_C.Set max value on radius and intensity");

	UCheat_CharacterPointLight_C_Set_max_value_on_radius_and_intensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_CharacterPointLight.Cheat_CharacterPointLight_C.ExecuteUbergraph_Cheat_CharacterPointLight
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_CharacterPointLight_C::ExecuteUbergraph_Cheat_CharacterPointLight(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_CharacterPointLight.Cheat_CharacterPointLight_C.ExecuteUbergraph_Cheat_CharacterPointLight");

	UCheat_CharacterPointLight_C_ExecuteUbergraph_Cheat_CharacterPointLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
