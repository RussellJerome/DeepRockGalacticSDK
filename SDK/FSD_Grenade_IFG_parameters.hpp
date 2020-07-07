#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Grenade_IFG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Grenade_IFG.Grenade_IFG_C.OnRep_stick
struct AGrenade_IFG_C_OnRep_stick_Params
{
};

// Function Grenade_IFG.Grenade_IFG_C.AddGearStateEntries
struct AGrenade_IFG_C_AddGearStateEntries_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Grenade_IFG.Grenade_IFG_C.EnableWeakeningEffect
struct AGrenade_IFG_C_EnableWeakeningEffect_Params
{
};

// Function Grenade_IFG.Grenade_IFG_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
struct AGrenade_IFG_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Grenade_IFG.Grenade_IFG_C.ExecuteUbergraph_Grenade_IFG
struct AGrenade_IFG_C_ExecuteUbergraph_Grenade_IFG_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
