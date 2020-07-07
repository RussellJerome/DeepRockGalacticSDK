#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ObjectiveBox_InMission_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.UpdateText
struct UITM_ObjectiveBox_InMission_C_UpdateText_Params
{
	struct FText*                                      InText;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      InCounterText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D**                                 InCounterIcon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Completed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.Set Objective
struct UITM_ObjectiveBox_InMission_C_Set_Objective_Params
{
	class UObjective**                                 Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsPrimary;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.OnObjectiveUpdated
struct UITM_ObjectiveBox_InMission_C_OnObjectiveUpdated_Params
{
	class UObjective**                                 Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.SetCustom
struct UITM_ObjectiveBox_InMission_C_SetCustom_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Completed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.ExecuteUbergraph_ITM_ObjectiveBox_InMission
struct UITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
