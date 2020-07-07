#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_OldSupplyPod_Salvage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnRep_AllGood
struct ABP_OldSupplyPod_Salvage_C_OnRep_AllGood_Params
{
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnRep_RepairFailed
struct ABP_OldSupplyPod_Salvage_C_OnRep_RepairFailed_Params
{
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.HandleUsableChanged
struct ABP_OldSupplyPod_Salvage_C_HandleUsableChanged_Params
{
	class UPrimitiveComponent**                        UseCollider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent**                     DoorMesh;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.HealUser
struct ABP_OldSupplyPod_Salvage_C_HealUser_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.DisableUsable
struct ABP_OldSupplyPod_Salvage_C_DisableUsable_Params
{
	class UPrimitiveComponent**                        Collider;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent**                     DoorMesh;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.ResupplyUser
struct ABP_OldSupplyPod_Salvage_C_ResupplyUser_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.UserConstructionScript
struct ABP_OldSupplyPod_Salvage_C_UserConstructionScript_Params
{
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature
struct ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature
struct ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature
struct ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature
struct ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.SupplyUsed
struct ABP_OldSupplyPod_Salvage_C_SupplyUsed_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USingleUsableComponent**                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.UsableChanged
struct ABP_OldSupplyPod_Salvage_C_UsableChanged_Params
{
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        UseCollider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent**                     DoorMesh;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature
struct ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature_Params
{
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature
struct ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature_Params
{
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature
struct ABP_OldSupplyPod_Salvage_C_BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature
struct ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature_Params
{
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
struct ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params
{
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.ReceiveBeginPlay
struct ABP_OldSupplyPod_Salvage_C_ReceiveBeginPlay_Params
{
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature
struct ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature_Params
{
	int*                                               userCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature
struct ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature_Params
{
	int*                                               userCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature
struct ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature_Params
{
	int*                                               userCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature
struct ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature_Params
{
	int*                                               userCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.HandleUserCountChanged
struct ABP_OldSupplyPod_Salvage_C_HandleUserCountChanged_Params
{
	int*                                               userCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USingleUsableComponent**                     Usable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent**                     Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature
struct ABP_OldSupplyPod_Salvage_C_BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature_Params
{
	bool*                                              IsFalling;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnDroppodImpact_2
struct ABP_OldSupplyPod_Salvage_C_OnDroppodImpact_2_Params
{
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnTunnelBLocked_2
struct ABP_OldSupplyPod_Salvage_C_OnTunnelBLocked_2_Params
{
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable_FixPod_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature
struct ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable_FixPod_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnSupplyPodFixed
struct ABP_OldSupplyPod_Salvage_C_OnSupplyPodFixed_Params
{
};

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.ExecuteUbergraph_BP_OldSupplyPod_Salvage
struct ABP_OldSupplyPod_Salvage_C_ExecuteUbergraph_BP_OldSupplyPod_Salvage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
