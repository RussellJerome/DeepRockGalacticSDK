#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Zhukov_IceMines_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Zhukov_IceMines.BP_Zhukov_IceMines_C.OnRep_Ready
struct ABP_Zhukov_IceMines_C_OnRep_Ready_Params
{
};

// Function BP_Zhukov_IceMines.BP_Zhukov_IceMines_C.OnRep_Triggered
struct ABP_Zhukov_IceMines_C_OnRep_Triggered_Params
{
};

// Function BP_Zhukov_IceMines.BP_Zhukov_IceMines_C.UserConstructionScript
struct ABP_Zhukov_IceMines_C_UserConstructionScript_Params
{
};

// Function BP_Zhukov_IceMines.BP_Zhukov_IceMines_C.TriggerExplosion
struct ABP_Zhukov_IceMines_C_TriggerExplosion_Params
{
};

// Function BP_Zhukov_IceMines.BP_Zhukov_IceMines_C.GetArmed
struct ABP_Zhukov_IceMines_C_GetArmed_Params
{
};

// Function BP_Zhukov_IceMines.BP_Zhukov_IceMines_C.BndEvt__Area Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Zhukov_IceMines_C_BndEvt__Area_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Zhukov_IceMines.BP_Zhukov_IceMines_C.ReceiveBeginPlay
struct ABP_Zhukov_IceMines_C_ReceiveBeginPlay_Params
{
};

// Function BP_Zhukov_IceMines.BP_Zhukov_IceMines_C.ExecuteUbergraph_BP_Zhukov_IceMines
struct ABP_Zhukov_IceMines_C_ExecuteUbergraph_BP_Zhukov_IceMines_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
