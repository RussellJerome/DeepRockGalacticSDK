#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ParalyzedState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ParalyzedState.BP_ParalyzedState_C.ReceiveStateEnter
struct UBP_ParalyzedState_C_ReceiveStateEnter_Params
{
};

// Function BP_ParalyzedState.BP_ParalyzedState_C.ReceiveStateExit
struct UBP_ParalyzedState_C_ReceiveStateExit_Params
{
};

// Function BP_ParalyzedState.BP_ParalyzedState_C.ExecuteUbergraph_BP_ParalyzedState
struct UBP_ParalyzedState_C_ExecuteUbergraph_BP_ParalyzedState_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
