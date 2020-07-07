#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_HUD.BP_HUD_C.IsInitialized
struct ABP_HUD_C_IsInitialized_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD.BP_HUD_C.CreateQuickCheatsIfNotCreated
struct ABP_HUD_C_CreateQuickCheatsIfNotCreated_Params
{
};

// Function BP_HUD.BP_HUD_C.PushEvent
struct ABP_HUD_C_PushEvent_Params
{
	class UWidget**                                    EventWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Left;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD.BP_HUD_C.CreateCheatsIfNotCreated
struct ABP_HUD_C_CreateCheatsIfNotCreated_Params
{
};

// Function BP_HUD.BP_HUD_C.RemoveAllWidgetsFromParents
struct ABP_HUD_C_RemoveAllWidgetsFromParents_Params
{
};

// Function BP_HUD.BP_HUD_C.AddAllWidgetToViewport
struct ABP_HUD_C_AddAllWidgetToViewport_Params
{
};

// Function BP_HUD.BP_HUD_C.AddWidget
struct ABP_HUD_C_AddWidget_Params
{
	class UClass**                                     Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_HUD.BP_HUD_C.OnLoaded_73E4B65F44516401F86CB88F7530B278
struct ABP_HUD_C_OnLoaded_73E4B65F44516401F86CB88F7530B278_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD.BP_HUD_C.PlayerSpawned
struct ABP_HUD_C_PlayerSpawned_Params
{
	class APlayerCharacter**                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD.BP_HUD_C.RadarPointAdded
struct ABP_HUD_C_RadarPointAdded_Params
{
	class URadarPointComponent**                       radarPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_HUD.BP_HUD_C.HandleSeamlessTravel
struct ABP_HUD_C_HandleSeamlessTravel_Params
{
};

// Function BP_HUD.BP_HUD_C.OnVisibilityChanged
struct ABP_HUD_C_OnVisibilityChanged_Params
{
};

// Function BP_HUD.BP_HUD_C.ReceiveDestroyed
struct ABP_HUD_C_ReceiveDestroyed_Params
{
};

// Function BP_HUD.BP_HUD_C.OnHit_Event
struct ABP_HUD_C_OnHit_Event_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageClass**                               DamageClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              anyHealthLost;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD.BP_HUD_C.OnEndLevelReceived_Event
struct ABP_HUD_C_OnEndLevelReceived_Event_Params
{
};

// Function BP_HUD.BP_HUD_C.OnShowMainMenu
struct ABP_HUD_C_OnShowMainMenu_Params
{
};

// Function BP_HUD.BP_HUD_C.QuickCheatMenuRequest
struct ABP_HUD_C_QuickCheatMenuRequest_Params
{
};

// Function BP_HUD.BP_HUD_C.CheatMenuRequest
struct ABP_HUD_C_CheatMenuRequest_Params
{
};

// Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD
struct ABP_HUD_C_ExecuteUbergraph_BP_HUD_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
