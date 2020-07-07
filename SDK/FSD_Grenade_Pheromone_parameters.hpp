#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Grenade_Pheromone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Grenade_Pheromone.Grenade_Pheromone_C.AddGearStateEntries
struct AGrenade_Pheromone_C_AddGearStateEntries_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Grenade_Pheromone.Grenade_Pheromone_C.OnExploded
struct AGrenade_Pheromone_C_OnExploded_Params
{
};

// Function Grenade_Pheromone.Grenade_Pheromone_C.ApplyPheromones
struct AGrenade_Pheromone_C_ApplyPheromones_Params
{
};

// Function Grenade_Pheromone.Grenade_Pheromone_C.ExecuteUbergraph_Grenade_Pheromone
struct AGrenade_Pheromone_C_ExecuteUbergraph_Grenade_Pheromone_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
