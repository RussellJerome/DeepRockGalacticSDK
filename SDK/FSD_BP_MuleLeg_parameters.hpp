#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_MuleLeg_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MuleLeg.BP_MuleLeg_C.ReceiveBeginPlay
struct ABP_MuleLeg_C_ReceiveBeginPlay_Params
{
};

// Function BP_MuleLeg.BP_MuleLeg_C.OnDropped Leg
struct ABP_MuleLeg_C_OnDropped_Leg_Params
{
};

// Function BP_MuleLeg.BP_MuleLeg_C.OnPickedUpLeg
struct ABP_MuleLeg_C_OnPickedUpLeg_Params
{
};

// Function BP_MuleLeg.BP_MuleLeg_C.DisableDistressSphere
struct ABP_MuleLeg_C_DisableDistressSphere_Params
{
};

// Function BP_MuleLeg.BP_MuleLeg_C.ExecuteUbergraph_BP_MuleLeg
struct ABP_MuleLeg_C_ExecuteUbergraph_BP_MuleLeg_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
