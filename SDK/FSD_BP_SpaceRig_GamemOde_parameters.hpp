#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SpaceRig_GamemOde_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.PlayerCanRestart
struct ABP_SpaceRig_Gamemode_C_PlayerCanRestart_Params
{
	class APlayerController**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SendMissionStartAnalytics
struct ABP_SpaceRig_Gamemode_C_SendMissionStartAnalytics_Params
{
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FindOwnedCabin
struct ABP_SpaceRig_Gamemode_C_FindOwnedCabin_Params
{
	class AController**                                Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_CabinController_C*                       Cabin;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FreeCabin
struct ABP_SpaceRig_Gamemode_C_FreeCabin_Params
{
	class ABP_PlayerController_SpaceRig_C**            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.AssignCabin
struct ABP_SpaceRig_Gamemode_C_AssignCabin_Params
{
	class AController**                                Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_CabinController_C*                       Cabin;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FindCabins
struct ABP_SpaceRig_Gamemode_C_FindCabins_Params
{
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SelectRandomAvailableClass
struct ABP_SpaceRig_Gamemode_C_SelectRandomAvailableClass_Params
{
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ChoosePlayerStart
struct ABP_SpaceRig_Gamemode_C_ChoosePlayerStart_Params
{
	class AController**                                Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetGameState
struct ABP_SpaceRig_Gamemode_C_GetGameState_Params
{
	class ABP_GameState_SpaceRig_C*                    GameState;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetDefaultPawnClassForController
struct ABP_SpaceRig_Gamemode_C_GetDefaultPawnClassForController_Params
{
	class AController**                                InController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55
struct ABP_SpaceRig_Gamemode_C_OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55_Params
{
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55
struct ABP_SpaceRig_Gamemode_C_OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55_Params
{
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ReceiveBeginPlay
struct ABP_SpaceRig_Gamemode_C_ReceiveBeginPlay_Params
{
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnCountdownComplete
struct ABP_SpaceRig_Gamemode_C_OnCountdownComplete_Params
{
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnLogout
struct ABP_SpaceRig_Gamemode_C_K2_OnLogout_Params
{
	class AController**                                ExitingController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnRestartPlayer
struct ABP_SpaceRig_Gamemode_C_K2_OnRestartPlayer_Params
{
	class AController**                                NewPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ControllerReady
struct ABP_SpaceRig_Gamemode_C_ControllerReady_Params
{
	class AFSDPlayerController**                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.InstantlyStartMission
struct ABP_SpaceRig_Gamemode_C_InstantlyStartMission_Params
{
};

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ExecuteUbergraph_BP_SpaceRig_Gamemode
struct ABP_SpaceRig_Gamemode_C_ExecuteUbergraph_BP_SpaceRig_Gamemode_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
