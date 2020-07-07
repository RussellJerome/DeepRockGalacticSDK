#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_RadarDish01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_RadarDish01.BP_RadarDish01_C.SetRotationRate
struct ABP_RadarDish01_C_SetRotationRate_Params
{
	class URotatingMovementComponent**                 self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             RotationRate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RadarDish01.BP_RadarDish01_C.ReceiveBeginPlay
struct ABP_RadarDish01_C_ReceiveBeginPlay_Params
{
};

// Function BP_RadarDish01.BP_RadarDish01_C.ExecuteUbergraph_BP_RadarDish01
struct ABP_RadarDish01_C_ExecuteUbergraph_BP_RadarDish01_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
