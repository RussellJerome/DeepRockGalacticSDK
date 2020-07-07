// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PlayerControllerBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetIsEscapeMenuEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsEscapeMenuEnabled            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerControllerBase_C::SetIsEscapeMenuEnabled(bool* IsEscapeMenuEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetIsEscapeMenuEnabled");

	ABP_PlayerControllerBase_C_SetIsEscapeMenuEnabled_Params params;
	params.IsEscapeMenuEnabled = IsEscapeMenuEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetHasShownCharacterSelector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HasShown                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerControllerBase_C::SetHasShownCharacterSelector(bool* HasShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetHasShownCharacterSelector");

	ABP_PlayerControllerBase_C_SetHasShownCharacterSelector_Params params;
	params.HasShown = HasShown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ItemFilter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 itemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerControllerBase_C::ItemFilter(class UClass** itemClass, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ItemFilter");

	ABP_PlayerControllerBase_C_ItemFilter_Params params;
	params.itemClass = itemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetClassAnalytics
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerControllerBase_C::SetClassAnalytics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetClassAnalytics");

	ABP_PlayerControllerBase_C_SetClassAnalytics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetUnlockAnalytics
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          primary                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UClass*>          Secundary                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PlayerControllerBase_C::SetUnlockAnalytics(TArray<class UClass*>* primary, TArray<class UClass*>* Secundary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetUnlockAnalytics");

	ABP_PlayerControllerBase_C_SetUnlockAnalytics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (primary != nullptr)
		*primary = params.primary;
	if (Secundary != nullptr)
		*Secundary = params.Secundary;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.GetUnlockedItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EItemCategory*                 Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          Unlocked_Items                 (Parm, OutParm, ZeroConstructor)

void ABP_PlayerControllerBase_C::GetUnlockedItems(EItemCategory* Category, TArray<class UClass*>* Unlocked_Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.GetUnlockedItems");

	ABP_PlayerControllerBase_C_GetUnlockedItems_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Unlocked_Items != nullptr)
		*Unlocked_Items = params.Unlocked_Items;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateTwitchInteractionIfNotCreated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerControllerBase_C::CreateTwitchInteractionIfNotCreated(int* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateTwitchInteractionIfNotCreated");

	ABP_PlayerControllerBase_C_CreateTwitchInteractionIfNotCreated_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.TwitchInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerControllerBase_C::TwitchInteraction(int* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.TwitchInteraction");

	ABP_PlayerControllerBase_C_TwitchInteraction_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReStartAnsel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerControllerBase_C::ReStartAnsel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReStartAnsel");

	ABP_PlayerControllerBase_C_ReStartAnsel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StartAnsel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerControllerBase_C::StartAnsel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StartAnsel");

	ABP_PlayerControllerBase_C_StartAnsel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StopAnsel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerControllerBase_C::StopAnsel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StopAnsel");

	ABP_PlayerControllerBase_C_StopAnsel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CloseTwitchOAuth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ChangeStatus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerControllerBase_C::CloseTwitchOAuth(bool* ChangeStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CloseTwitchOAuth");

	ABP_PlayerControllerBase_C_CloseTwitchOAuth_Params params;
	params.ChangeStatus = ChangeStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateTwitchOAuthIfNotCreated
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerControllerBase_C::CreateTwitchOAuthIfNotCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateTwitchOAuthIfNotCreated");

	ABP_PlayerControllerBase_C_CreateTwitchOAuthIfNotCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateInviteRequestIfNotCreated
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerControllerBase_C::CreateInviteRequestIfNotCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateInviteRequestIfNotCreated");

	ABP_PlayerControllerBase_C_CreateInviteRequestIfNotCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_AcceptInvite_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerControllerBase_C::InpActEvt_AcceptInvite_K2Node_InputActionEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_AcceptInvite_K2Node_InputActionEvent_3");

	ABP_PlayerControllerBase_C_InpActEvt_AcceptInvite_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_RejectInvite_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerControllerBase_C::InpActEvt_RejectInvite_K2Node_InputActionEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_RejectInvite_K2Node_InputActionEvent_2");

	ABP_PlayerControllerBase_C_InpActEvt_RejectInvite_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerControllerBase_C::InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1");

	ABP_PlayerControllerBase_C_InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_Ctrl_O_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerControllerBase_C::InpActEvt_Ctrl_O_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_Ctrl_O_K2Node_InputKeyEvent_1");

	ABP_PlayerControllerBase_C_InpActEvt_Ctrl_O_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerControllerBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReceiveBeginPlay");

	ABP_PlayerControllerBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetPhotographyMode
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerControllerBase_C::SetPhotographyMode(bool* active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetPhotographyMode");

	ABP_PlayerControllerBase_C_SetPhotographyMode_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Return Client Camera
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerControllerBase_C::Return_Client_Camera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Return Client Camera");

	ABP_PlayerControllerBase_C_Return_Client_Camera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Invite Handling
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerControllerBase_C::Setup_Invite_Handling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Invite Handling");

	ABP_PlayerControllerBase_C_Setup_Invite_Handling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Retirement Notification
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerControllerBase_C::Setup_Retirement_Notification()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Retirement Notification");

	ABP_PlayerControllerBase_C_Setup_Retirement_Notification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.OnCharacterCanRetire_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerControllerBase_C::OnCharacterCanRetire_Event(class UClass** CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.OnCharacterCanRetire_Event");

	ABP_PlayerControllerBase_C_OnCharacterCanRetire_Event_Params params;
	params.CharacterClass = CharacterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.UpdateAnalytics
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerControllerBase_C::UpdateAnalytics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.UpdateAnalytics");

	ABP_PlayerControllerBase_C_UpdateAnalytics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.AdjustCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerControllerBase_C::AdjustCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.AdjustCamera");

	ABP_PlayerControllerBase_C_AdjustCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Change User
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerControllerBase_C::Setup_Change_User()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Change User");

	ABP_PlayerControllerBase_C_Setup_Change_User_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUser
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerControllerBase_C::ChangeUser()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUser");

	ABP_PlayerControllerBase_C_ChangeUser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUserReply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerControllerBase_C::ChangeUserReply(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUserReply");

	ABP_PlayerControllerBase_C_ChangeUserReply_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Reset Player Location
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerControllerBase_C::Reset_Player_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Reset Player Location");

	ABP_PlayerControllerBase_C_Reset_Player_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Event On Join Request Reply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Reply                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerControllerBase_C::Event_On_Join_Request_Reply(int* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Event On Join Request Reply");

	ABP_PlayerControllerBase_C_Event_On_Join_Request_Reply_Params params;
	params.Reply = Reply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Event On Join Request
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDiscordUser*           handleDiscordJoinRequest       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PlayerControllerBase_C::Event_On_Join_Request(struct FDiscordUser* handleDiscordJoinRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Event On Join Request");

	ABP_PlayerControllerBase_C_Event_On_Join_Request_Params params;
	params.handleDiscordJoinRequest = handleDiscordJoinRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ExecuteUbergraph_BP_PlayerControllerBase
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerControllerBase_C::ExecuteUbergraph_BP_PlayerControllerBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ExecuteUbergraph_BP_PlayerControllerBase");

	ABP_PlayerControllerBase_C_ExecuteUbergraph_BP_PlayerControllerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReplyToInviteRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Reply                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerControllerBase_C::ReplyToInviteRequest__DelegateSignature(int* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReplyToInviteRequest__DelegateSignature");

	ABP_PlayerControllerBase_C_ReplyToInviteRequest__DelegateSignature_Params params;
	params.Reply = Reply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
