#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SupplyPod_Ammo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandlePhotosentitivity
struct ABP_SupplyPod_Ammo_C_HandlePhotosentitivity_Params
{
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandleUsableChanged
struct ABP_SupplyPod_Ammo_C_HandleUsableChanged_Params
{
	class UPrimitiveComponent**                        UseCollider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent**                     DoorMesh;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HealUser
struct ABP_SupplyPod_Ammo_C_HealUser_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.DisableUsable
struct ABP_SupplyPod_Ammo_C_DisableUsable_Params
{
	class UPrimitiveComponent**                        Collider;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent**                     DoorMesh;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ResupplyUser
struct ABP_SupplyPod_Ammo_C_ResupplyUser_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UserConstructionScript
struct ABP_SupplyPod_Ammo_C_UserConstructionScript_Params
{
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDroppodImpact
struct ABP_SupplyPod_Ammo_C_OnDroppodImpact_Params
{
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDropStarted
struct ABP_SupplyPod_Ammo_C_OnDropStarted_Params
{
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ReceiveTick
struct ABP_SupplyPod_Ammo_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
struct ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params
{
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature
struct ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature_Params
{
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature
struct ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature_Params
{
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature
struct ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature_Params
{
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature
struct ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature
struct ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature
struct ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature
struct ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnTunnelBLocked
struct ABP_SupplyPod_Ammo_C_OnTunnelBLocked_Params
{
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.SupplyUsed
struct ABP_SupplyPod_Ammo_C_SupplyUsed_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USingleUsableComponent**                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UsableChanged
struct ABP_SupplyPod_Ammo_C_UsableChanged_Params
{
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        UseCollider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent**                     DoorMesh;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature
struct ABP_SupplyPod_Ammo_C_BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ReceiveBeginPlay
struct ABP_SupplyPod_Ammo_C_ReceiveBeginPlay_Params
{
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature
struct ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature_Params
{
	int*                                               userCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature
struct ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature_Params
{
	int*                                               userCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature
struct ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature_Params
{
	int*                                               userCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature
struct ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature_Params
{
	int*                                               userCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandleUserCountChanged
struct ABP_SupplyPod_Ammo_C_HandleUserCountChanged_Params
{
	int*                                               userCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USingleUsableComponent**                     Usable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent**                     Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature
struct ABP_SupplyPod_Ammo_C_BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature_Params
{
	bool*                                              IsFalling;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ExecuteUbergraph_BP_SupplyPod_Ammo
struct ABP_SupplyPod_Ammo_C_ExecuteUbergraph_BP_SupplyPod_Ammo_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
