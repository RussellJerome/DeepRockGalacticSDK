// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_PreventLatejoinCharacterDuplication_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_PreventLatejoinCharacterDuplication_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.Construct");

	UOptions_PreventLatejoinCharacterDuplication_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_PreventLatejoinCharacterDuplication_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	UOptions_PreventLatejoinCharacterDuplication_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.OnGameUserSettingsChanged
// (BlueprintCallable, BlueprintEvent)

void UOptions_PreventLatejoinCharacterDuplication_C::OnGameUserSettingsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.OnGameUserSettingsChanged");

	UOptions_PreventLatejoinCharacterDuplication_C_OnGameUserSettingsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.ExecuteUbergraph_Options_PreventLatejoinCharacterDuplication
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_PreventLatejoinCharacterDuplication_C::ExecuteUbergraph_Options_PreventLatejoinCharacterDuplication(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.ExecuteUbergraph_Options_PreventLatejoinCharacterDuplication");

	UOptions_PreventLatejoinCharacterDuplication_C_ExecuteUbergraph_Options_PreventLatejoinCharacterDuplication_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
