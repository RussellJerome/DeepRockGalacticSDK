#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_GetPointInFrontOf_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TSK_GetPointInFrontOf.TSK_GetPointInFrontOf_C.ReceiveExecuteAI
struct UTSK_GetPointInFrontOf_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TSK_GetPointInFrontOf.TSK_GetPointInFrontOf_C.ExecuteUbergraph_TSK_GetPointInFrontOf
struct UTSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
