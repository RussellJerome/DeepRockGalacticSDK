#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDiveHeaderElite_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.SetEliteContents
struct UITM_DeepDiveHeaderElite_C_SetEliteContents_Params
{
	struct FText*                                      EliteContents;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.PreConstruct
struct UITM_DeepDiveHeaderElite_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.ExecuteUbergraph_ITM_DeepDiveHeaderElite
struct UITM_DeepDiveHeaderElite_C_ExecuteUbergraph_ITM_DeepDiveHeaderElite_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
