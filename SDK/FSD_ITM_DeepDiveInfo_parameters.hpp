#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDiveInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_DeepDiveInfo.ITM_DeepDiveInfo_C.Update
struct UITM_DeepDiveInfo_C_Update_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDiveInfo.ITM_DeepDiveInfo_C.PreConstruct
struct UITM_DeepDiveInfo_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDiveInfo.ITM_DeepDiveInfo_C.ExecuteUbergraph_ITM_DeepDiveInfo
struct UITM_DeepDiveInfo_C_ExecuteUbergraph_ITM_DeepDiveInfo_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
