#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EWC_Generic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EWC_Generic.EWC_Generic_C.StartWave
struct UEWC_Generic_C_StartWave_Params
{
};

// Function EWC_Generic.EWC_Generic_C.StopConstantPreassure
struct UEWC_Generic_C_StopConstantPreassure_Params
{
};

// Function EWC_Generic.EWC_Generic_C.ExecuteUbergraph_EWC_Generic
struct UEWC_Generic_C_ExecuteUbergraph_EWC_Generic_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
