#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_SentryGunManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_SentryGunManager.HUD_SentryGunManager_C.ItemEquipped
struct UHUD_SentryGunManager_C_ItemEquipped_Params
{
	bool                                               IsEquipped;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunManager.HUD_SentryGunManager_C.OutOfAmmo
struct UHUD_SentryGunManager_C_OutOfAmmo_Params
{
	bool                                               OutOfAmmo;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunManager.HUD_SentryGunManager_C.PreConstruct
struct UHUD_SentryGunManager_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunManager.HUD_SentryGunManager_C.AddSentry
struct UHUD_SentryGunManager_C_AddSentry_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunManager.HUD_SentryGunManager_C.Construct
struct UHUD_SentryGunManager_C_Construct_Params
{
};

// Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemsLoaded
struct UHUD_SentryGunManager_C_OnItemsLoaded_Params
{
};

// Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnActiveItemsChanged
struct UHUD_SentryGunManager_C_OnActiveItemsChanged_Params
{
	class ARecallableSentryGunItem**                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemCurrentAmountChanged
struct UHUD_SentryGunManager_C_OnItemCurrentAmountChanged_Params
{
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunManager.HUD_SentryGunManager_C.Update Dynamic Visibility
struct UHUD_SentryGunManager_C_Update_Dynamic_Visibility_Params
{
};

// Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnSentryStateChanged_Event
struct UHUD_SentryGunManager_C_OnSentryStateChanged_Event_Params
{
};

// Function HUD_SentryGunManager.HUD_SentryGunManager_C.Setup Dynamic Visibility
struct UHUD_SentryGunManager_C_Setup_Dynamic_Visibility_Params
{
};

// Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnLaserPointerPressed_Event
struct UHUD_SentryGunManager_C_OnLaserPointerPressed_Event_Params
{
};

// Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnLaserPointerReleased_Event
struct UHUD_SentryGunManager_C_OnLaserPointerReleased_Event_Params
{
};

// Function HUD_SentryGunManager.HUD_SentryGunManager_C.ExecuteUbergraph_HUD_SentryGunManager
struct UHUD_SentryGunManager_C_ExecuteUbergraph_HUD_SentryGunManager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
