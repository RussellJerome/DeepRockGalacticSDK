#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PlayerState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerState.BP_PlayerState_C.GetDeepDiveCreditsReward
struct ABP_PlayerState_C_GetDeepDiveCreditsReward_Params
{
	int*                                               StagesCompleted;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               goldCollected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCreditsReward>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerState.BP_PlayerState_C.GetXPRewardDeepDive
struct ABP_PlayerState_C_GetXPRewardDeepDive_Params
{
	int*                                               StagesCompleted;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FXPReward>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerState.BP_PlayerState_C.GetRessupyBeaconClass
struct ABP_PlayerState_C_GetRessupyBeaconClass_Params
{
	class UClass*                                      PodSpawnClass;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.GetRessuplySpawnClass
struct ABP_PlayerState_C_GetRessuplySpawnClass_Params
{
	class UClass*                                      PodSpawnClass;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.SpawnPlayerInPod
struct ABP_PlayerState_C_SpawnPlayerInPod_Params
{
	class AFSDPlayerController**                       Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.SpawnPlayerDirectly
struct ABP_PlayerState_C_SpawnPlayerDirectly_Params
{
	class AController**                                Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.GetXPRewardsCustom
struct ABP_PlayerState_C_GetXPRewardsCustom_Params
{
	TMap<class UResourceData*, float>*                 Resources;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               EnemiesKilled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FailPrimaryObjectiveCompleted;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FailSecondaryObjectiveCompleted;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FXPReward>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerState.BP_PlayerState_C.OnLoaded_E2B28351414D5B2A20966496F0955946
struct ABP_PlayerState_C_OnLoaded_E2B28351414D5B2A20966496F0955946_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.OnLoaded_97A4F0694E71C770F24EA6A654B14857
struct ABP_PlayerState_C_OnLoaded_97A4F0694E71C770F24EA6A654B14857_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.OnLateJoinFinished
struct ABP_PlayerState_C_OnLateJoinFinished_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.ReceiveBeginPlay
struct ABP_PlayerState_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.LogState
struct ABP_PlayerState_C_LogState_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.CharacterSelected
struct ABP_PlayerState_C_CharacterSelected_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.TestLatjoin
struct ABP_PlayerState_C_TestLatjoin_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.RespawnPlayer
struct ABP_PlayerState_C_RespawnPlayer_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.ExecuteUbergraph_BP_PlayerState
struct ABP_PlayerState_C_ExecuteUbergraph_BP_PlayerState_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
