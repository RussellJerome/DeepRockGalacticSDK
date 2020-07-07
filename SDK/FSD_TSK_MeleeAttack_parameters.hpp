#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_MeleeAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TSK_MeleeAttack.TSK_MeleeAttack_C.ReceiveExecuteAI
struct UTSK_MeleeAttack_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TSK_MeleeAttack.TSK_MeleeAttack_C.OnMeleeAttack
struct UTSK_MeleeAttack_C_OnMeleeAttack_Params
{
	struct FName*                                      nameValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TSK_MeleeAttack.TSK_MeleeAttack_C.ReceiveAbortAI
struct UTSK_MeleeAttack_C_ReceiveAbortAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TSK_MeleeAttack.TSK_MeleeAttack_C.ExecuteUbergraph_TSK_MeleeAttack
struct UTSK_MeleeAttack_C_ExecuteUbergraph_TSK_MeleeAttack_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
