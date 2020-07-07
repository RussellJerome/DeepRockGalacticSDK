#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Elimination_RadarPoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C.Receive_EncounterHasSpawned
struct ABP_Elimination_RadarPoint_C_Receive_EncounterHasSpawned_Params
{
	class APawn**                                      spawnedPawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C.ReceiveBeginPlay
struct ABP_Elimination_RadarPoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C.ExecuteUbergraph_BP_Elimination_RadarPoint
struct ABP_Elimination_RadarPoint_C_ExecuteUbergraph_BP_Elimination_RadarPoint_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
