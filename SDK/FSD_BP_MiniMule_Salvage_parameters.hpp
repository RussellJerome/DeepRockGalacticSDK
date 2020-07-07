#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_MiniMule_Salvage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.TryDestroyComponent
struct ABP_MiniMule_Salvage_C_TryDestroyComponent_Params
{
	class UActorComponent**                            Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.GetState
struct ABP_MiniMule_Salvage_C_GetState_Params
{
	TEnumAsByte<EMiniMule_State>                       NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.SetState
struct ABP_MiniMule_Salvage_C_SetState_Params
{
	TEnumAsByte<EMiniMule_State>*                      EnumValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.UserConstructionScript
struct ABP_MiniMule_Salvage_C_UserConstructionScript_Params
{
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Sphere Timeline__FinishedFunc
struct ABP_MiniMule_Salvage_C_Sphere_Timeline__FinishedFunc_Params
{
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Sphere Timeline__UpdateFunc
struct ABP_MiniMule_Salvage_C_Sphere_Timeline__UpdateFunc_Params
{
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Intensity__FinishedFunc
struct ABP_MiniMule_Salvage_C_Intensity__FinishedFunc_Params
{
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Intensity__UpdateFunc
struct ABP_MiniMule_Salvage_C_Intensity__UpdateFunc_Params
{
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.GotoDropPod
struct ABP_MiniMule_Salvage_C_GotoDropPod_Params
{
	struct FVector*                                    DroppodLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Cheat_TeleportPlayer
struct ABP_MiniMule_Salvage_C_Cheat_TeleportPlayer_Params
{
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.ReceiveBeginPlay
struct ABP_MiniMule_Salvage_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniMule_Salvage_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
struct ABP_MiniMule_Salvage_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Stop Beacon
struct ABP_MiniMule_Salvage_C_Stop_Beacon_Params
{
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Cheat_Repair
struct ABP_MiniMule_Salvage_C_Cheat_Repair_Params
{
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature
struct ABP_MiniMule_Salvage_C_BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature_Params
{
	class URepairableComponent**                       Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature
struct ABP_MiniMule_Salvage_C_BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature_Params
{
	class URepairableComponent**                       Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_2_RepairedDelegate__DelegateSignature
struct ABP_MiniMule_Salvage_C_BndEvt__Repairable_K2Node_ComponentBoundEvent_2_RepairedDelegate__DelegateSignature_Params
{
	class URepairableComponent**                       Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__RepairableUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
struct ABP_MiniMule_Salvage_C_BndEvt__RepairableUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.OnMessageAI
struct ABP_MiniMule_Salvage_C_OnMessageAI_Params
{
	struct FName*                                      TriggerName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.OnFallToTerrainStateChanged
struct ABP_MiniMule_Salvage_C_OnFallToTerrainStateChanged_Params
{
	bool*                                              IsFalling;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.ExecuteUbergraph_BP_MiniMule_Salvage
struct ABP_MiniMule_Salvage_C_ExecuteUbergraph_BP_MiniMule_Salvage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
