#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ShieldRegenerator_Mover_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.FindTakeOffPoint
struct ABP_ShieldRegenerator_Mover_C_FindTakeOffPoint_Params
{
	struct FVector                                     TakeOffPoint;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.MoveToInstigator
struct ABP_ShieldRegenerator_Mover_C_MoveToInstigator_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.LiftOff__FinishedFunc
struct ABP_ShieldRegenerator_Mover_C_LiftOff__FinishedFunc_Params
{
};

// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.LiftOff__UpdateFunc
struct ABP_ShieldRegenerator_Mover_C_LiftOff__UpdateFunc_Params
{
};

// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.ReceiveBeginPlay
struct ABP_ShieldRegenerator_Mover_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.All_LiftOff
struct ABP_ShieldRegenerator_Mover_C_All_LiftOff_Params
{
	struct FVector*                                    InHoverPoint;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature
struct ABP_ShieldRegenerator_Mover_C_BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature_Params
{
	EDeepMovementState*                                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.Begin Lift Off Effects
struct ABP_ShieldRegenerator_Mover_C_Begin_Lift_Off_Effects_Params
{
};

// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_1_PathFinished__DelegateSignature
struct ABP_ShieldRegenerator_Mover_C_BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_1_PathFinished__DelegateSignature_Params
{
	bool*                                              success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.Begin Move To Actor
struct ABP_ShieldRegenerator_Mover_C_Begin_Move_To_Actor_Params
{
	class AActor**                                     InTargetActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.OnReturned
struct ABP_ShieldRegenerator_Mover_C_OnReturned_Params
{
};

// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.ExecuteUbergraph_BP_ShieldRegenerator_Mover
struct ABP_ShieldRegenerator_Mover_C_ExecuteUbergraph_BP_ShieldRegenerator_Mover_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
