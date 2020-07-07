#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDive_StageIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetClaimStatusActive
struct UITM_DeepDive_StageIcon_C_SetClaimStatusActive_Params
{
	bool*                                              Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetText
struct UITM_DeepDive_StageIcon_C_SetText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetActive
struct UITM_DeepDive_StageIcon_C_SetActive_Params
{
	bool*                                              Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.PreConstruct
struct UITM_DeepDive_StageIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.ExecuteUbergraph_ITM_DeepDive_StageIcon
struct UITM_DeepDive_StageIcon_C_ExecuteUbergraph_ITM_DeepDive_StageIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
