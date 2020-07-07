#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BarrelSpawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BarrelSpawner.BP_BarrelSpawner_C.OnRep_BarrelCount
struct ABP_BarrelSpawner_C_OnRep_BarrelCount_Params
{
};

// Function BP_BarrelSpawner.BP_BarrelSpawner_C.ReceiveBeginPlay
struct ABP_BarrelSpawner_C_ReceiveBeginPlay_Params
{
};

// Function BP_BarrelSpawner.BP_BarrelSpawner_C.SpawnBarrel
struct ABP_BarrelSpawner_C_SpawnBarrel_Params
{
};

// Function BP_BarrelSpawner.BP_BarrelSpawner_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct ABP_BarrelSpawner_C_BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BarrelSpawner.BP_BarrelSpawner_C.Reset
struct ABP_BarrelSpawner_C_Reset_Params
{
};

// Function BP_BarrelSpawner.BP_BarrelSpawner_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_BarrelSpawner_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BarrelSpawner.BP_BarrelSpawner_C.OnBarrelKicked
struct ABP_BarrelSpawner_C_OnBarrelKicked_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BarrelSpawner.BP_BarrelSpawner_C.ExecuteUbergraph_BP_BarrelSpawner
struct ABP_BarrelSpawner_C_ExecuteUbergraph_BP_BarrelSpawner_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BarrelSpawner.BP_BarrelSpawner_C.OnSpawnBarrelKicked__DelegateSignature
struct ABP_BarrelSpawner_C_OnSpawnBarrelKicked__DelegateSignature_Params
{
	class APlayerCharacter**                           Kicked_by;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
