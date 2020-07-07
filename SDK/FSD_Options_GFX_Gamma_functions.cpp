// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_GFX_Gamma_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_GFX_Gamma.Options_GFX_Gamma_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_GFX_Gamma_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GFX_Gamma.Options_GFX_Gamma_C.Construct");

	UOptions_GFX_Gamma_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_GFX_Gamma.Options_GFX_Gamma_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_GFX_Gamma_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GFX_Gamma.Options_GFX_Gamma_C.UINeedsUpdate");

	UOptions_GFX_Gamma_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_GFX_Gamma.Options_GFX_Gamma_C.ShowUI
// (BlueprintCallable, BlueprintEvent)

void UOptions_GFX_Gamma_C::ShowUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GFX_Gamma.Options_GFX_Gamma_C.ShowUI");

	UOptions_GFX_Gamma_C_ShowUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_GFX_Gamma.Options_GFX_Gamma_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_GFX_Gamma_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GFX_Gamma.Options_GFX_Gamma_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature");

	UOptions_GFX_Gamma_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_GFX_Gamma.Options_GFX_Gamma_C.ExecuteUbergraph_Options_GFX_Gamma
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_GFX_Gamma_C::ExecuteUbergraph_Options_GFX_Gamma(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GFX_Gamma.Options_GFX_Gamma_C.ExecuteUbergraph_Options_GFX_Gamma");

	UOptions_GFX_Gamma_C_ExecuteUbergraph_Options_GFX_Gamma_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
