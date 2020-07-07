#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisDes_Warning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_MisDes_Warning.ITM_MisDes_Warning_C.PreConstruct
struct UITM_MisDes_Warning_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisDes_Warning.ITM_MisDes_Warning_C.SetData
struct UITM_MisDes_Warning_C_SetData_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisDes_Warning.ITM_MisDes_Warning_C.Construct
struct UITM_MisDes_Warning_C_Construct_Params
{
};

// Function ITM_MisDes_Warning.ITM_MisDes_Warning_C.ExecuteUbergraph_ITM_MisDes_Warning
struct UITM_MisDes_Warning_C_ExecuteUbergraph_ITM_MisDes_Warning_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
