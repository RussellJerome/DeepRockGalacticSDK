#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Bosco_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Bosco.BP_Bosco_C.Handle Projectile diffs
struct ABP_Bosco_C_Handle_Projectile_diffs_Params
{
	struct FGearStatEntry*                             Gear_stat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	EItemPreviewStatus*                                Cryo_upgrade_preview_status;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDamageUpgrade*                                    damage_upgrade_type;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            FSD_player_state;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGearStatEntry                              gear_stat_out;                                            // (Parm, OutParm)
};

// Function BP_Bosco.BP_Bosco_C.GetGearStatEntry
struct ABP_Bosco_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Bosco.BP_Bosco_C.ScareEffect
struct ABP_Bosco_C_ScareEffect_Params
{
};

// Function BP_Bosco.BP_Bosco_C.OnTriggerAI
struct ABP_Bosco_C_OnTriggerAI_Params
{
	struct FName*                                      TriggerName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Bosco.BP_Bosco_C.SelfDestruct
struct ABP_Bosco_C_SelfDestruct_Params
{
};

// Function BP_Bosco.BP_Bosco_C.StateChanged
struct ABP_Bosco_C_StateChanged_Params
{
	EDroneAIState*                                     aCurrentState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Bosco.BP_Bosco_C.OnMessageAI
struct ABP_Bosco_C_OnMessageAI_Params
{
	struct FName*                                      TriggerName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Bosco.BP_Bosco_C.ReceiveBeginPlay
struct ABP_Bosco_C_ReceiveBeginPlay_Params
{
};

// Function BP_Bosco.BP_Bosco_C.ExecuteUbergraph_BP_Bosco
struct ABP_Bosco_C_ExecuteUbergraph_BP_Bosco_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
