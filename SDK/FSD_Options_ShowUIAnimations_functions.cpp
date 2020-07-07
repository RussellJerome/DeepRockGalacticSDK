// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_ShowUIAnimations_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_ShowUIAnimations.Options_ShowUIAnimations_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_ShowUIAnimations_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowUIAnimations.Options_ShowUIAnimations_C.Construct");

	UOptions_ShowUIAnimations_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ShowUIAnimations.Options_ShowUIAnimations_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_ShowUIAnimations_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowUIAnimations.Options_ShowUIAnimations_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	UOptions_ShowUIAnimations_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ShowUIAnimations.Options_ShowUIAnimations_C.OnGameUserSettingsChanged
// (BlueprintCallable, BlueprintEvent)

void UOptions_ShowUIAnimations_C::OnGameUserSettingsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowUIAnimations.Options_ShowUIAnimations_C.OnGameUserSettingsChanged");

	UOptions_ShowUIAnimations_C_OnGameUserSettingsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ShowUIAnimations.Options_ShowUIAnimations_C.ExecuteUbergraph_Options_ShowUIAnimations
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_ShowUIAnimations_C::ExecuteUbergraph_Options_ShowUIAnimations(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowUIAnimations.Options_ShowUIAnimations_C.ExecuteUbergraph_Options_ShowUIAnimations");

	UOptions_ShowUIAnimations_C_ExecuteUbergraph_Options_ShowUIAnimations_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
