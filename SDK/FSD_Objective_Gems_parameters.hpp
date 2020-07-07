#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Objective_Gems_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Objective_Gems.Objective_Gems_C.InitObjective
struct UObjective_Gems_C_InitObjective_Params
{
	class UObjective**                                 Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Objective_Gems.Objective_Gems_C.OnObjectiveUpdated
struct UObjective_Gems_C_OnObjectiveUpdated_Params
{
	class UObjective**                                 Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Objective_Gems.Objective_Gems_C.ExecuteUbergraph_Objective_Gems
struct UObjective_Gems_C_ExecuteUbergraph_Objective_Gems_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
