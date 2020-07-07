#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ShieldRegenerator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.ReturnHome
struct ABP_ShieldRegenerator_C_ReturnHome_Params
{
};

// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.SetScale
struct ABP_ShieldRegenerator_C_SetScale_Params
{
	float*                                             Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.RemovePlayer
struct ABP_ShieldRegenerator_C_RemovePlayer_Params
{
	class APlayerCharacter**                           Player;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.AddPlayer
struct ABP_ShieldRegenerator_C_AddPlayer_Params
{
	class APlayerCharacter**                           Player;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.UserConstructionScript
struct ABP_ShieldRegenerator_C_UserConstructionScript_Params
{
};

// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.IntroAnim__FinishedFunc
struct ABP_ShieldRegenerator_C_IntroAnim__FinishedFunc_Params
{
};

// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.IntroAnim__UpdateFunc
struct ABP_ShieldRegenerator_C_IntroAnim__UpdateFunc_Params
{
};

// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ShieldRegenerator_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_ShieldRegenerator_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.AllBeginDestroy
struct ABP_ShieldRegenerator_C_AllBeginDestroy_Params
{
};

// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.ReceiveHitObject
struct ABP_ShieldRegenerator_C_ReceiveHitObject_Params
{
};

// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.ReceiveBeginPlay
struct ABP_ShieldRegenerator_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.BndEvt__FleeCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ShieldRegenerator_C_BndEvt__FleeCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.Failsafe Hit Object
struct ABP_ShieldRegenerator_C_Failsafe_Hit_Object_Params
{
};

// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.ExecuteUbergraph_BP_ShieldRegenerator
struct ABP_ShieldRegenerator_C_ExecuteUbergraph_BP_ShieldRegenerator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
