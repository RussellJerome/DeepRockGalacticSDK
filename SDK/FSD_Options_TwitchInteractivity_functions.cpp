// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_TwitchInteractivity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_TwitchInteractivity_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.Construct");

	UOptions_TwitchInteractivity_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_TwitchInteractivity_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	UOptions_TwitchInteractivity_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
// (BlueprintEvent)

void UOptions_TwitchInteractivity_C::BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");

	UOptions_TwitchInteractivity_C_BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.BndEvt__Mixer_Logout_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
// (BlueprintEvent)

void UOptions_TwitchInteractivity_C::BndEvt__Mixer_Logout_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.BndEvt__Mixer_Logout_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature");

	UOptions_TwitchInteractivity_C_BndEvt__Mixer_Logout_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_TwitchInteractivity_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.Tick");

	UOptions_TwitchInteractivity_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.ExecuteUbergraph_Options_TwitchInteractivity
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_TwitchInteractivity_C::ExecuteUbergraph_Options_TwitchInteractivity(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.ExecuteUbergraph_Options_TwitchInteractivity");

	UOptions_TwitchInteractivity_C_ExecuteUbergraph_Options_TwitchInteractivity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
