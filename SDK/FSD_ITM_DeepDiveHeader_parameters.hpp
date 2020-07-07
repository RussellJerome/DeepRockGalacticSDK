#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDiveHeader_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromActiveDeepDive
struct UITM_DeepDiveHeader_C_FromActiveDeepDive_Params
{
};

// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromDeepDive
struct UITM_DeepDiveHeader_C_FromDeepDive_Params
{
	class UDeepDive**                                  InDeepDive;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetEliteActive
struct UITM_DeepDiveHeader_C_SetEliteActive_Params
{
	bool*                                              EliteActive;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetHeaderContents
struct UITM_DeepDiveHeader_C_SetHeaderContents_Params
{
	struct FText*                                      Header_Contents;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.PreConstruct
struct UITM_DeepDiveHeader_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.ExecuteUbergraph_ITM_DeepDiveHeader
struct UITM_DeepDiveHeader_C_ExecuteUbergraph_ITM_DeepDiveHeader_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
