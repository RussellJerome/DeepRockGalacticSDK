#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SentryGun_Moveable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetStateDescription
struct ABP_SentryGun_Moveable_C_GetStateDescription_Params
{
	struct FText                                       Description;                                              // (Parm, OutParm)
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.SpawnAudioOnPlayer
struct ABP_SentryGun_Moveable_C_SpawnAudioOnPlayer_Params
{
	class USoundBase**                                 Audio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGunClass
struct ABP_SentryGun_Moveable_C_GetSentryGunClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryOwner
struct ABP_SentryGun_Moveable_C_GetSentryOwner_Params
{
	class APlayerCharacter*                            AsPlayer_Character;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGun
struct ABP_SentryGun_Moveable_C_GetSentryGun_Params
{
	class ASentryGun*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveBeginPlay
struct ABP_SentryGun_Moveable_C_ReceiveBeginPlay_Params
{
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveRequested
struct ABP_SentryGun_Moveable_C_OnMoveRequested_Params
{
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnStateChanged_Event
struct ABP_SentryGun_Moveable_C_OnStateChanged_Event_Params
{
	class ARedeployableSentryGun**                     Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ERedeployableSentryGunState*                       NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnSentryReady
struct ABP_SentryGun_Moveable_C_ReceiveOnSentryReady_Params
{
	class ASentryGun**                                 SentryGun;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerCharacter**                           PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnAmmoCountChanged_Event_1
struct ABP_SentryGun_Moveable_C_OnAmmoCountChanged_Event_1_Params
{
	int*                                               AmmoCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Change;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReadyToBuild
struct ABP_SentryGun_Moveable_C_AudioReadyToBuild_Params
{
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoving
struct ABP_SentryGun_Moveable_C_OnMoving_Params
{
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveFinished
struct ABP_SentryGun_Moveable_C_OnMoveFinished_Params
{
	bool*                                              returnedHome;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioBeginMove
struct ABP_SentryGun_Moveable_C_AudioBeginMove_Params
{
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioMoveFinished
struct ABP_SentryGun_Moveable_C_AudioMoveFinished_Params
{
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReturnedHome
struct ABP_SentryGun_Moveable_C_AudioReturnedHome_Params
{
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnStateChanged
struct ABP_SentryGun_Moveable_C_ReceiveOnStateChanged_Params
{
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.Update Outline And Icon
struct ABP_SentryGun_Moveable_C_Update_Outline_And_Icon_Params
{
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSentryStateChanged
struct ABP_SentryGun_Moveable_C_OnSentryStateChanged_Params
{
	class ARedeployableSentryGun**                     Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ERedeployableSentryGunState*                       NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnToggleOutline_Event
struct ABP_SentryGun_Moveable_C_OnToggleOutline_Event_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnItemEquipped_Event
struct ABP_SentryGun_Moveable_C_OnItemEquipped_Event_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSelectedItemChanged
struct ABP_SentryGun_Moveable_C_OnSelectedItemChanged_Params
{
	class ARecallableSentryGun**                       SentryGun;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ExecuteUbergraph_BP_SentryGun_Moveable
struct ABP_SentryGun_Moveable_C_ExecuteUbergraph_BP_SentryGun_Moveable_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
