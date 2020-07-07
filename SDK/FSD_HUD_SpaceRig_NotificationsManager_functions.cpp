// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_SpaceRig_NotificationsManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_SpaceRig_NotificationsManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.Construct");

	UHUD_SpaceRig_NotificationsManager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CheckForNewNotifications
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFSDGameInstance**       GameInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SpaceRig_NotificationsManager_C::CheckForNewNotifications(class UFSDGameInstance** GameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CheckForNewNotifications");

	UHUD_SpaceRig_NotificationsManager_C_CheckForNewNotifications_Params params;
	params.GameInstance = GameInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CreateNotificationWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSpaceRigNotification*  Notification                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_SpaceRig_NotificationsManager_C::CreateNotificationWidget(struct FSpaceRigNotification* Notification)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CreateNotificationWidget");

	UHUD_SpaceRig_NotificationsManager_C_CreateNotificationWidget_Params params;
	params.Notification = Notification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CheckCraftingNotification
// (BlueprintCallable, BlueprintEvent)

void UHUD_SpaceRig_NotificationsManager_C::CheckCraftingNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CheckCraftingNotification");

	UHUD_SpaceRig_NotificationsManager_C_CheckCraftingNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.ExecuteUbergraph_HUD_SpaceRig_NotificationsManager
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SpaceRig_NotificationsManager_C::ExecuteUbergraph_HUD_SpaceRig_NotificationsManager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.ExecuteUbergraph_HUD_SpaceRig_NotificationsManager");

	UHUD_SpaceRig_NotificationsManager_C_ExecuteUbergraph_HUD_SpaceRig_NotificationsManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
