// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_Headbob_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Headbob.Options_Headbob_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_Headbob_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Headbob.Options_Headbob_C.Construct");

	UOptions_Headbob_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Headbob.Options_Headbob_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_Headbob_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Headbob.Options_Headbob_C.UINeedsUpdate");

	UOptions_Headbob_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Headbob.Options_Headbob_C.ShowUI
// (BlueprintCallable, BlueprintEvent)

void UOptions_Headbob_C::ShowUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Headbob.Options_Headbob_C.ShowUI");

	UOptions_Headbob_C_ShowUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Headbob.Options_Headbob_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Headbob_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Headbob.Options_Headbob_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature");

	UOptions_Headbob_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Headbob.Options_Headbob_C.ExecuteUbergraph_Options_Headbob
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Headbob_C::ExecuteUbergraph_Options_Headbob(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Headbob.Options_Headbob_C.ExecuteUbergraph_Options_Headbob");

	UOptions_Headbob_C_ExecuteUbergraph_Options_Headbob_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
