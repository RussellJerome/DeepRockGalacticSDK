// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_TeamDisplay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_TeamDisplay.UI_TeamDisplay_C.GetParents
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>          Names1                         (Parm, OutParm, ZeroConstructor)

void UUI_TeamDisplay_C::GetParents(TArray<class FString>* Names1)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.GetParents");

	UUI_TeamDisplay_C_GetParents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Names1 != nullptr)
		*Names1 = params.Names1;
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.GetTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AFSDPlayerState*> OutTeamMembers                 (Parm, OutParm, ZeroConstructor)

void UUI_TeamDisplay_C::GetTeam(TArray<class AFSDPlayerState*>* OutTeamMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.GetTeam");

	UUI_TeamDisplay_C_GetTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTeamMembers != nullptr)
		*OutTeamMembers = params.OutTeamMembers;
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateIcons
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TeamDisplay_C::UpdateIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateIcons");

	UUI_TeamDisplay_C_UpdateIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TeamDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.Construct");

	UUI_TeamDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.OnFirstWindowOpened
// (BlueprintCallable, BlueprintEvent)

void UUI_TeamDisplay_C::OnFirstWindowOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.OnFirstWindowOpened");

	UUI_TeamDisplay_C_OnFirstWindowOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.OnLastWindowClosed
// (BlueprintCallable, BlueprintEvent)

void UUI_TeamDisplay_C::OnLastWindowClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.OnLastWindowClosed");

	UUI_TeamDisplay_C_OnLastWindowClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.Setup Invite Friends
// (BlueprintCallable, BlueprintEvent)

void UUI_TeamDisplay_C::Setup_Invite_Friends()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.Setup Invite Friends");

	UUI_TeamDisplay_C_Setup_Invite_Friends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TeamDisplay_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.PreConstruct");

	UUI_TeamDisplay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateFriendInviteVisibility
// (BlueprintCallable, BlueprintEvent)

void UUI_TeamDisplay_C::UpdateFriendInviteVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateFriendInviteVisibility");

	UUI_TeamDisplay_C_UpdateFriendInviteVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerJoined_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TeamDisplay_C::OnPlayerJoined_Event(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerJoined_Event");

	UUI_TeamDisplay_C_OnPlayerJoined_Event_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerLeave_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TeamDisplay_C::OnPlayerLeave_Event(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerLeave_Event");

	UUI_TeamDisplay_C_OnPlayerLeave_Event_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.ExecuteUbergraph_UI_TeamDisplay
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TeamDisplay_C::ExecuteUbergraph_UI_TeamDisplay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.ExecuteUbergraph_UI_TeamDisplay");

	UUI_TeamDisplay_C_ExecuteUbergraph_UI_TeamDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
