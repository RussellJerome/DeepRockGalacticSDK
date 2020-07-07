#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SupplyPod_Spawn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_RemoveDoorsIfTheyAreNotPushed
struct ABP_SupplyPod_Spawn_C_OnRep_RemoveDoorsIfTheyAreNotPushed_Params
{
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_LightsOff
struct ABP_SupplyPod_Spawn_C_OnRep_LightsOff_Params
{
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.DoorSlamAudio
struct ABP_SupplyPod_Spawn_C_DoorSlamAudio_Params
{
	class UPrimitiveComponent**                        Prim;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.FindNearestPlayer
struct ABP_SupplyPod_Spawn_C_FindNearestPlayer_Params
{
	class APlayerCharacter**                           FromCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerCharacter*                            OutNearestPlayer;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.PushDoor
struct ABP_SupplyPod_Spawn_C_PushDoor_Params
{
	class UPrimitiveComponent**                        Prim;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_SidesDestroyed
struct ABP_SupplyPod_Spawn_C_OnRep_SidesDestroyed_Params
{
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_RocksParticlesDisabled
struct ABP_SupplyPod_Spawn_C_OnRep_RocksParticlesDisabled_Params
{
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_Character
struct ABP_SupplyPod_Spawn_C_OnRep_Character_Params
{
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.Timeline_0__FinishedFunc
struct ABP_SupplyPod_Spawn_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.Timeline_0__UpdateFunc
struct ABP_SupplyPod_Spawn_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnDropStarted
struct ABP_SupplyPod_Spawn_C_OnDropStarted_Params
{
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.ReceiveTick
struct ABP_SupplyPod_Spawn_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnDroppodCloseToImpact
struct ABP_SupplyPod_Spawn_C_OnDroppodCloseToImpact_Params
{
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnDroppodImpact
struct ABP_SupplyPod_Spawn_C_OnDroppodImpact_Params
{
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.Test Drop Pod
struct ABP_SupplyPod_Spawn_C_Test_Drop_Pod_Params
{
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.ReceiveBeginPlay
struct ABP_SupplyPod_Spawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.HandleWelcomeShouting
struct ABP_SupplyPod_Spawn_C_HandleWelcomeShouting_Params
{
	class APlayerCharacter**                           LateJoinCharacter;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_SupplyPod_Spawn_C_BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box_Front_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
struct ABP_SupplyPod_Spawn_C_BndEvt__Box_Front_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box_Back_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
struct ABP_SupplyPod_Spawn_C_BndEvt__Box_Back_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box_Left_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature
struct ABP_SupplyPod_Spawn_C_BndEvt__Box_Left_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.CameraShake
struct ABP_SupplyPod_Spawn_C_CameraShake_Params
{
	class UClass**                                     Shake;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraAnimPlaySpace>*                 PlaySpace;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   UserPlaySpaceRot;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.SetController
struct ABP_SupplyPod_Spawn_C_SetController_Params
{
	class AFSDPlayerController**                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.ExecuteUbergraph_BP_SupplyPod_Spawn
struct ABP_SupplyPod_Spawn_C_ExecuteUbergraph_BP_SupplyPod_Spawn_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
