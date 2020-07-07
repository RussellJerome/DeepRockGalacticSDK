#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AFE_PowerAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AFE_PowerAttack.AFE_PowerAttack_C.ReceiveBeginEffect
struct UAFE_PowerAttack_C_ReceiveBeginEffect_Params
{
	class UPawnAfflictionComponent**                   Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AFE_PowerAttack.AFE_PowerAttack_C.ReceiveEndEffect
struct UAFE_PowerAttack_C_ReceiveEndEffect_Params
{
	class UPawnAfflictionComponent**                   Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AFE_PowerAttack.AFE_PowerAttack_C.ExecuteUbergraph_AFE_PowerAttack
struct UAFE_PowerAttack_C_ExecuteUbergraph_AFE_PowerAttack_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
