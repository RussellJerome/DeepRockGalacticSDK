#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SpiderEgg_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.GetEliminationObjective
struct ABP_SpiderEgg_Base_C_GetEliminationObjective_Params
{
	class UEliminationObjective*                       AsElimination_Objective;                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ReceiveBeginPlay
struct ABP_SpiderEgg_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature
struct ABP_SpiderEgg_Base_C_BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature_Params
{
};

// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnEggBroken
struct ABP_SpiderEgg_Base_C_OnEggBroken_Params
{
};

// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnTerrainPointRemoved
struct ABP_SpiderEgg_Base_C_OnTerrainPointRemoved_Params
{
};

// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnPlayerProximityChanged
struct ABP_SpiderEgg_Base_C_OnPlayerProximityChanged_Params
{
	class APlayerCharacter**                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              enteredTrigger;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.CrackEgg
struct ABP_SpiderEgg_Base_C_CrackEgg_Params
{
};

// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
struct ABP_SpiderEgg_Base_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature_Params
{
	class UHealthComponentBase**                       HealthComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ChainReaction
struct ABP_SpiderEgg_Base_C_ChainReaction_Params
{
};

// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ExecuteUbergraph_BP_SpiderEgg_Base
struct ABP_SpiderEgg_Base_C_ExecuteUbergraph_BP_SpiderEgg_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
