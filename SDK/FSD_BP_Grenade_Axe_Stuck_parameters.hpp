#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Grenade_Axe_Stuck_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_StandOnMe
struct ABP_Grenade_Axe_Stuck_C_OnRep_StandOnMe_Params
{
};

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_AxeGrenadeItem
struct ABP_Grenade_Axe_Stuck_C_OnRep_AxeGrenadeItem_Params
{
};

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.UserConstructionScript
struct ABP_Grenade_Axe_Stuck_C_UserConstructionScript_Params
{
};

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.PickUpAxe
struct ABP_Grenade_Axe_Stuck_C_PickUpAxe_Params
{
	class AThrownGrenadeItem**                         ThrownGrenadeItem;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.Detach Axe
struct ABP_Grenade_Axe_Stuck_C_Detach_Axe_Params
{
};

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.Attach
struct ABP_Grenade_Axe_Stuck_C_Attach_Params
{
	class AActor**                                     ParentActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            ParentComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      ParentSocketName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CanRetrieve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnDestroyed_Event
struct ABP_Grenade_Axe_Stuck_C_OnDestroyed_Event_Params
{
	class AActor**                                     DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnDeath_Event
struct ABP_Grenade_Axe_Stuck_C_OnDeath_Event_Params
{
	class UHealthComponentBase**                       HealthComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.GoPhysical
struct ABP_Grenade_Axe_Stuck_C_GoPhysical_Params
{
	bool*                                              PassThrough;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CanRetrieve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.MakeStandable
struct ABP_Grenade_Axe_Stuck_C_MakeStandable_Params
{
	bool*                                              CanRetrieve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.SetRetrieval
struct ABP_Grenade_Axe_Stuck_C_SetRetrieval_Params
{
	bool*                                              CanRetrieve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature
struct ABP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
struct ABP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params
{
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.ExecuteUbergraph_BP_Grenade_Axe_Stuck
struct ABP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
