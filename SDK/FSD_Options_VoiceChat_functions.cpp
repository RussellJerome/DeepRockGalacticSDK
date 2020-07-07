// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_VoiceChat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_VoiceChat.Options_VoiceChat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_VoiceChat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VoiceChat.Options_VoiceChat_C.Construct");

	UOptions_VoiceChat_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_VoiceChat.Options_VoiceChat_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_VoiceChat_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VoiceChat.Options_VoiceChat_C.UINeedsUpdate");

	UOptions_VoiceChat_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_VoiceChat.Options_VoiceChat_C.ShowOptions
// (BlueprintCallable, BlueprintEvent)

void UOptions_VoiceChat_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VoiceChat.Options_VoiceChat_C.ShowOptions");

	UOptions_VoiceChat_C_ShowOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_VoiceChat.Options_VoiceChat_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_VoiceChat_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VoiceChat.Options_VoiceChat_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature");

	UOptions_VoiceChat_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_VoiceChat.Options_VoiceChat_C.ExecuteUbergraph_Options_VoiceChat
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_VoiceChat_C::ExecuteUbergraph_Options_VoiceChat(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VoiceChat.Options_VoiceChat_C.ExecuteUbergraph_Options_VoiceChat");

	UOptions_VoiceChat_C_ExecuteUbergraph_Options_VoiceChat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
