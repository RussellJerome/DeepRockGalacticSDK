#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_GameState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GameState.BP_GameState_C.GetPlayableCharacters
struct ABP_GameState_C_GetPlayableCharacters_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_GameState.BP_GameState_C.GetRandomIntialHero
struct ABP_GameState_C_GetRandomIntialHero_Params
{
	class UClass*                                      HeroClass;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameState.BP_GameState_C.UserConstructionScript
struct ABP_GameState_C_UserConstructionScript_Params
{
};

// Function BP_GameState.BP_GameState_C.ReceiveBeginPlay
struct ABP_GameState_C_ReceiveBeginPlay_Params
{
};

// Function BP_GameState.BP_GameState_C.StartGame
struct ABP_GameState_C_StartGame_Params
{
};

// Function BP_GameState.BP_GameState_C.HandleSeamlessTravelEvent
struct ABP_GameState_C_HandleSeamlessTravelEvent_Params
{
};

// Function BP_GameState.BP_GameState_C.ReceiveTick
struct ABP_GameState_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameState.BP_GameState_C.ExecuteUbergraph_BP_GameState
struct ABP_GameState_C_ExecuteUbergraph_BP_GameState_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
