#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_RewardDispenser_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_RewardDispenser.BP_RewardDispenser_C.IsStateValid
struct ABP_RewardDispenser_C_IsStateValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_RewardDispenser.BP_RewardDispenser_C.GetRewardSelector
struct ABP_RewardDispenser_C_GetRewardSelector_Params
{
	class ABP_CoreInfuser_Rewards_Selector_C*          Selector;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardDispenser.BP_RewardDispenser_C.IsPlayerLocallyControlled
struct ABP_RewardDispenser_C_IsPlayerLocallyControlled_Params
{
	bool                                               LocallyControlled;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardDispenser.BP_RewardDispenser_C.ToggleRewardSelector
struct ABP_RewardDispenser_C_ToggleRewardSelector_Params
{
	bool*                                              inVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardDispenser.BP_RewardDispenser_C.OnOwnerAssigned
struct ABP_RewardDispenser_C_OnOwnerAssigned_Params
{
};

// Function BP_RewardDispenser.BP_RewardDispenser_C.OnPoweredUp
struct ABP_RewardDispenser_C_OnPoweredUp_Params
{
};

// Function BP_RewardDispenser.BP_RewardDispenser_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_RewardDispenser_C_BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_RewardDispenser.BP_RewardDispenser_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABP_RewardDispenser_C_BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardDispenser.BP_RewardDispenser_C.BndEvt__BP_RewardUsableComponent_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
struct ABP_RewardDispenser_C_BndEvt__BP_RewardUsableComponent_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardDispenser.BP_RewardDispenser_C.Initialize
struct ABP_RewardDispenser_C_Initialize_Params
{
};

// Function BP_RewardDispenser.BP_RewardDispenser_C.OnOpenDispenser
struct ABP_RewardDispenser_C_OnOpenDispenser_Params
{
};

// Function BP_RewardDispenser.BP_RewardDispenser_C.On Selector Finished
struct ABP_RewardDispenser_C_On_Selector_Finished_Params
{
	class USchematic**                                 SchematicReward;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardDispenser.BP_RewardDispenser_C.OnRewardSelected
struct ABP_RewardDispenser_C_OnRewardSelected_Params
{
};

// Function BP_RewardDispenser.BP_RewardDispenser_C.Turn On Buttons
struct ABP_RewardDispenser_C_Turn_On_Buttons_Params
{
};

// Function BP_RewardDispenser.BP_RewardDispenser_C.ExecuteUbergraph_BP_RewardDispenser
struct ABP_RewardDispenser_C_ExecuteUbergraph_BP_RewardDispenser_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardDispenser.BP_RewardDispenser_C.OnDispenserFinished__DelegateSignature
struct ABP_RewardDispenser_C_OnDispenserFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
