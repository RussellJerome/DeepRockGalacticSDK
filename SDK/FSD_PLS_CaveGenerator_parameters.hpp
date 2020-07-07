#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PLS_CaveGenerator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PLS_CaveGenerator.PLS_CaveGenerator_C.CreateCaveGraph
struct APLS_CaveGenerator_C_CreateCaveGraph_Params
{
};

// Function PLS_CaveGenerator.PLS_CaveGenerator_C.SpawnDropPod
struct APLS_CaveGenerator_C_SpawnDropPod_Params
{
};

// Function PLS_CaveGenerator.PLS_CaveGenerator_C.ExecuteUbergraph_PLS_CaveGenerator
struct APLS_CaveGenerator_C_ExecuteUbergraph_PLS_CaveGenerator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
