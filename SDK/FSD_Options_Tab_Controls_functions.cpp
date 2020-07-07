// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_Tab_Controls_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Tab_Controls.Options_Tab_Controls_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_Tab_Controls_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_Controls.Options_Tab_Controls_C.Construct");

	UOptions_Tab_Controls_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Tab_Controls.Options_Tab_Controls_C.BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UOptions_Tab_Controls_C::BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_Controls.Options_Tab_Controls_C.BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UOptions_Tab_Controls_C_BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Tab_Controls.Options_Tab_Controls_C.ExecuteUbergraph_Options_Tab_Controls
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Tab_Controls_C::ExecuteUbergraph_Options_Tab_Controls(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_Controls.Options_Tab_Controls_C.ExecuteUbergraph_Options_Tab_Controls");

	UOptions_Tab_Controls_C_ExecuteUbergraph_Options_Tab_Controls_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Tab_Controls.Options_Tab_Controls_C.SettingsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptions_Tab_Controls_C::SettingsChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_Controls.Options_Tab_Controls_C.SettingsChanged__DelegateSignature");

	UOptions_Tab_Controls_C_SettingsChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
