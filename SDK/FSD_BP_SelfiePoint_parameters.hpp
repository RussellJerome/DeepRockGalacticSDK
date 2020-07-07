#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SelfiePoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SelfiePoint.BP_SelfiePoint_C.GetTargetTransform
struct UBP_SelfiePoint_C_GetTargetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_SelfiePoint.BP_SelfiePoint_C.DeactivateCamera
struct UBP_SelfiePoint_C_DeactivateCamera_Params
{
};

// Function BP_SelfiePoint.BP_SelfiePoint_C.ActivateCamera
struct UBP_SelfiePoint_C_ActivateCamera_Params
{
};

// Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveBeginPlay
struct UBP_SelfiePoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveTick
struct UBP_SelfiePoint_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SelfiePoint.BP_SelfiePoint_C.ExecuteUbergraph_BP_SelfiePoint
struct UBP_SelfiePoint_C_ExecuteUbergraph_BP_SelfiePoint_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
