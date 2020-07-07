// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_FullScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_FullScreen.Options_FullScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_FullScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen.Options_FullScreen_C.Construct");

	UOptions_FullScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_FullScreen.Options_FullScreen_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_FullScreen_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen.Options_FullScreen_C.UINeedsUpdate");

	UOptions_FullScreen_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_FullScreen.Options_FullScreen_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_18_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_FullScreen_C::BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_18_OnSelectionChanged__DelegateSignature(struct FText* Value, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen.Options_FullScreen_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_18_OnSelectionChanged__DelegateSignature");

	UOptions_FullScreen_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_18_OnSelectionChanged__DelegateSignature_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_FullScreen.Options_FullScreen_C.ExecuteUbergraph_Options_FullScreen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_FullScreen_C::ExecuteUbergraph_Options_FullScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen.Options_FullScreen_C.ExecuteUbergraph_Options_FullScreen");

	UOptions_FullScreen_C_ExecuteUbergraph_Options_FullScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
