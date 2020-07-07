// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_SoundOnChatMessage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_SoundOnChatMessage.Options_SoundOnChatMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_SoundOnChatMessage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_SoundOnChatMessage.Options_SoundOnChatMessage_C.Construct");

	UOptions_SoundOnChatMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_SoundOnChatMessage.Options_SoundOnChatMessage_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_SoundOnChatMessage_C::BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_SoundOnChatMessage.Options_SoundOnChatMessage_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	UOptions_SoundOnChatMessage_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_SoundOnChatMessage.Options_SoundOnChatMessage_C.ExecuteUbergraph_Options_SoundOnChatMessage
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_SoundOnChatMessage_C::ExecuteUbergraph_Options_SoundOnChatMessage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_SoundOnChatMessage.Options_SoundOnChatMessage_C.ExecuteUbergraph_Options_SoundOnChatMessage");

	UOptions_SoundOnChatMessage_C_ExecuteUbergraph_Options_SoundOnChatMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
