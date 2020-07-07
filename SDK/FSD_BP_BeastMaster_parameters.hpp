#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BeastMaster_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BeastMaster.BP_BeastMaster_C.UpdateHoldProgress
struct UBP_BeastMaster_C_UpdateHoldProgress_Params
{
};

// Function BP_BeastMaster.BP_BeastMaster_C.GetPlayerController
struct UBP_BeastMaster_C_GetPlayerController_Params
{
	class AFSDPlayerController*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BeastMaster.BP_BeastMaster_C.SetupStatusEffects
struct UBP_BeastMaster_C_SetupStatusEffects_Params
{
	class ASpiderEnemy**                               enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BeastMaster.BP_BeastMaster_C.GetPlayerCharacter
struct UBP_BeastMaster_C_GetPlayerCharacter_Params
{
	class APlayerCharacter*                            AsPlayer_Character;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BeastMaster.BP_BeastMaster_C.GetPerk
struct UBP_BeastMaster_C_GetPerk_Params
{
	class UFloatPerkAsset*                             Perks_Beast_Master;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BeastMaster.BP_BeastMaster_C.CanBefriend
struct UBP_BeastMaster_C_CanBefriend_Params
{
	class ASpiderEnemy**                               enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BeastMaster.BP_BeastMaster_C.OnLoaded_8AE17C7C4ABC357330FD319C5F5E7796
struct UBP_BeastMaster_C_OnLoaded_8AE17C7C4ABC357330FD319C5F5E7796_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BeastMaster.BP_BeastMaster_C.ReceiveBeginPlay
struct UBP_BeastMaster_C_ReceiveBeginPlay_Params
{
};

// Function BP_BeastMaster.BP_BeastMaster_C.OnTargetChanged
struct UBP_BeastMaster_C_OnTargetChanged_Params
{
	class AActor**                                     NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        NewPrimitive;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BeastMaster.BP_BeastMaster_C.BeginBeastMasterActivation
struct UBP_BeastMaster_C_BeginBeastMasterActivation_Params
{
};

// Function BP_BeastMaster.BP_BeastMaster_C.Server_Befriend
struct UBP_BeastMaster_C_Server_Befriend_Params
{
	class ASpiderEnemy**                               Spider;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BeastMaster.BP_BeastMaster_C.Setup Shouts
struct UBP_BeastMaster_C_Setup_Shouts_Params
{
};

// Function BP_BeastMaster.BP_BeastMaster_C.OnFriendedEnemyDeath
struct UBP_BeastMaster_C_OnFriendedEnemyDeath_Params
{
	class UHealthComponentBase**                       HealthComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BeastMaster.BP_BeastMaster_C.EndBeastMasterActivation
struct UBP_BeastMaster_C_EndBeastMasterActivation_Params
{
};

// Function BP_BeastMaster.BP_BeastMaster_C.ExecuteUbergraph_BP_BeastMaster
struct UBP_BeastMaster_C_ExecuteUbergraph_BP_BeastMaster_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
