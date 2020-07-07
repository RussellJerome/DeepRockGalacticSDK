// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_Scalability_ResolutioScale_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_Scalability_ResolutioScale_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.Construct");

	UOptions_Scalability_ResolutioScale_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_Scalability_ResolutioScale_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.UINeedsUpdate");

	UOptions_Scalability_ResolutioScale_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.ShowUI
// (BlueprintCallable, BlueprintEvent)

void UOptions_Scalability_ResolutioScale_C::ShowUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.ShowUI");

	UOptions_Scalability_ResolutioScale_C_ShowUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Scalability_ResolutioScale_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature");

	UOptions_Scalability_ResolutioScale_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.ExecuteUbergraph_Options_Scalability_ResolutioScale
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Scalability_ResolutioScale_C::ExecuteUbergraph_Options_Scalability_ResolutioScale(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.ExecuteUbergraph_Options_Scalability_ResolutioScale");

	UOptions_Scalability_ResolutioScale_C_ExecuteUbergraph_Options_Scalability_ResolutioScale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
