#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PlasmaTrail_LineCutter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.ReceiveBeginPlay
struct ABP_PlasmaTrail_LineCutter_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.SetLineWidth
struct ABP_PlasmaTrail_LineCutter_C_SetLineWidth_Params
{
	float*                                             Width;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.ExecuteUbergraph_BP_PlasmaTrail_LineCutter
struct ABP_PlasmaTrail_LineCutter_C_ExecuteUbergraph_BP_PlasmaTrail_LineCutter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
