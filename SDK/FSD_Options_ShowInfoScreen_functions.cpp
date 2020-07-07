// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_ShowInfoScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_ShowInfoScreen.Options_ShowInfoScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_ShowInfoScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowInfoScreen.Options_ShowInfoScreen_C.Construct");

	UOptions_ShowInfoScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ShowInfoScreen.Options_ShowInfoScreen_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_ShowInfoScreen_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowInfoScreen.Options_ShowInfoScreen_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	UOptions_ShowInfoScreen_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_ShowInfoScreen.Options_ShowInfoScreen_C.ExecuteUbergraph_Options_ShowInfoScreen
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_ShowInfoScreen_C::ExecuteUbergraph_Options_ShowInfoScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowInfoScreen.Options_ShowInfoScreen_C.ExecuteUbergraph_Options_ShowInfoScreen");

	UOptions_ShowInfoScreen_C_ExecuteUbergraph_Options_ShowInfoScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
