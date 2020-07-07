#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_SentryGunWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.IsOutOfAmmo
struct UHUD_SentryGunWidget_C_IsOutOfAmmo_Params
{
	bool                                               OutOfAmmo;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.GetMovementState
struct UHUD_SentryGunWidget_C_GetMovementState_Params
{
	ERecallableActorState                              State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry
struct UHUD_SentryGunWidget_C_Set_Sentry_Params
{
	class ARecallableSentryGun**                       Sentry_Gun;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry Home
struct UHUD_SentryGunWidget_C_Set_Sentry_Home_Params
{
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.On Ammo Count Changed
struct UHUD_SentryGunWidget_C_On_Ammo_Count_Changed_Params
{
	int*                                               AmmoCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Change;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Init
struct UHUD_SentryGunWidget_C_Init_Params
{
	class UInventoryComponent**                        Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ARecallableSentryGunItem**                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnActiveItemsChanged
struct UHUD_SentryGunWidget_C_OnActiveItemsChanged_Params
{
	class ARecallableSentryGunItem**                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnStateChanged
struct UHUD_SentryGunWidget_C_OnStateChanged_Params
{
	class ARecallableActor**                           Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ERecallableActorState*                             State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Update State
struct UHUD_SentryGunWidget_C_Update_State_Params
{
	class FString*                                     reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.PreConstruct
struct UHUD_SentryGunWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnSelectedItemChanged
struct UHUD_SentryGunWidget_C_OnSelectedItemChanged_Params
{
	class ARecallableSentryGun**                       SentryGun;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Selected
struct UHUD_SentryGunWidget_C_Set_Selected_Params
{
	bool*                                              Is_Selected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnItemEquipped
struct UHUD_SentryGunWidget_C_OnItemEquipped_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnGunStateChanged
struct UHUD_SentryGunWidget_C_OnGunStateChanged_Params
{
	class ARedeployableSentryGun**                     Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ERedeployableSentryGunState*                       NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Check For Ammo Depletion
struct UHUD_SentryGunWidget_C_Check_For_Ammo_Depletion_Params
{
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnDeployProgress_Event
struct UHUD_SentryGunWidget_C_OnDeployProgress_Event_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Construct
struct UHUD_SentryGunWidget_C_Construct_Params
{
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnAmmoDepletedFinished
struct UHUD_SentryGunWidget_C_OnAmmoDepletedFinished_Params
{
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnItemUnequipped_Event
struct UHUD_SentryGunWidget_C_OnItemUnequipped_Event_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.ExecuteUbergraph_HUD_SentryGunWidget
struct UHUD_SentryGunWidget_C_ExecuteUbergraph_HUD_SentryGunWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnSentryStateChanged__DelegateSignature
struct UHUD_SentryGunWidget_C_OnSentryStateChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
