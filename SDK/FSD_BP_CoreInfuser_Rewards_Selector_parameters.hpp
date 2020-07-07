#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_CoreInfuser_Rewards_Selector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.GetBackgroundsWidget
struct ABP_CoreInfuser_Rewards_Selector_C_GetBackgroundsWidget_Params
{
	class UUI_CoreInfuser_Rewards_Background_C*        Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.GetRewardsWidget
struct ABP_CoreInfuser_Rewards_Selector_C_GetRewardsWidget_Params
{
	class UUI_CoreInfuser_Rewards_Selector_C*          Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.ReceiveBeginPlay
struct ABP_CoreInfuser_Rewards_Selector_C_ReceiveBeginPlay_Params
{
};

// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.SetVisible
struct ABP_CoreInfuser_Rewards_Selector_C_SetVisible_Params
{
	bool*                                              inVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.OnRewardSelectedEvent
struct ABP_CoreInfuser_Rewards_Selector_C_OnRewardSelectedEvent_Params
{
	class USchematic**                                 Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.SetSelectedReward
struct ABP_CoreInfuser_Rewards_Selector_C_SetSelectedReward_Params
{
	class USchematic**                                 InReward;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.SetDispenser
struct ABP_CoreInfuser_Rewards_Selector_C_SetDispenser_Params
{
	class AEventRewardDispenser**                      InDispenser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.Set Selectable Rewards
struct ABP_CoreInfuser_Rewards_Selector_C_Set_Selectable_Rewards_Params
{
	TArray<class USchematic*>                          InRewards;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.ExecuteUbergraph_BP_CoreInfuser_Rewards_Selector
struct ABP_CoreInfuser_Rewards_Selector_C_ExecuteUbergraph_BP_CoreInfuser_Rewards_Selector_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.OnRewardSelected__DelegateSignature
struct ABP_CoreInfuser_Rewards_Selector_C_OnRewardSelected__DelegateSignature_Params
{
	class USchematic**                                 SchematicReward;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
