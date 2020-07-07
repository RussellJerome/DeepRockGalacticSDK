#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Gem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Gem.BP_Gem_C.ReleaseToWorld
struct ABP_Gem_C_ReleaseToWorld_Params
{
};

// Function BP_Gem.BP_Gem_C.SetPickedUp
struct ABP_Gem_C_SetPickedUp_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gem.BP_Gem_C.PointCleared
struct ABP_Gem_C_PointCleared_Params
{
};

// Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature
struct ABP_Gem_C_BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature_Params
{
};

// Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature
struct ABP_Gem_C_BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature_Params
{
};

// Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature
struct ABP_Gem_C_BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature_Params
{
};

// Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature
struct ABP_Gem_C_BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature_Params
{
};

// Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature
struct ABP_Gem_C_BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature_Params
{
};

// Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect5_K2Node_ComponentBoundEvent_6_PointRemovedEvent__DelegateSignature
struct ABP_Gem_C_BndEvt__TerrainDetect5_K2Node_ComponentBoundEvent_6_PointRemovedEvent__DelegateSignature_Params
{
};

// Function BP_Gem.BP_Gem_C.All_PlayDugFree
struct ABP_Gem_C_All_PlayDugFree_Params
{
};

// Function BP_Gem.BP_Gem_C.BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature
struct ABP_Gem_C_BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Gem.BP_Gem_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature
struct ABP_Gem_C_BndEvt__Carriable_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature_Params
{
};

// Function BP_Gem.BP_Gem_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature
struct ABP_Gem_C_BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature_Params
{
};

// Function BP_Gem.BP_Gem_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
struct ABP_Gem_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gem.BP_Gem_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
struct ABP_Gem_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params
{
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gem.BP_Gem_C.Throw
struct ABP_Gem_C_Throw_Params
{
	struct FVector*                                    force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gem.BP_Gem_C.ReceiveBeginPlay
struct ABP_Gem_C_ReceiveBeginPlay_Params
{
};

// Function BP_Gem.BP_Gem_C.Receive_OnDeposited
struct ABP_Gem_C_Receive_OnDeposited_Params
{
};

// Function BP_Gem.BP_Gem_C.ExecuteUbergraph_BP_Gem
struct ABP_Gem_C_ExecuteUbergraph_BP_Gem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
