// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_Scalability_Textures_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Scalability_Textures.Options_Scalability_Textures_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_Scalability_Textures_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Scalability_Textures.Options_Scalability_Textures_C.Construct");

	UOptions_Scalability_Textures_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Scalability_Textures.Options_Scalability_Textures_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_Scalability_Textures_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Scalability_Textures.Options_Scalability_Textures_C.UINeedsUpdate");

	UOptions_Scalability_Textures_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Scalability_Textures.Options_Scalability_Textures_C.ShowOptions
// (BlueprintCallable, BlueprintEvent)

void UOptions_Scalability_Textures_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Scalability_Textures.Options_Scalability_Textures_C.ShowOptions");

	UOptions_Scalability_Textures_C_ShowOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Scalability_Textures.Options_Scalability_Textures_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Scalability_Textures_C::BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature(struct FText* Value, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Scalability_Textures.Options_Scalability_Textures_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature");

	UOptions_Scalability_Textures_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Scalability_Textures.Options_Scalability_Textures_C.ExecuteUbergraph_Options_Scalability_Textures
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Scalability_Textures_C::ExecuteUbergraph_Options_Scalability_Textures(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Scalability_Textures.Options_Scalability_Textures_C.ExecuteUbergraph_Options_Scalability_Textures");

	UOptions_Scalability_Textures_C_ExecuteUbergraph_Options_Scalability_Textures_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
