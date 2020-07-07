#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_GameState_SpaceRig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.AreDeepDiveRequirementsMet
struct ABP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.HandleActiveCountdown
struct ABP_GameState_SpaceRig_C_HandleActiveCountdown_Params
{
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_HostCountdown
struct ABP_GameState_SpaceRig_C_OnRep_HostCountdown_Params
{
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_HostCountdownActive
struct ABP_GameState_SpaceRig_C_OnRep_HostCountdownActive_Params
{
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_MissionTimerActive
struct ABP_GameState_SpaceRig_C_OnRep_MissionTimerActive_Params
{
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_MissionCountdown
struct ABP_GameState_SpaceRig_C_OnRep_MissionCountdown_Params
{
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRefresh_3EF307534AC5AC56C0D60384C554CF10
struct ABP_GameState_SpaceRig_C_OnRefresh_3EF307534AC5AC56C0D60384C554CF10_Params
{
	TArray<struct FBlueprintSessionResult>*            Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnFailure_3EF307534AC5AC56C0D60384C554CF10
struct ABP_GameState_SpaceRig_C_OnFailure_3EF307534AC5AC56C0D60384C554CF10_Params
{
	TArray<struct FBlueprintSessionResult>*            Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnSuccess_3EF307534AC5AC56C0D60384C554CF10
struct ABP_GameState_SpaceRig_C_OnSuccess_3EF307534AC5AC56C0D60384C554CF10_Params
{
	TArray<struct FBlueprintSessionResult>*            Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveTick
struct ABP_GameState_SpaceRig_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StartMissionTimer
struct ABP_GameState_SpaceRig_C_StartMissionTimer_Params
{
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StopMissionTimer
struct ABP_GameState_SpaceRig_C_StopMissionTimer_Params
{
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StartHostTimer
struct ABP_GameState_SpaceRig_C_StartHostTimer_Params
{
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StopHostTimer
struct ABP_GameState_SpaceRig_C_StopHostTimer_Params
{
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.CountDownCompleted
struct ABP_GameState_SpaceRig_C_CountDownCompleted_Params
{
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveBeginPlay
struct ABP_GameState_SpaceRig_C_ReceiveBeginPlay_Params
{
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.Search
struct ABP_GameState_SpaceRig_C_Search_Params
{
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveGeneratedMissionReplicated
struct ABP_GameState_SpaceRig_C_ReceiveGeneratedMissionReplicated_Params
{
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ManualRefreshServerList
struct ABP_GameState_SpaceRig_C_ManualRefreshServerList_Params
{
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.Shout_Cooldown_Started
struct ABP_GameState_SpaceRig_C_Shout_Cooldown_Started_Params
{
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ExecuteUbergraph_BP_GameState_SpaceRig
struct ABP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnCountdownChanged__DelegateSignature
struct ABP_GameState_SpaceRig_C_OnCountdownChanged__DelegateSignature_Params
{
	bool*                                              active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnServerListChanged__DelegateSignature
struct ABP_GameState_SpaceRig_C_OnServerListChanged__DelegateSignature_Params
{
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMissionTimerChanged__DelegateSignature
struct ABP_GameState_SpaceRig_C_OnMissionTimerChanged__DelegateSignature_Params
{
	float*                                             newTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnHostTimerChanged__DelegateSignature
struct ABP_GameState_SpaceRig_C_OnHostTimerChanged__DelegateSignature_Params
{
	float*                                             newTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnCountdownCompleted__DelegateSignature
struct ABP_GameState_SpaceRig_C_OnCountdownCompleted__DelegateSignature_Params
{
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnHostCountdownChanged__DelegateSignature
struct ABP_GameState_SpaceRig_C_OnHostCountdownChanged__DelegateSignature_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMissionCountdownChanged__DelegateSignature
struct ABP_GameState_SpaceRig_C_OnMissionCountdownChanged__DelegateSignature_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMisionSelected__DelegateSignature
struct ABP_GameState_SpaceRig_C_OnMisionSelected__DelegateSignature_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
