#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AIC_Donkey_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AIC_Donkey.AIC_Donkey_C.ReceiveBeginPlay
struct AAIC_Donkey_C_ReceiveBeginPlay_Params
{
};

// Function AIC_Donkey.AIC_Donkey_C.OnOverlapsChanged
struct AAIC_Donkey_C_OnOverlapsChanged_Params
{
	int*                                               OverlapCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIC_Donkey.AIC_Donkey_C.ExecuteUbergraph_AIC_Donkey
struct AAIC_Donkey_C_ExecuteUbergraph_AIC_Donkey_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
