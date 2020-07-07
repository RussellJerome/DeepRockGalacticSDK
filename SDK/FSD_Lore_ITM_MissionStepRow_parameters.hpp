#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_ITM_MissionStepRow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.AddStep
struct ULore_ITM_MissionStepRow_C_AddStep_Params
{
	struct FMissionStepDescription*                    step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               StepNumber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepsInRow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ULore_ITM_MissionStep_C*                     StepWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.ClearRow
struct ULore_ITM_MissionStepRow_C_ClearRow_Params
{
};

// Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.PreConstruct
struct ULore_ITM_MissionStepRow_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.ExecuteUbergraph_Lore_ITM_MissionStepRow
struct ULore_ITM_MissionStepRow_C_ExecuteUbergraph_Lore_ITM_MissionStepRow_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.OnStepUnhovered__DelegateSignature
struct ULore_ITM_MissionStepRow_C_OnStepUnhovered__DelegateSignature_Params
{
};

// Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.OnStepHovered__DelegateSignature
struct ULore_ITM_MissionStepRow_C_OnStepHovered__DelegateSignature_Params
{
	struct FMissionStepDescription*                    step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
