// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_Tab_UI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Tab_UI.Options_Tab_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_Tab_UI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_UI.Options_Tab_UI_C.Construct");

	UOptions_Tab_UI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Tab_UI.Options_Tab_UI_C.BndEvt__Options_Language_K2Node_ComponentBoundEvent_0_OnLanguageChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLocalizedLanguageInfo* Selected_Language              (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Tab_UI_C::BndEvt__Options_Language_K2Node_ComponentBoundEvent_0_OnLanguageChanged__DelegateSignature(struct FLocalizedLanguageInfo* Selected_Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_UI.Options_Tab_UI_C.BndEvt__Options_Language_K2Node_ComponentBoundEvent_0_OnLanguageChanged__DelegateSignature");

	UOptions_Tab_UI_C_BndEvt__Options_Language_K2Node_ComponentBoundEvent_0_OnLanguageChanged__DelegateSignature_Params params;
	params.Selected_Language = Selected_Language;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Tab_UI.Options_Tab_UI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Tab_UI_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_UI.Options_Tab_UI_C.PreConstruct");

	UOptions_Tab_UI_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Tab_UI.Options_Tab_UI_C.ExecuteUbergraph_Options_Tab_UI
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Tab_UI_C::ExecuteUbergraph_Options_Tab_UI(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_UI.Options_Tab_UI_C.ExecuteUbergraph_Options_Tab_UI");

	UOptions_Tab_UI_C_ExecuteUbergraph_Options_Tab_UI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Tab_UI.Options_Tab_UI_C.SettingsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptions_Tab_UI_C::SettingsChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_UI.Options_Tab_UI_C.SettingsChanged__DelegateSignature");

	UOptions_Tab_UI_C_SettingsChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
