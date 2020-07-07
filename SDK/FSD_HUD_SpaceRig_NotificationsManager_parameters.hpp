#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_SpaceRig_NotificationsManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.Construct
struct UHUD_SpaceRig_NotificationsManager_C_Construct_Params
{
};

// Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CheckForNewNotifications
struct UHUD_SpaceRig_NotificationsManager_C_CheckForNewNotifications_Params
{
	class UFSDGameInstance**                           GameInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CreateNotificationWidget
struct UHUD_SpaceRig_NotificationsManager_C_CreateNotificationWidget_Params
{
	struct FSpaceRigNotification*                      Notification;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CheckCraftingNotification
struct UHUD_SpaceRig_NotificationsManager_C_CheckCraftingNotification_Params
{
};

// Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.ExecuteUbergraph_HUD_SpaceRig_NotificationsManager
struct UHUD_SpaceRig_NotificationsManager_C_ExecuteUbergraph_HUD_SpaceRig_NotificationsManager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
