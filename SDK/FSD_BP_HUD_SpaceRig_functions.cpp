// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_HUD_SpaceRig_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.FetchPromotionRewards
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutSuccess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_SpaceRig_C::FetchPromotionRewards(bool* OutSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.FetchPromotionRewards");

	ABP_HUD_SpaceRig_C_FetchPromotionRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSuccess != nullptr)
		*OutSuccess = params.OutSuccess;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.HasSelectedCharacterBeenPromoted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsPromoted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_SpaceRig_C::HasSelectedCharacterBeenPromoted(bool* IsPromoted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.HasSelectedCharacterBeenPromoted");

	ABP_HUD_SpaceRig_C_HasSelectedCharacterBeenPromoted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPromoted != nullptr)
		*IsPromoted = params.IsPromoted;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ShowNextQueuedWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::ShowNextQueuedWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ShowNextQueuedWindow");

	ABP_HUD_SpaceRig_C_ShowNextQueuedWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.EnqueueWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UClass>*  WidgetClass                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_HUD_SpaceRig_C::EnqueueWindow(TSoftObjectPtr<class UClass>* WidgetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.EnqueueWindow");

	ABP_HUD_SpaceRig_C_EnqueueWindow_Params params;
	params.WidgetClass = WidgetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.PlayerSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_SpaceRig_C::PlayerSpawned(class APlayerCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.PlayerSpawned");

	ABP_HUD_SpaceRig_C_PlayerSpawned_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnVisibilityChanged
// (Event, Protected, BlueprintEvent)

void ABP_HUD_SpaceRig_C::OnVisibilityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnVisibilityChanged");

	ABP_HUD_SpaceRig_C_OnVisibilityChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_HUD_SpaceRig_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveDestroyed");

	ABP_HUD_SpaceRig_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HUD_SpaceRig_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveBeginPlay");

	ABP_HUD_SpaceRig_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCountdownCompleted
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::OnCountdownCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCountdownCompleted");

	ABP_HUD_SpaceRig_C_OnCountdownCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Update Visibility
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::Update_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Update Visibility");

	ABP_HUD_SpaceRig_C_Update_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Handle Count Down
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::Handle_Count_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Handle Count Down");

	ABP_HUD_SpaceRig_C_Handle_Count_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Campaign Notifications
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::Setup_Campaign_Notifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Campaign Notifications");

	ABP_HUD_SpaceRig_C_Setup_Campaign_Notifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCampaignNotification_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCampaignNotification**  Notification                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_SpaceRig_C::OnCampaignNotification_Event(class UCampaignNotification** Notification)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCampaignNotification_Event");

	ABP_HUD_SpaceRig_C_OnCampaignNotification_Event_Params params;
	params.Notification = Notification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Retirement Shouts
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::Setup_Retirement_Shouts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Retirement Shouts");

	ABP_HUD_SpaceRig_C_Setup_Retirement_Shouts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnEligibleForRetirementAssignment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_GameInstance_C**     GameInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_SpaceRig_C::OnEligibleForRetirementAssignment(class UBP_GameInstance_C** GameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnEligibleForRetirementAssignment");

	ABP_HUD_SpaceRig_C_OnEligibleForRetirementAssignment_Params params;
	params.GameInstance = GameInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Spacerig Notifications
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::Setup_Spacerig_Notifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Spacerig Notifications");

	ABP_HUD_SpaceRig_C_Setup_Spacerig_Notifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup UI Notifications
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::Setup_UI_Notifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup UI Notifications");

	ABP_HUD_SpaceRig_C_Setup_UI_Notifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Promotion Rewards
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::Setup_Promotion_Rewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Promotion Rewards");

	ABP_HUD_SpaceRig_C_Setup_Promotion_Rewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnLastWindowClosed
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::OnLastWindowClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnLastWindowClosed");

	ABP_HUD_SpaceRig_C_OnLastWindowClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup First Infused Core
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::Setup_First_Infused_Core()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup First Infused Core");

	ABP_HUD_SpaceRig_C_Setup_First_Infused_Core_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Pending Rewards
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::Setup_Pending_Rewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Pending Rewards");

	ABP_HUD_SpaceRig_C_Setup_Pending_Rewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup FSD Events
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::Setup_FSD_Events()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup FSD Events");

	ABP_HUD_SpaceRig_C_Setup_FSD_Events_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnFSDEventActiveChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFSDEvent**              InFsdEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InIsActive                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_SpaceRig_C::OnFSDEventActiveChanged(class UFSDEvent** InFsdEvent, bool* InIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnFSDEventActiveChanged");

	ABP_HUD_SpaceRig_C_OnFSDEventActiveChanged_Params params;
	params.InFsdEvent = InFsdEvent;
	params.InIsActive = InIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.SetupTutorialMessage
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::SetupTutorialMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.SetupTutorialMessage");

	ABP_HUD_SpaceRig_C_SetupTutorialMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.CheckForTutorialPrompt
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::CheckForTutorialPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.CheckForTutorialPrompt");

	ABP_HUD_SpaceRig_C_CheckForTutorialPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Stop Check For Tutorial Prompt
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::Stop_Check_For_Tutorial_Prompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Stop Check For Tutorial Prompt");

	ABP_HUD_SpaceRig_C_Stop_Check_For_Tutorial_Prompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Game DLC Announcements
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::Setup_Game_DLC_Announcements()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Game DLC Announcements");

	ABP_HUD_SpaceRig_C_Setup_Game_DLC_Announcements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.CheatMenuRequest
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_SpaceRig_C::CheatMenuRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.CheatMenuRequest");

	ABP_HUD_SpaceRig_C_CheatMenuRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ExecuteUbergraph_BP_HUD_SpaceRig
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_SpaceRig_C::ExecuteUbergraph_BP_HUD_SpaceRig(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ExecuteUbergraph_BP_HUD_SpaceRig");

	ABP_HUD_SpaceRig_C_ExecuteUbergraph_BP_HUD_SpaceRig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
