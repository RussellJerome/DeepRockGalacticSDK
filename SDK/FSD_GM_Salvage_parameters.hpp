#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_GM_Salvage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GM_Salvage.GM_Salvage_C.UpdateFailsafeMollyCounters
struct AGM_Salvage_C_UpdateFailsafeMollyCounters_Params
{
	struct FVector*                                    v2;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GM_Salvage.GM_Salvage_C.SpawnRepairPoints
struct AGM_Salvage_C_SpawnRepairPoints_Params
{
};

// Function GM_Salvage.GM_Salvage_C.EnableNextRepairPoint
struct AGM_Salvage_C_EnableNextRepairPoint_Params
{
};

// Function GM_Salvage.GM_Salvage_C.AllMulesSalvaged
struct AGM_Salvage_C_AllMulesSalvaged_Params
{
	TArray<class AActor*>*                             Mules;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GM_Salvage.GM_Salvage_C.OnLevelGenerationComplete
struct AGM_Salvage_C_OnLevelGenerationComplete_Params
{
	int*                                               pass;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GM_Salvage.GM_Salvage_C.Call DropPod
struct AGM_Salvage_C_Call_DropPod_Params
{
};

// Function GM_Salvage.GM_Salvage_C.DonkeyButtonPressed
struct AGM_Salvage_C_DonkeyButtonPressed_Params
{
};

// Function GM_Salvage.GM_Salvage_C.ReachedDropShip
struct AGM_Salvage_C_ReachedDropShip_Params
{
};

// Function GM_Salvage.GM_Salvage_C.RepairPoint_Repaired
struct AGM_Salvage_C_RepairPoint_Repaired_Params
{
	class AActor**                                     RepairPoint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GM_Salvage.GM_Salvage_C.DefendFail
struct AGM_Salvage_C_DefendFail_Params
{
};

// Function GM_Salvage.GM_Salvage_C.DefendDone
struct AGM_Salvage_C_DefendDone_Params
{
};

// Function GM_Salvage.GM_Salvage_C.SetObjective
struct AGM_Salvage_C_SetObjective_Params
{
	class UOBJ_1st_Salvage_C**                         Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GM_Salvage.GM_Salvage_C.OnCountdownFinished
struct AGM_Salvage_C_OnCountdownFinished_Params
{
};

// Function GM_Salvage.GM_Salvage_C.Countdowncomplete
struct AGM_Salvage_C_Countdowncomplete_Params
{
};

// Function GM_Salvage.GM_Salvage_C.ActivateDonkeyButton
struct AGM_Salvage_C_ActivateDonkeyButton_Params
{
};

// Function GM_Salvage.GM_Salvage_C.ExecuteUbergraph_GM_Salvage
struct AGM_Salvage_C_ExecuteUbergraph_GM_Salvage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
