// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_ClaimableRewards_View_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.GetLine
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHorizontalBox*          EntryBox                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_ClaimableRewards_View_C::GetLine(class UHorizontalBox** EntryBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.GetLine");

	UUI_ClaimableRewards_View_C_GetLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EntryBox != nullptr)
		*EntryBox = params.EntryBox;
}


// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.SetupView
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClaimableRewardView*   InViewData                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ClaimableRewards_View_C::SetupView(struct FClaimableRewardView* InViewData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.SetupView");

	UUI_ClaimableRewards_View_C_SetupView_Params params;
	params.InViewData = InViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.TryFinish
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_ClaimableRewards_View_C::TryFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.TryFinish");

	UUI_ClaimableRewards_View_C_TryFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.StopAudio
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ClaimableRewards_View_C::StopAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.StopAudio");

	UUI_ClaimableRewards_View_C_StopAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnAudioFinished_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_ClaimableRewards_View_C::OnAudioFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnAudioFinished_Event");

	UUI_ClaimableRewards_View_C_OnAudioFinished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.Start Mission Control Speak
// (BlueprintCallable, BlueprintEvent)

void UUI_ClaimableRewards_View_C::Start_Mission_Control_Speak()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.Start Mission Control Speak");

	UUI_ClaimableRewards_View_C_Start_Mission_Control_Speak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ShowBlur
// (BlueprintCallable, BlueprintEvent)

void UUI_ClaimableRewards_View_C::ShowBlur()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ShowBlur");

	UUI_ClaimableRewards_View_C_ShowBlur_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ShowMouseCursor
// (BlueprintCallable, BlueprintEvent)

void UUI_ClaimableRewards_View_C::ShowMouseCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ShowMouseCursor");

	UUI_ClaimableRewards_View_C_ShowMouseCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.Move In Rewards
// (BlueprintCallable, BlueprintEvent)

void UUI_ClaimableRewards_View_C::Move_In_Rewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.Move In Rewards");

	UUI_ClaimableRewards_View_C_Move_In_Rewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardClaimed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClaimableRewardEntryWidget** InEntryWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_ClaimableRewards_View_C::OnRewardClaimed(class UClaimableRewardEntryWidget** InEntryWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardClaimed");

	UUI_ClaimableRewards_View_C_OnRewardClaimed_Params params;
	params.InEntryWidget = InEntryWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveEndFlow
// (Event, Protected, BlueprintEvent)

void UUI_ClaimableRewards_View_C::ReceiveEndFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveEndFlow");

	UUI_ClaimableRewards_View_C_ReceiveEndFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveDataChanged
// (Event, Protected, BlueprintEvent)

void UUI_ClaimableRewards_View_C::ReceiveDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveDataChanged");

	UUI_ClaimableRewards_View_C_ReceiveDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveBeginFlow
// (Event, Protected, BlueprintEvent)

void UUI_ClaimableRewards_View_C::ReceiveBeginFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveBeginFlow");

	UUI_ClaimableRewards_View_C_ReceiveBeginFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ExecuteUbergraph_UI_ClaimableRewards_View
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ClaimableRewards_View_C::ExecuteUbergraph_UI_ClaimableRewards_View(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ExecuteUbergraph_UI_ClaimableRewards_View");

	UUI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardsAndMissionControlFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_ClaimableRewards_View_C::OnRewardsAndMissionControlFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardsAndMissionControlFinished__DelegateSignature");

	UUI_ClaimableRewards_View_C_OnRewardsAndMissionControlFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardsClaimed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_ClaimableRewards_View_C::OnRewardsClaimed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardsClaimed__DelegateSignature");

	UUI_ClaimableRewards_View_C_OnRewardsClaimed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnMissionControlFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_ClaimableRewards_View_C::OnMissionControlFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnMissionControlFinished__DelegateSignature");

	UUI_ClaimableRewards_View_C_OnMissionControlFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnMissionControlStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent**        MissionControlAudio            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_ClaimableRewards_View_C::OnMissionControlStarted__DelegateSignature(class UAudioComponent** MissionControlAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnMissionControlStarted__DelegateSignature");

	UUI_ClaimableRewards_View_C_OnMissionControlStarted__DelegateSignature_Params params;
	params.MissionControlAudio = MissionControlAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
