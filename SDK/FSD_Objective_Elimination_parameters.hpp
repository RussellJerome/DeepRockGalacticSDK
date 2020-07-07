#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Objective_Elimination_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Objective_Elimination.Objective_Elimination_C.InitObjective
struct UObjective_Elimination_C_InitObjective_Params
{
	class UObjective**                                 Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Objective_Elimination.Objective_Elimination_C.OnObjectiveUpdated
struct UObjective_Elimination_C_OnObjectiveUpdated_Params
{
	class UObjective**                                 Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Objective_Elimination.Objective_Elimination_C.ExecuteUbergraph_Objective_Elimination
struct UObjective_Elimination_C_ExecuteUbergraph_Objective_Elimination_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
