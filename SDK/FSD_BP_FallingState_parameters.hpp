#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_FallingState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FallingState.BP_FallingState_C.HoverBootsTick
struct UBP_FallingState_C_HoverBootsTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Enter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Exit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FallingState.BP_FallingState_C.ShowJumpBootsActivation
struct UBP_FallingState_C_ShowJumpBootsActivation_Params
{
};

// Function BP_FallingState.BP_FallingState_C.ReceiveHoverBootsTick
struct UBP_FallingState_C_ReceiveHoverBootsTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FallingState.BP_FallingState_C.ReceiveHoverBootsActiveChanged
struct UBP_FallingState_C_ReceiveHoverBootsActiveChanged_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FallingState.BP_FallingState_C.ExecuteUbergraph_BP_FallingState
struct UBP_FallingState_C_ExecuteUbergraph_BP_FallingState_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
