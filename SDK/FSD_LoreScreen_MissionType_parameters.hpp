#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LoreScreen_MissionType_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LoreScreen_MissionType.LoreScreen_MissionType_C.StepHovered
struct ULoreScreen_MissionType_C_StepHovered_Params
{
	struct FMissionStepDescription*                    step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepsInRow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoreScreen_MissionType.LoreScreen_MissionType_C.Construct
struct ULoreScreen_MissionType_C_Construct_Params
{
};

// Function LoreScreen_MissionType.LoreScreen_MissionType_C.RefreshContent
struct ULoreScreen_MissionType_C_RefreshContent_Params
{
};

// Function LoreScreen_MissionType.LoreScreen_MissionType_C.StepUnhovered
struct ULoreScreen_MissionType_C_StepUnhovered_Params
{
};

// Function LoreScreen_MissionType.LoreScreen_MissionType_C.PreConstruct
struct ULoreScreen_MissionType_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoreScreen_MissionType.LoreScreen_MissionType_C.ExecuteUbergraph_LoreScreen_MissionType
struct ULoreScreen_MissionType_C_ExecuteUbergraph_LoreScreen_MissionType_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
