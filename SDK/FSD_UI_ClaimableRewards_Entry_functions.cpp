// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_ClaimableRewards_Entry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_ClaimableRewards_Entry_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.Refresh");

	UUI_ClaimableRewards_Entry_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.PlayRevealAudio
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_ClaimableRewards_Entry_C::PlayRevealAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.PlayRevealAudio");

	UUI_ClaimableRewards_Entry_C_PlayRevealAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ClaimableRewards_Entry_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.PreConstruct");

	UUI_ClaimableRewards_Entry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ClaimableRewards_Entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.Construct");

	UUI_ClaimableRewards_Entry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.MoveIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         StartDelay                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ClaimableRewards_Entry_C::MoveIn(float* StartDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.MoveIn");

	UUI_ClaimableRewards_Entry_C_MoveIn_Params params;
	params.StartDelay = StartDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.OnClaimAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_ClaimableRewards_Entry_C::OnClaimAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.OnClaimAnimFinished");

	UUI_ClaimableRewards_Entry_C_OnClaimAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_ClaimableRewards_Entry_C::BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UUI_ClaimableRewards_Entry_C_BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.ExecuteUbergraph_UI_ClaimableRewards_Entry
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ClaimableRewards_Entry_C::ExecuteUbergraph_UI_ClaimableRewards_Entry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.ExecuteUbergraph_UI_ClaimableRewards_Entry");

	UUI_ClaimableRewards_Entry_C_ExecuteUbergraph_UI_ClaimableRewards_Entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
