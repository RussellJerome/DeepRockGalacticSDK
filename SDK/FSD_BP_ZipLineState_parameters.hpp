#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ZipLineState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ZipLineState.BP_ZipLineState_C.GetJumpVector
struct UBP_ZipLineState_C_GetJumpVector_Params
{
	struct FVector*                                    LookVector;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    CurrentVelocity;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ZipLineState.BP_ZipLineState_C.ReceiveSpeedBoostActivated
struct UBP_ZipLineState_C_ReceiveSpeedBoostActivated_Params
{
};

// Function BP_ZipLineState.BP_ZipLineState_C.ReceiveSpeedBoostDeactivated
struct UBP_ZipLineState_C_ReceiveSpeedBoostDeactivated_Params
{
};

// Function BP_ZipLineState.BP_ZipLineState_C.ExecuteUbergraph_BP_ZipLineState
struct UBP_ZipLineState_C_ExecuteUbergraph_BP_ZipLineState_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
