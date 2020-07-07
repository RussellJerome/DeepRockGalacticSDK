#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Kickable_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Kickable_Base.BP_Kickable_Base_C.OnRep_KickSoundLocation
struct ABP_Kickable_Base_C_OnRep_KickSoundLocation_Params
{
};

// Function BP_Kickable_Base.BP_Kickable_Base_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
struct ABP_Kickable_Base_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Kickable_Base.BP_Kickable_Base_C.ReceiveBeginPlay
struct ABP_Kickable_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Kickable_Base.BP_Kickable_Base_C.destroy
struct ABP_Kickable_Base_C_destroy_Params
{
};

// Function BP_Kickable_Base.BP_Kickable_Base_C.DestroyOvertime
struct ABP_Kickable_Base_C_DestroyOvertime_Params
{
};

// Function BP_Kickable_Base.BP_Kickable_Base_C.Play_Kick
struct ABP_Kickable_Base_C_Play_Kick_Params
{
	class APlayerCharacter**                           Kicker;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Kickable_Base.BP_Kickable_Base_C.BndEvt__Kickable Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature
struct ABP_Kickable_Base_C_BndEvt__Kickable_Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Kickable_Base.BP_Kickable_Base_C.Set Is Interactable
struct ABP_Kickable_Base_C_Set_Is_Interactable_Params
{
	bool*                                              Can_interact;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Kickable_Base.BP_Kickable_Base_C.ExecuteUbergraph_BP_Kickable_Base
struct ABP_Kickable_Base_C_ExecuteUbergraph_BP_Kickable_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
