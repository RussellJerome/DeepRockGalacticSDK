// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_PushToTalk_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_PushToTalk.Options_PushToTalk_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_PushToTalk_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PushToTalk.Options_PushToTalk_C.Construct");

	UOptions_PushToTalk_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_PushToTalk.Options_PushToTalk_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_PushToTalk_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PushToTalk.Options_PushToTalk_C.UINeedsUpdate");

	UOptions_PushToTalk_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_PushToTalk.Options_PushToTalk_C.ShowOptions
// (BlueprintCallable, BlueprintEvent)

void UOptions_PushToTalk_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PushToTalk.Options_PushToTalk_C.ShowOptions");

	UOptions_PushToTalk_C_ShowOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_PushToTalk.Options_PushToTalk_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_PushToTalk_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PushToTalk.Options_PushToTalk_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature");

	UOptions_PushToTalk_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_PushToTalk.Options_PushToTalk_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_PushToTalk_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PushToTalk.Options_PushToTalk_C.PreConstruct");

	UOptions_PushToTalk_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_PushToTalk.Options_PushToTalk_C.ExecuteUbergraph_Options_PushToTalk
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_PushToTalk_C::ExecuteUbergraph_Options_PushToTalk(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PushToTalk.Options_PushToTalk_C.ExecuteUbergraph_Options_PushToTalk");

	UOptions_PushToTalk_C_ExecuteUbergraph_Options_PushToTalk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
