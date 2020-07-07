#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_VampireComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VampireComponent.BP_VampireComponent_C.OnEnemyKilled
struct UBP_VampireComponent_C_OnEnemyKilled_Params
{
	struct FGameplayTagContainer*                      enemyTags;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AActor**                                     enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageClass**                               DamageClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VampireComponent.BP_VampireComponent_C.Receive_OnInitialized
struct UBP_VampireComponent_C_Receive_OnInitialized_Params
{
};

// Function BP_VampireComponent.BP_VampireComponent_C.Client_VampireTriggered
struct UBP_VampireComponent_C_Client_VampireTriggered_Params
{
};

// Function BP_VampireComponent.BP_VampireComponent_C.ExecuteUbergraph_BP_VampireComponent
struct UBP_VampireComponent_C_ExecuteUbergraph_BP_VampireComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
