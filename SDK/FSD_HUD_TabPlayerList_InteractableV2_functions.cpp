// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_TabPlayerList_InteractableV2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.FindPlayerList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AFSDPlayerState*> OutPlayers                     (Parm, OutParm, ZeroConstructor)

void UHUD_TabPlayerList_InteractableV2_C::FindPlayerList(TArray<class AFSDPlayerState*>* OutPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.FindPlayerList");

	UHUD_TabPlayerList_InteractableV2_C_FindPlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlayers != nullptr)
		*OutPlayers = params.OutPlayers;
}


// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_TabPlayerList_InteractableV2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.Construct");

	UHUD_TabPlayerList_InteractableV2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.AddPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerList_InteractableV2_C::AddPlayer(class AFSDPlayerState** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.AddPlayer");

	UHUD_TabPlayerList_InteractableV2_C_AddPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.Update
// (BlueprintCallable, BlueprintEvent)

void UHUD_TabPlayerList_InteractableV2_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.Update");

	UHUD_TabPlayerList_InteractableV2_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnPlayerJoined_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerList_InteractableV2_C::OnPlayerJoined_Event(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnPlayerJoined_Event");

	UHUD_TabPlayerList_InteractableV2_C_OnPlayerJoined_Event_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnPlayerLeave_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerList_InteractableV2_C::OnPlayerLeave_Event(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnPlayerLeave_Event");

	UHUD_TabPlayerList_InteractableV2_C_OnPlayerLeave_Event_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHUD_TabPlayerList_InteractableV2_C::BndEvt__Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UHUD_TabPlayerList_InteractableV2_C_BndEvt__Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.InviteFriends
// (BlueprintCallable, BlueprintEvent)

void UHUD_TabPlayerList_InteractableV2_C::InviteFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.InviteFriends");

	UHUD_TabPlayerList_InteractableV2_C_InviteFriends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__Button_InviteFriends2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHUD_TabPlayerList_InteractableV2_C::BndEvt__Button_InviteFriends2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__Button_InviteFriends2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UHUD_TabPlayerList_InteractableV2_C_BndEvt__Button_InviteFriends2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__SizeBox_InviteFriends03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHUD_TabPlayerList_InteractableV2_C::BndEvt__SizeBox_InviteFriends03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__SizeBox_InviteFriends03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UHUD_TabPlayerList_InteractableV2_C_BndEvt__SizeBox_InviteFriends03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.ExecuteUbergraph_HUD_TabPlayerList_InteractableV2
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerList_InteractableV2_C::ExecuteUbergraph_HUD_TabPlayerList_InteractableV2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.ExecuteUbergraph_HUD_TabPlayerList_InteractableV2");

	UHUD_TabPlayerList_InteractableV2_C_ExecuteUbergraph_HUD_TabPlayerList_InteractableV2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
