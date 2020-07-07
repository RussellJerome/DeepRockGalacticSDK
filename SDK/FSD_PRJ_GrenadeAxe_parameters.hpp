#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_GrenadeAxe_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.UserConstructionScript
struct APRJ_GrenadeAxe_C_UserConstructionScript_Params
{
};

// Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.OnImpacted
struct APRJ_GrenadeAxe_C_OnImpacted_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.Discharge
struct APRJ_GrenadeAxe_C_Discharge_Params
{
	class AActor**                                     HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UFSDPhysicalMaterial**                       HitPhysMat;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.BluntDamage
struct APRJ_GrenadeAxe_C_BluntDamage_Params
{
};

// Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.ReceiveBeginPlay
struct APRJ_GrenadeAxe_C_ReceiveBeginPlay_Params
{
};

// Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.BndEvt__KillSmallShits Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct APRJ_GrenadeAxe_C_BndEvt__KillSmallShits_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.ExecuteUbergraph_PRJ_GrenadeAxe
struct APRJ_GrenadeAxe_C_ExecuteUbergraph_PRJ_GrenadeAxe_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
