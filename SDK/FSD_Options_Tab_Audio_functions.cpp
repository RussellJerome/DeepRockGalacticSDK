// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_Tab_Audio_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Tab_Audio.Options_Tab_Audio_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_Tab_Audio_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_Audio.Options_Tab_Audio_C.Construct");

	UOptions_Tab_Audio_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Tab_Audio.Options_Tab_Audio_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_Tab_Audio_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_Audio.Options_Tab_Audio_C.UINeedsUpdate");

	UOptions_Tab_Audio_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Tab_Audio.Options_Tab_Audio_C.ShowOptions
// (BlueprintCallable, BlueprintEvent)

void UOptions_Tab_Audio_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_Audio.Options_Tab_Audio_C.ShowOptions");

	UOptions_Tab_Audio_C_ShowOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Tab_Audio.Options_Tab_Audio_C.ExecuteUbergraph_Options_Tab_Audio
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Tab_Audio_C::ExecuteUbergraph_Options_Tab_Audio(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_Audio.Options_Tab_Audio_C.ExecuteUbergraph_Options_Tab_Audio");

	UOptions_Tab_Audio_C_ExecuteUbergraph_Options_Tab_Audio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Tab_Audio.Options_Tab_Audio_C.SettingsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptions_Tab_Audio_C::SettingsChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_Audio.Options_Tab_Audio_C.SettingsChanged__DelegateSignature");

	UOptions_Tab_Audio_C_SettingsChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
