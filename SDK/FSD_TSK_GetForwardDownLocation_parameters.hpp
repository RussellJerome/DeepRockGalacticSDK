#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_GetForwardDownLocation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TSK_GetForwardDownLocation.TSK_GetForwardDownLocation_C.GetEnd
struct UTSK_GetForwardDownLocation_C_GetEnd_Params
{
	struct FVector*                                    PawnLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    TargetLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PawnForward;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TSK_GetForwardDownLocation.TSK_GetForwardDownLocation_C.ReceiveExecuteAI
struct UTSK_GetForwardDownLocation_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TSK_GetForwardDownLocation.TSK_GetForwardDownLocation_C.ExecuteUbergraph_TSK_GetForwardDownLocation
struct UTSK_GetForwardDownLocation_C_ExecuteUbergraph_TSK_GetForwardDownLocation_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
