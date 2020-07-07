#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_JobsEntry_Resource_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.PreConstruct
struct UITM_JobsEntry_Resource_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.SetData
struct UITM_JobsEntry_Resource_C_SetData_Params
{
	int*                                               RequiredLevel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.ExecuteUbergraph_ITM_JobsEntry_Resource
struct UITM_JobsEntry_Resource_C_ExecuteUbergraph_ITM_JobsEntry_Resource_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
