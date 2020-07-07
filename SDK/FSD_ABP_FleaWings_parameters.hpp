#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_FleaWings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ABP_FleaWings.ABP_FleaWings_C.SetFlying
struct UABP_FleaWings_C_SetFlying_Params
{
	bool*                                              NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_FleaWings.ABP_FleaWings_C.ExecuteUbergraph_ABP_FleaWings
struct UABP_FleaWings_C_ExecuteUbergraph_ABP_FleaWings_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
