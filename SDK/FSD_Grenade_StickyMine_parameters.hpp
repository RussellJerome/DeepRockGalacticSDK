#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Grenade_StickyMine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Dead
struct AGrenade_StickyMine_C_OnRep_Dead_Params
{
};

// Function Grenade_StickyMine.Grenade_StickyMine_C.AddGearStateEntries
struct AGrenade_StickyMine_C_AddGearStateEntries_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Armed
struct AGrenade_StickyMine_C_OnRep_Armed_Params
{
};

// Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Triggered
struct AGrenade_StickyMine_C_OnRep_Triggered_Params
{
};

// Function Grenade_StickyMine.Grenade_StickyMine_C.UserConstructionScript
struct AGrenade_StickyMine_C_UserConstructionScript_Params
{
};

// Function Grenade_StickyMine.Grenade_StickyMine_C.RingPulse__FinishedFunc
struct AGrenade_StickyMine_C_RingPulse__FinishedFunc_Params
{
};

// Function Grenade_StickyMine.Grenade_StickyMine_C.RingPulse__UpdateFunc
struct AGrenade_StickyMine_C_RingPulse__UpdateFunc_Params
{
};

// Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct AGrenade_StickyMine_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AGrenade_StickyMine_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Grenade_StickyMine.Grenade_StickyMine_C.TriggerExplosion
struct AGrenade_StickyMine_C_TriggerExplosion_Params
{
};

// Function Grenade_StickyMine.Grenade_StickyMine_C.GetArmed
struct AGrenade_StickyMine_C_GetArmed_Params
{
};

// Function Grenade_StickyMine.Grenade_StickyMine_C.DoTriggerAreaPulse
struct AGrenade_StickyMine_C_DoTriggerAreaPulse_Params
{
};

// Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
struct AGrenade_StickyMine_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Grenade_StickyMine.Grenade_StickyMine_C.DisarmMine
struct AGrenade_StickyMine_C_DisarmMine_Params
{
	class AThrownGrenadeItem**                         ThrownGrenadeItem;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Grenade_StickyMine.Grenade_StickyMine_C.KillMine
struct AGrenade_StickyMine_C_KillMine_Params
{
};

// Function Grenade_StickyMine.Grenade_StickyMine_C.ExplodeLast
struct AGrenade_StickyMine_C_ExplodeLast_Params
{
};

// Function Grenade_StickyMine.Grenade_StickyMine_C.ExecuteUbergraph_Grenade_StickyMine
struct AGrenade_StickyMine_C_ExecuteUbergraph_Grenade_StickyMine_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
