#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_ObjectiveSecondary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.SetData
struct UITM_MisSel_ObjectiveSecondary_C_SetData_Params
{
	class UClass**                                     Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             missionLength;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HazardBonus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.PreConstruct
struct UITM_MisSel_ObjectiveSecondary_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary
struct UITM_MisSel_ObjectiveSecondary_C_ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
