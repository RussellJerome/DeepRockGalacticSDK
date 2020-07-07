#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_ChangeDestIfFarAway_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TSK_ChangeDestIfFarAway.TSK_ChangeDestIfFarAway_C.ReceiveExecuteAI
struct UTSK_ChangeDestIfFarAway_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TSK_ChangeDestIfFarAway.TSK_ChangeDestIfFarAway_C.ExecuteUbergraph_TSK_ChangeDestIfFarAway
struct UTSK_ChangeDestIfFarAway_C_ExecuteUbergraph_TSK_ChangeDestIfFarAway_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
