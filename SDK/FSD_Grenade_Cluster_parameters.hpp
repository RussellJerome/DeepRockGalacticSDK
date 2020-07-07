#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Grenade_Cluster_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Grenade_Cluster.Grenade_Cluster_C.AddGearStateEntries
struct AGrenade_Cluster_C_AddGearStateEntries_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Grenade_Cluster.Grenade_Cluster_C.OnExploded
struct AGrenade_Cluster_C_OnExploded_Params
{
};

// Function Grenade_Cluster.Grenade_Cluster_C.ExecuteUbergraph_Grenade_Cluster
struct AGrenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
