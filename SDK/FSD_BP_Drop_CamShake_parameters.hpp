#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Drop_CamShake_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Drop_CamShake.BP_Drop_CamShake_C.SetStandingDown
struct ABP_Drop_CamShake_C_SetStandingDown_Params
{
	bool*                                              IsStandingDown;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Drop_CamShake.BP_Drop_CamShake_C.TriggerShakeSequence
struct ABP_Drop_CamShake_C_TriggerShakeSequence_Params
{
};

// Function BP_Drop_CamShake.BP_Drop_CamShake_C.ExecuteUbergraph_BP_Drop_CamShake
struct ABP_Drop_CamShake_C_ExecuteUbergraph_BP_Drop_CamShake_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
