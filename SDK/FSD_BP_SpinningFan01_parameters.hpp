#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SpinningFan01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SpinningFan01.BP_SpinningFan01_C.SetSpeed
struct ABP_SpinningFan01_C_SetSpeed_Params
{
	float*                                             Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpinningFan01.BP_SpinningFan01_C.ReceiveBeginPlay
struct ABP_SpinningFan01_C_ReceiveBeginPlay_Params
{
};

// Function BP_SpinningFan01.BP_SpinningFan01_C.ExecuteUbergraph_BP_SpinningFan01
struct ABP_SpinningFan01_C_ExecuteUbergraph_BP_SpinningFan01_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
