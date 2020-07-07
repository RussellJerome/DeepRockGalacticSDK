#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Portal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Portal.BP_Portal_C.ReceiveBeginPlay
struct ABP_Portal_C_ReceiveBeginPlay_Params
{
};

// Function BP_Portal.BP_Portal_C.ReceiveActorBeginOverlap
struct ABP_Portal_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Portal.BP_Portal_C.ReceiveTick
struct ABP_Portal_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Portal.BP_Portal_C.ExecuteUbergraph_BP_Portal
struct ABP_Portal_C_ExecuteUbergraph_BP_Portal_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
