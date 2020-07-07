#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Phys_Barrel01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.OnRep_KickSoundLocation
struct ABP_Phys_Barrel01_C_OnRep_KickSoundLocation_Params
{
};

// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_Phys_Barrel01_C_BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
struct ABP_Phys_Barrel01_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.ReceiveBeginPlay
struct ABP_Phys_Barrel01_C_ReceiveBeginPlay_Params
{
};

// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.destroy
struct ABP_Phys_Barrel01_C_destroy_Params
{
};

// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.DestroyOvertime
struct ABP_Phys_Barrel01_C_DestroyOvertime_Params
{
};

// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.Play_Kick
struct ABP_Phys_Barrel01_C_Play_Kick_Params
{
	class APlayerCharacter**                           Kicker;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Phys_Barrel01_C_BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Phys_Barrel01_C_BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.Spawn Bronzehead Effects
struct ABP_Phys_Barrel01_C_Spawn_Bronzehead_Effects_Params
{
};

// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.ExecuteUbergraph_BP_Phys_Barrel01
struct ABP_Phys_Barrel01_C_ExecuteUbergraph_BP_Phys_Barrel01_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
