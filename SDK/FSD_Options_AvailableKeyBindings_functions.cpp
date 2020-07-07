// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_AvailableKeyBindings_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_AvailableKeyBindings.Options_AvailableKeyBindings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_AvailableKeyBindings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_AvailableKeyBindings.Options_AvailableKeyBindings_C.Construct");

	UOptions_AvailableKeyBindings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_AvailableKeyBindings.Options_AvailableKeyBindings_C.BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)

void UOptions_AvailableKeyBindings_C::BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_AvailableKeyBindings.Options_AvailableKeyBindings_C.BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UOptions_AvailableKeyBindings_C_BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_AvailableKeyBindings.Options_AvailableKeyBindings_C.ExecuteUbergraph_Options_AvailableKeyBindings
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_AvailableKeyBindings_C::ExecuteUbergraph_Options_AvailableKeyBindings(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_AvailableKeyBindings.Options_AvailableKeyBindings_C.ExecuteUbergraph_Options_AvailableKeyBindings");

	UOptions_AvailableKeyBindings_C_ExecuteUbergraph_Options_AvailableKeyBindings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
