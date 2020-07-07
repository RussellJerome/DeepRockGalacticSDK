// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_Controller_AimSensitivity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Controller_AimSensitivity.Options_Controller_AimSensitivity_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_Controller_AimSensitivity_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Controller_AimSensitivity.Options_Controller_AimSensitivity_C.Construct");

	UOptions_Controller_AimSensitivity_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Controller_AimSensitivity.Options_Controller_AimSensitivity_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_Controller_AimSensitivity_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Controller_AimSensitivity.Options_Controller_AimSensitivity_C.UINeedsUpdate");

	UOptions_Controller_AimSensitivity_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Controller_AimSensitivity.Options_Controller_AimSensitivity_C.ShowOptions
// (BlueprintCallable, BlueprintEvent)

void UOptions_Controller_AimSensitivity_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Controller_AimSensitivity.Options_Controller_AimSensitivity_C.ShowOptions");

	UOptions_Controller_AimSensitivity_C_ShowOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Controller_AimSensitivity.Options_Controller_AimSensitivity_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Controller_AimSensitivity_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Controller_AimSensitivity.Options_Controller_AimSensitivity_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");

	UOptions_Controller_AimSensitivity_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Controller_AimSensitivity.Options_Controller_AimSensitivity_C.ExecuteUbergraph_Options_Controller_AimSensitivity
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Controller_AimSensitivity_C::ExecuteUbergraph_Options_Controller_AimSensitivity(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Controller_AimSensitivity.Options_Controller_AimSensitivity_C.ExecuteUbergraph_Options_Controller_AimSensitivity");

	UOptions_Controller_AimSensitivity_C_ExecuteUbergraph_Options_Controller_AimSensitivity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
