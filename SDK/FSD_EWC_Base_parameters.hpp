#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EWC_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EWC_Base.EWC_Base_C.PlayWaveMusic
struct UEWC_Base_C_PlayWaveMusic_Params
{
};

// Function EWC_Base.EWC_Base_C.PlayEndWaveMusic
struct UEWC_Base_C_PlayEndWaveMusic_Params
{
};

// Function EWC_Base.EWC_Base_C.StopWaveMusic
struct UEWC_Base_C_StopWaveMusic_Params
{
};

// Function EWC_Base.EWC_Base_C.ExecuteUbergraph_EWC_Base
struct UEWC_Base_C_ExecuteUbergraph_EWC_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
