#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_CoreInfuser_Rewards_Background_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.SetOpen
struct UUI_CoreInfuser_Rewards_Background_C_SetOpen_Params
{
	bool*                                              IsOpen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.SetRewardGiven
struct UUI_CoreInfuser_Rewards_Background_C_SetRewardGiven_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.SetRewards
struct UUI_CoreInfuser_Rewards_Background_C_SetRewards_Params
{
	TArray<class USchematic*>                          InRewards;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.GetIconWidget
struct UUI_CoreInfuser_Rewards_Background_C_GetIconWidget_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUI_CoreInfuser_Reward_Background_C*         IconWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.SetHovered
struct UUI_CoreInfuser_Rewards_Background_C_SetHovered_Params
{
	int*                                               InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InHovered;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.OnRewardHovered_Event
struct UUI_CoreInfuser_Rewards_Background_C_OnRewardHovered_Event_Params
{
	class UUI_CoreInfuser_Reward_Icon_C**              Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.OnRewardUnhovered_Event
struct UUI_CoreInfuser_Rewards_Background_C_OnRewardUnhovered_Event_Params
{
	class UUI_CoreInfuser_Reward_Icon_C**              Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.OnRewardSelectedEvent
struct UUI_CoreInfuser_Rewards_Background_C_OnRewardSelectedEvent_Params
{
	class USchematic**                                 Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.BindToRewardSelector
struct UUI_CoreInfuser_Rewards_Background_C_BindToRewardSelector_Params
{
	class UUI_CoreInfuser_Rewards_Selector_C**         RewardSelector;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.Construct
struct UUI_CoreInfuser_Rewards_Background_C_Construct_Params
{
};

// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.ExecuteUbergraph_UI_CoreInfuser_Rewards_Background
struct UUI_CoreInfuser_Rewards_Background_C_ExecuteUbergraph_UI_CoreInfuser_Rewards_Background_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
