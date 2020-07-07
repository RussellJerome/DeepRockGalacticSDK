#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_SentryTrackingIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.SetInfo
struct UHUD_SentryTrackingIcon_C_SetInfo_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.PreConstruct
struct UHUD_SentryTrackingIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.UpdateArrow
struct UHUD_SentryTrackingIcon_C_UpdateArrow_Params
{
	bool*                                              inView;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnShow
struct UHUD_SentryTrackingIcon_C_OnShow_Params
{
};

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.Construct
struct UHUD_SentryTrackingIcon_C_Construct_Params
{
};

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnItemEquipped
struct UHUD_SentryTrackingIcon_C_OnItemEquipped_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.Update State
struct UHUD_SentryTrackingIcon_C_Update_State_Params
{
};

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSentryIndexChanged
struct UHUD_SentryTrackingIcon_C_OnSentryIndexChanged_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnInViewChanged
struct UHUD_SentryTrackingIcon_C_OnInViewChanged_Params
{
	bool*                                              inView;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnAmmoCountChanged
struct UHUD_SentryTrackingIcon_C_OnAmmoCountChanged_Params
{
	int*                                               AmmoCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Change;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnTargetSet
struct UHUD_SentryTrackingIcon_C_OnTargetSet_Params
{
	class AActor**                                     NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSelectedItemChanged_Event
struct UHUD_SentryTrackingIcon_C_OnSelectedItemChanged_Event_Params
{
	class ARecallableSentryGun**                       SentryGun;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnDeployProgress_Event
struct UHUD_SentryTrackingIcon_C_OnDeployProgress_Event_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSentryGunStateChanged
struct UHUD_SentryTrackingIcon_C_OnSentryGunStateChanged_Params
{
	class ARedeployableSentryGun**                     Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ERedeployableSentryGunState*                       NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnTargetDistanceChanged
struct UHUD_SentryTrackingIcon_C_OnTargetDistanceChanged_Params
{
	float*                                             distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnRecallableStateChanged
struct UHUD_SentryTrackingIcon_C_OnRecallableStateChanged_Params
{
	class ARecallableActor**                           Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ERecallableActorState*                             State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.ExecuteUbergraph_HUD_SentryTrackingIcon
struct UHUD_SentryTrackingIcon_C_ExecuteUbergraph_HUD_SentryTrackingIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
