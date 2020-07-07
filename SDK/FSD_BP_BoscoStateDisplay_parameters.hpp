#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BoscoStateDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetMaterial
struct ABP_BoscoStateDisplay_C_SetMaterial_Params
{
	class UMaterialInstance**                          NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetState
struct ABP_BoscoStateDisplay_C_SetState_Params
{
	EDroneAIState*                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.ReceiveBeginPlay
struct ABP_BoscoStateDisplay_C_ReceiveBeginPlay_Params
{
};

// Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.ReceiveTick
struct ABP_BoscoStateDisplay_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.ExecuteUbergraph_BP_BoscoStateDisplay
struct ABP_BoscoStateDisplay_C_ExecuteUbergraph_BP_BoscoStateDisplay_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
