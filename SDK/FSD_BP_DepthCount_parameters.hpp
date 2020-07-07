#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DepthCount_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DepthCount.BP_DepthCount_C.ReceiveTick
struct ABP_DepthCount_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DepthCount.BP_DepthCount_C.ReceiveBeginPlay
struct ABP_DepthCount_C_ReceiveBeginPlay_Params
{
};

// Function BP_DepthCount.BP_DepthCount_C.ExecuteUbergraph_BP_DepthCount
struct ABP_DepthCount_C_ExecuteUbergraph_BP_DepthCount_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
