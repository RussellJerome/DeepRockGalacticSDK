#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BRT_Bomb_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BRT_Bomb.BP_BRT_Bomb_C.OnRep_Ready
struct ABP_BRT_Bomb_C_OnRep_Ready_Params
{
};

// Function BP_BRT_Bomb.BP_BRT_Bomb_C.OnRep_Triggered
struct ABP_BRT_Bomb_C_OnRep_Triggered_Params
{
};

// Function BP_BRT_Bomb.BP_BRT_Bomb_C.UserConstructionScript
struct ABP_BRT_Bomb_C_UserConstructionScript_Params
{
};

// Function BP_BRT_Bomb.BP_BRT_Bomb_C.TriggerExplosion
struct ABP_BRT_Bomb_C_TriggerExplosion_Params
{
};

// Function BP_BRT_Bomb.BP_BRT_Bomb_C.GetArmed
struct ABP_BRT_Bomb_C_GetArmed_Params
{
};

// Function BP_BRT_Bomb.BP_BRT_Bomb_C.BndEvt__Area Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_BRT_Bomb_C_BndEvt__Area_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BRT_Bomb.BP_BRT_Bomb_C.ReceiveBeginPlay
struct ABP_BRT_Bomb_C_ReceiveBeginPlay_Params
{
};

// Function BP_BRT_Bomb.BP_BRT_Bomb_C.ExecuteUbergraph_BP_BRT_Bomb
struct ABP_BRT_Bomb_C_ExecuteUbergraph_BP_BRT_Bomb_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
