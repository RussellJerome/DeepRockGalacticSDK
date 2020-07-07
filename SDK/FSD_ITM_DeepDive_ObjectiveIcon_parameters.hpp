#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDive_ObjectiveIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetTemplateIcon
struct UITM_DeepDive_ObjectiveIcon_C_SetTemplateIcon_Params
{
	class UITM_MisSel_MissionIcon_C**                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMissionTemplate**                           InMissionTemplate;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetObjectiveIcon
struct UITM_DeepDive_ObjectiveIcon_C_SetObjectiveIcon_Params
{
	class UUI_MaskedImage_C**                          Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass**                                     Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetData
struct UITM_DeepDive_ObjectiveIcon_C_SetData_Params
{
	class UGeneratedMission**                          InMission;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.PreConstruct
struct UITM_DeepDive_ObjectiveIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon
struct UITM_DeepDive_ObjectiveIcon_C_ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
