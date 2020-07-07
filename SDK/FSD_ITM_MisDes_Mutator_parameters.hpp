#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisDes_Mutator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_MisDes_Mutator.ITM_MisDes_Mutator_C.PreConstruct
struct UITM_MisDes_Mutator_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisDes_Mutator.ITM_MisDes_Mutator_C.SetData
struct UITM_MisDes_Mutator_C_SetData_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisDes_Mutator.ITM_MisDes_Mutator_C.Construct
struct UITM_MisDes_Mutator_C_Construct_Params
{
};

// Function ITM_MisDes_Mutator.ITM_MisDes_Mutator_C.ExecuteUbergraph_ITM_MisDes_Mutator
struct UITM_MisDes_Mutator_C_ExecuteUbergraph_ITM_MisDes_Mutator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
