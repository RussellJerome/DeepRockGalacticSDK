#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Count_Randoms_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Count_Randoms.BP_Count_Randoms_C.ReceiveTick
struct ABP_Count_Randoms_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Count_Randoms.BP_Count_Randoms_C.ReceiveBeginPlay
struct ABP_Count_Randoms_C_ReceiveBeginPlay_Params
{
};

// Function BP_Count_Randoms.BP_Count_Randoms_C.ExecuteUbergraph_BP_Count_Randoms
struct ABP_Count_Randoms_C_ExecuteUbergraph_BP_Count_Randoms_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
