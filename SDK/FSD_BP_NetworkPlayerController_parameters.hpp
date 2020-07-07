#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_NetworkPlayerController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Mixer Enemy Spawn Event
struct ABP_NetworkPlayerController_C_Mixer_Enemy_Spawn_Event_Params
{
	class FString*                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               Cooldown;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UClass>*                      Enemy_Type_To_Spawn;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Amount_To_Spawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     MixerUser;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText*                                      FormatableAnnounceText;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CollapseAndRemoveFromParent
struct ABP_NetworkPlayerController_C_CollapseAndRemoveFromParent_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.GetLoaderScreenUIClass
struct ABP_NetworkPlayerController_C_GetLoaderScreenUIClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CleanupUI
struct ABP_NetworkPlayerController_C_CleanupUI_Params
{
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CalcMixerName
struct ABP_NetworkPlayerController_C_CalcMixerName_Params
{
	int*                                               ParticipantID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.GetNonTakenHero
struct ABP_NetworkPlayerController_C_GetNonTakenHero_Params
{
	class UClass*                                      SelectedClass;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_giveHealth_Pressed_ID0
struct ABP_NetworkPlayerController_C_MixerButtonEvt_giveHealth_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnDreadnought_Pressed_ID0
struct ABP_NetworkPlayerController_C_MixerButtonEvt_spawnDreadnought_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawn3Praetorians_Pressed_ID0
struct ABP_NetworkPlayerController_C_MixerButtonEvt_spawn3Praetorians_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_giveNitra_Pressed_ID0
struct ABP_NetworkPlayerController_C_MixerButtonEvt_giveNitra_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_giveAmmo_Pressed_ID0
struct ABP_NetworkPlayerController_C_MixerButtonEvt_giveAmmo_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnLootBug_Pressed_ID0
struct ABP_NetworkPlayerController_C_MixerButtonEvt_spawnLootBug_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnAGrunt_Pressed_ID0
struct ABP_NetworkPlayerController_C_MixerButtonEvt_spawnAGrunt_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnMSpawn_Pressed_ID0
struct ABP_NetworkPlayerController_C_MixerButtonEvt_spawnMSpawn_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnMBomber_Pressed_ID0
struct ABP_NetworkPlayerController_C_MixerButtonEvt_spawnMBomber_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnMGrabber_Pressed_ID0
struct ABP_NetworkPlayerController_C_MixerButtonEvt_spawnMGrabber_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnAcidSpitter_Pressed_ID0
struct ABP_NetworkPlayerController_C_MixerButtonEvt_spawnAcidSpitter_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnWebSpitter_Pressed_ID0
struct ABP_NetworkPlayerController_C_MixerButtonEvt_spawnWebSpitter_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnShellback_Pressed_ID0
struct ABP_NetworkPlayerController_C_MixerButtonEvt_spawnShellback_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ReceiveBeginPlay
struct ABP_NetworkPlayerController_C_ReceiveBeginPlay_Params
{
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnBack
struct ABP_NetworkPlayerController_C_OnBack_Params
{
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnPlayerCharacterPossesed_Event
struct ABP_NetworkPlayerController_C_OnPlayerCharacterPossesed_Event_Params
{
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_RequestNonTakenHero
struct ABP_NetworkPlayerController_C_Server_RequestNonTakenHero_Params
{
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Client_RecieveNonTakenHero
struct ABP_NetworkPlayerController_C_Client_RecieveNonTakenHero_Params
{
	class UClass**                                     New_Character;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_Mixer_GiveHealth
struct ABP_NetworkPlayerController_C_Server_Mixer_GiveHealth_Params
{
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_SetCharacterSelected
struct ABP_NetworkPlayerController_C_Server_SetCharacterSelected_Params
{
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ResupplyServer
struct ABP_NetworkPlayerController_C_ResupplyServer_Params
{
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.RecievePreClientTravel
struct ABP_NetworkPlayerController_C_RecievePreClientTravel_Params
{
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Set Mixer Button CoolDown
struct ABP_NetworkPlayerController_C_Set_Mixer_Button_CoolDown_Params
{
	class FString*                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               Cooldown;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ReceiveDestroyed
struct ABP_NetworkPlayerController_C_ReceiveDestroyed_Params
{
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ShowReconnect
struct ABP_NetworkPlayerController_C_ShowReconnect_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ExecuteUbergraph_BP_NetworkPlayerController
struct ABP_NetworkPlayerController_C_ExecuteUbergraph_BP_NetworkPlayerController_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
