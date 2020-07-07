#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MissionBar_Objective_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_MissionBar_Objective.ITM_MissionBar_Objective_C.SetObjective
struct UITM_MissionBar_Objective_C_SetObjective_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ObjectiveType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MissionBar_Objective.ITM_MissionBar_Objective_C.PreConstruct
struct UITM_MissionBar_Objective_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MissionBar_Objective.ITM_MissionBar_Objective_C.ExecuteUbergraph_ITM_MissionBar_Objective
struct UITM_MissionBar_Objective_C_ExecuteUbergraph_ITM_MissionBar_Objective_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
