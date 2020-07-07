#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_TeamDisplay_SmallItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.ShowDynamicHUD
struct UHUD_TeamDisplay_SmallItem_C_ShowDynamicHUD_Params
{
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnVisibilityModeChanged
struct UHUD_TeamDisplay_SmallItem_C_OnVisibilityModeChanged_Params
{
	class UHUDVisibilityGroup**                        Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EHUDVisibilityMode*                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerNameChanged
struct UHUD_TeamDisplay_SmallItem_C_OnPlayerNameChanged_Params
{
	class FString*                                     NewName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerLeave_Event
struct UHUD_TeamDisplay_SmallItem_C_OnPlayerLeave_Event_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerCharacterSpawned
struct UHUD_TeamDisplay_SmallItem_C_OnPlayerCharacterSpawned_Params
{
	class APlayerCharacter**                           PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.StopAnim
struct UHUD_TeamDisplay_SmallItem_C_StopAnim_Params
{
	class UWidgetAnimation**                           Anim;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDeath
struct UHUD_TeamDisplay_SmallItem_C_OnDeath_Params
{
	class UHealthComponentBase**                       HealthComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDamageTaken_Event
struct UHUD_TeamDisplay_SmallItem_C_OnDamageTaken_Event_Params
{
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnHealthChanged
struct UHUD_TeamDisplay_SmallItem_C_OnHealthChanged_Params
{
	float*                                             Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnCharacterStateChanged
struct UHUD_TeamDisplay_SmallItem_C_OnCharacterStateChanged_Params
{
	ECharacterState*                                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.PlayAnim
struct UHUD_TeamDisplay_SmallItem_C_PlayAnim_Params
{
	class UWidgetAnimation**                           Anim;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnTalkingChanged
struct UHUD_TeamDisplay_SmallItem_C_OnTalkingChanged_Params
{
	bool*                                              IsTalking;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnOwningCharacterSpawned
struct UHUD_TeamDisplay_SmallItem_C_OnOwningCharacterSpawned_Params
{
	class APlayerCharacter**                           PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.Construct
struct UHUD_TeamDisplay_SmallItem_C_Construct_Params
{
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnCharacterStateChanged_Event
struct UHUD_TeamDisplay_SmallItem_C_OnCharacterStateChanged_Event_Params
{
	ECharacterState*                                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDownCameraTargetChanged
struct UHUD_TeamDisplay_SmallItem_C_OnDownCameraTargetChanged_Params
{
	class APlayerCharacter**                           Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnLaserPointerReleased_Event
struct UHUD_TeamDisplay_SmallItem_C_OnLaserPointerReleased_Event_Params
{
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnLaserPointerPressed_Event
struct UHUD_TeamDisplay_SmallItem_C_OnLaserPointerPressed_Event_Params
{
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.Show Ammo Bar
struct UHUD_TeamDisplay_SmallItem_C_Show_Ammo_Bar_Params
{
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnEndHoveringEvent_Event
struct UHUD_TeamDisplay_SmallItem_C_OnEndHoveringEvent_Event_Params
{
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnBeginHoveringEvent
struct UHUD_TeamDisplay_SmallItem_C_OnBeginHoveringEvent_Params
{
	class UUsableComponentBase**                       Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.PreConstruct
struct UHUD_TeamDisplay_SmallItem_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnSupplyStatusChangedEvent
struct UHUD_TeamDisplay_SmallItem_C_OnSupplyStatusChangedEvent_Params
{
	float*                                             ammoStatus01;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             healthStatus01;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.ExecuteUbergraph_HUD_TeamDisplay_SmallItem
struct UHUD_TeamDisplay_SmallItem_C_ExecuteUbergraph_HUD_TeamDisplay_SmallItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
