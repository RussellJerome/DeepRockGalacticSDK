#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_GameMode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GameMode.BP_GameMode_C.TryPreloadCheatMenu
struct ABP_GameMode_C_TryPreloadCheatMenu_Params
{
};

// Function BP_GameMode.BP_GameMode_C.GetEscapepodLocation
struct ABP_GameMode_C_GetEscapepodLocation_Params
{
	struct FTransform                                  Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_GameMode.BP_GameMode_C.EnableMuleButton
struct ABP_GameMode_C_EnableMuleButton_Params
{
};

// Function BP_GameMode.BP_GameMode_C.DestroyNetworkedActors
struct ABP_GameMode_C_DestroyNetworkedActors_Params
{
};

// Function BP_GameMode.BP_GameMode_C.LoadToMission
struct ABP_GameMode_C_LoadToMission_Params
{
	class UMissionTemplate**                           mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameMode.BP_GameMode_C.GetDefaultPawnClassForController
struct ABP_GameMode_C_GetDefaultPawnClassForController_Params
{
	class AController**                                InController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GameMode.BP_GameMode_C.SetDesiredDifficulty
struct ABP_GameMode_C_SetDesiredDifficulty_Params
{
};

// Function BP_GameMode.BP_GameMode_C.ChoosePlayerStart
struct ABP_GameMode_C_ChoosePlayerStart_Params
{
	class AController**                                Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GameMode.BP_GameMode_C.RecieveEndLevel
struct ABP_GameMode_C_RecieveEndLevel_Params
{
};

// Function BP_GameMode.BP_GameMode_C.ReceiveBeginPlay
struct ABP_GameMode_C_ReceiveBeginPlay_Params
{
};

// Function BP_GameMode.BP_GameMode_C.WaitForGeneration
struct ABP_GameMode_C_WaitForGeneration_Params
{
};

// Function BP_GameMode.BP_GameMode_C.Recieve_ContinueTimerEnded
struct ABP_GameMode_C_Recieve_ContinueTimerEnded_Params
{
};

// Function BP_GameMode.BP_GameMode_C.Call DropPod
struct ABP_GameMode_C_Call_DropPod_Params
{
};

// Function BP_GameMode.BP_GameMode_C.Trigger End Wave
struct ABP_GameMode_C_Trigger_End_Wave_Params
{
	bool*                                              cancelAllWaves;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameMode.BP_GameMode_C.SpawnBosco
struct ABP_GameMode_C_SpawnBosco_Params
{
	struct FTransform*                                 Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_GameMode.BP_GameMode_C.RemoveBosco
struct ABP_GameMode_C_RemoveBosco_Params
{
};

// Function BP_GameMode.BP_GameMode_C.Handle Bosco Respawn
struct ABP_GameMode_C_Handle_Bosco_Respawn_Params
{
};

// Function BP_GameMode.BP_GameMode_C.OnPlayerLeave
struct ABP_GameMode_C_OnPlayerLeave_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameMode.BP_GameMode_C.SpawnAtLocation
struct ABP_GameMode_C_SpawnAtLocation_Params
{
	struct FTransform*                                 Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_GameMode.BP_GameMode_C.Loaded
struct ABP_GameMode_C_Loaded_Params
{
};

// Function BP_GameMode.BP_GameMode_C.DonkeyButtonPressed
struct ABP_GameMode_C_DonkeyButtonPressed_Params
{
};

// Function BP_GameMode.BP_GameMode_C.LoadSpaceRig
struct ABP_GameMode_C_LoadSpaceRig_Params
{
};

// Function BP_GameMode.BP_GameMode_C.ExecuteUbergraph_BP_GameMode
struct ABP_GameMode_C_ExecuteUbergraph_BP_GameMode_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
