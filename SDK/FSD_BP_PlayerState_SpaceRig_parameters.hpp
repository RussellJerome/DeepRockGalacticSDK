#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PlayerState_SpaceRig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetMissionStatValue
struct ABP_PlayerState_SpaceRig_C_GetMissionStatValue_Params
{
	class UMissionStat**                               MissionStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       StatValue;                                                // (Parm, OutParm)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.SendMissionStatData
struct ABP_PlayerState_SpaceRig_C_SendMissionStatData_Params
{
	class UMissionStat**                               MissionStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UpdateMissionStat
struct ABP_PlayerState_SpaceRig_C_UpdateMissionStat_Params
{
	class UMissionStat**                               MissionStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.IsListeningToMissionStat
struct ABP_PlayerState_SpaceRig_C_IsListeningToMissionStat_Params
{
	class UMissionStat**                               MissionStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasStat;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnRep_MissionStats
struct ABP_PlayerState_SpaceRig_C_OnRep_MissionStats_Params
{
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetHealthInsuranceStatus
struct ABP_PlayerState_SpaceRig_C_GetHealthInsuranceStatus_Params
{
	int                                                HealthInsuranceStatus;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UserConstructionScript
struct ABP_PlayerState_SpaceRig_C_UserConstructionScript_Params
{
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.WatchStat
struct ABP_PlayerState_SpaceRig_C_WatchStat_Params
{
	class UMissionStat**                               MissionStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ReceiveBeginPlay
struct ABP_PlayerState_SpaceRig_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CheckCampaign
struct ABP_PlayerState_SpaceRig_C_CheckCampaign_Params
{
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnMissionStatChanged
struct ABP_PlayerState_SpaceRig_C_OnMissionStatChanged_Params
{
	class UMissionStat**                               MissionStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.Server_UpdateStat
struct ABP_PlayerState_SpaceRig_C_Server_UpdateStat_Params
{
	class UMissionStat**                               Mission_Stat;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Stat_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ExecuteUbergraph_BP_PlayerState_SpaceRig
struct ABP_PlayerState_SpaceRig_C_ExecuteUbergraph_BP_PlayerState_SpaceRig_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnStatChange__DelegateSignature
struct ABP_PlayerState_SpaceRig_C_OnStatChange__DelegateSignature_Params
{
	class UMissionStat**                               MissionStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      StatValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
