#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Grenade_IFG_Area_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.PushMixAtDistance
struct ABP_Grenade_IFG_Area_Base_C_PushMixAtDistance_Params
{
	float*                                             Max_Distance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Min_Distance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.OnRep_Actice
struct ABP_Grenade_IFG_Area_Base_C_OnRep_Actice_Params
{
};

// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.UserConstructionScript
struct ABP_Grenade_IFG_Area_Base_C_UserConstructionScript_Params
{
};

// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.ReceiveBeginPlay
struct ABP_Grenade_IFG_Area_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature
struct ABP_Grenade_IFG_Area_Base_C_BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature_Params
{
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              entered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.ActiveWeakeningEffect
struct ABP_Grenade_IFG_Area_Base_C_ActiveWeakeningEffect_Params
{
};

// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Grenade_IFG_Area_Base_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Grenade_IFG_Area_Base_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.ExecuteUbergraph_BP_Grenade_IFG_Area_Base
struct ABP_Grenade_IFG_Area_Base_C_ExecuteUbergraph_BP_Grenade_IFG_Area_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
