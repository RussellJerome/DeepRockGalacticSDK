#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Animation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Animation.BP_Animation_C.GetInitialTransformComponents
struct UBP_Animation_C_GetInitialTransformComponents_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Animation.BP_Animation_C.SetRotationCenter
struct UBP_Animation_C_SetRotationCenter_Params
{
	struct FVector*                                    Pivot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     outCenter;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutCenterLocal;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_Animation.BP_Animation_C.SetAnimation
struct UBP_Animation_C_SetAnimation_Params
{
	struct FDeltaGenTimelineAnimation*                 Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_Animation.BP_Animation_C.ResetTransform
struct UBP_Animation_C_ResetTransform_Params
{
};

// Function BP_Animation.BP_Animation_C.SetLocalTransform
struct UBP_Animation_C_SetLocalTransform_Params
{
	struct FTransform*                                 NewLocalTransform;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Animation.BP_Animation_C.ConvertDeltaGenEulerToRotator
struct UBP_Animation_C_ConvertDeltaGenEulerToRotator_Params
{
	struct FVector*                                    InVec;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Animation.BP_Animation_C.UpdateAnimation
struct UBP_Animation_C_UpdateAnimation_Params
{
	float*                                             Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Animation.BP_Animation_C.ReceiveBeginPlay
struct UBP_Animation_C_ReceiveBeginPlay_Params
{
};

// Function BP_Animation.BP_Animation_C.ExecuteUbergraph_BP_Animation
struct UBP_Animation_C_ExecuteUbergraph_BP_Animation_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
