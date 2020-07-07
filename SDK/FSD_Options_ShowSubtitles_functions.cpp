// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_ShowSubtitles_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_ShowSubtitles.Options_ShowSubtitles_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_ShowSubtitles_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowSubtitles.Options_ShowSubtitles_C.Construct");

	UOptions_ShowSubtitles_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ShowSubtitles.Options_ShowSubtitles_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_ShowSubtitles_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowSubtitles.Options_ShowSubtitles_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	UOptions_ShowSubtitles_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ShowSubtitles.Options_ShowSubtitles_C.OnGameUserSettingsChanged
// (BlueprintCallable, BlueprintEvent)

void UOptions_ShowSubtitles_C::OnGameUserSettingsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowSubtitles.Options_ShowSubtitles_C.OnGameUserSettingsChanged");

	UOptions_ShowSubtitles_C_OnGameUserSettingsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ShowSubtitles.Options_ShowSubtitles_C.ExecuteUbergraph_Options_ShowSubtitles
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_ShowSubtitles_C::ExecuteUbergraph_Options_ShowSubtitles(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowSubtitles.Options_ShowSubtitles_C.ExecuteUbergraph_Options_ShowSubtitles");

	UOptions_ShowSubtitles_C_ExecuteUbergraph_Options_ShowSubtitles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
