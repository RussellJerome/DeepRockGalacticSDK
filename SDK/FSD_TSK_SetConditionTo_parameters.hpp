#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_SetConditionTo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TSK_SetConditionTo.TSK_SetConditionTo_C.ReceiveExecute
struct UTSK_SetConditionTo_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TSK_SetConditionTo.TSK_SetConditionTo_C.ExecuteUbergraph_TSK_SetConditionTo
struct UTSK_SetConditionTo_C_ExecuteUbergraph_TSK_SetConditionTo_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
