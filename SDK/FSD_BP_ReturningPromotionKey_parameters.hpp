#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ReturningPromotionKey_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.MoveTowardsCamera
struct ABP_ReturningPromotionKey_C_MoveTowardsCamera_Params
{
	bool                                               Finished;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.OnTick_FDAEBDB24C3AD5E8021577B83AA4B3FD
struct ABP_ReturningPromotionKey_C_OnTick_FDAEBDB24C3AD5E8021577B83AA4B3FD_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NormalizedTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.Completed_FDAEBDB24C3AD5E8021577B83AA4B3FD
struct ABP_ReturningPromotionKey_C_Completed_FDAEBDB24C3AD5E8021577B83AA4B3FD_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NormalizedTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.MoveToCharacter
struct ABP_ReturningPromotionKey_C_MoveToCharacter_Params
{
	class APlayerCharacter**                           InTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.ReceiveBeginPlay
struct ABP_ReturningPromotionKey_C_ReceiveBeginPlay_Params
{
};

// Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathFinished__DelegateSignature
struct ABP_ReturningPromotionKey_C_BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathFinished__DelegateSignature_Params
{
	bool*                                              success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.ExecuteUbergraph_BP_ReturningPromotionKey
struct ABP_ReturningPromotionKey_C_ExecuteUbergraph_BP_ReturningPromotionKey_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
