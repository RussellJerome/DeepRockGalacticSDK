#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Objective_Resource_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Objective_Resource.Objective_Resource_C.InitObjective
struct UObjective_Resource_C_InitObjective_Params
{
	class UObjective**                                 Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Objective_Resource.Objective_Resource_C.OnObjectiveUpdated
struct UObjective_Resource_C_OnObjectiveUpdated_Params
{
	class UObjective**                                 Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Objective_Resource.Objective_Resource_C.ExecuteUbergraph_Objective_Resource
struct UObjective_Resource_C_ExecuteUbergraph_Objective_Resource_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
