#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_FrozenState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FrozenState.BP_FrozenState_C.ReceiveStateEnter
struct UBP_FrozenState_C_ReceiveStateEnter_Params
{
};

// Function BP_FrozenState.BP_FrozenState_C.ReceiveStateExit
struct UBP_FrozenState_C_ReceiveStateExit_Params
{
};

// Function BP_FrozenState.BP_FrozenState_C.ReceiveOnDefrosting
struct UBP_FrozenState_C_ReceiveOnDefrosting_Params
{
};

// Function BP_FrozenState.BP_FrozenState_C.ExecuteUbergraph_BP_FrozenState
struct UBP_FrozenState_C_ExecuteUbergraph_BP_FrozenState_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
