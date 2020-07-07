#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_CoreInfuser_Rewards_Selector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.SetOpen
struct UUI_CoreInfuser_Rewards_Selector_C_SetOpen_Params
{
	bool*                                              InIsOpen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.SetSelectedReward
struct UUI_CoreInfuser_Rewards_Selector_C_SetSelectedReward_Params
{
	class USchematic**                                 InReward;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRewardValid;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.SetSchematicRewards
struct UUI_CoreInfuser_Rewards_Selector_C_SetSchematicRewards_Params
{
	TArray<class USchematic*>                          InRewards;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.Construct
struct UUI_CoreInfuser_Rewards_Selector_C_Construct_Params
{
};

// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.RewardHovered
struct UUI_CoreInfuser_Rewards_Selector_C_RewardHovered_Params
{
	class UUI_CoreInfuser_Reward_Icon_C**              IconWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.RewardUnhovered
struct UUI_CoreInfuser_Rewards_Selector_C_RewardUnhovered_Params
{
	class UUI_CoreInfuser_Reward_Icon_C**              IconWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.RewardSelected
struct UUI_CoreInfuser_Rewards_Selector_C_RewardSelected_Params
{
	class UUI_CoreInfuser_Reward_Icon_C**              IconWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.SetDispenser
struct UUI_CoreInfuser_Rewards_Selector_C_SetDispenser_Params
{
	class AEventRewardDispenser**                      InDispenser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.ExecuteUbergraph_UI_CoreInfuser_Rewards_Selector
struct UUI_CoreInfuser_Rewards_Selector_C_ExecuteUbergraph_UI_CoreInfuser_Rewards_Selector_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnRewardsChanged__DelegateSignature
struct UUI_CoreInfuser_Rewards_Selector_C_OnRewardsChanged__DelegateSignature_Params
{
	TArray<class USchematic*>                          Rewards;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnOpenChanged__DelegateSignature
struct UUI_CoreInfuser_Rewards_Selector_C_OnOpenChanged__DelegateSignature_Params
{
	bool*                                              Open;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnRewardSelected__DelegateSignature
struct UUI_CoreInfuser_Rewards_Selector_C_OnRewardSelected__DelegateSignature_Params
{
	class USchematic**                                 Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnRewardUnhovered__DelegateSignature
struct UUI_CoreInfuser_Rewards_Selector_C_OnRewardUnhovered__DelegateSignature_Params
{
	class UUI_CoreInfuser_Reward_Icon_C**              Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnRewardHovered__DelegateSignature
struct UUI_CoreInfuser_Rewards_Selector_C_OnRewardHovered__DelegateSignature_Params
{
	class UUI_CoreInfuser_Reward_Icon_C**              Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
