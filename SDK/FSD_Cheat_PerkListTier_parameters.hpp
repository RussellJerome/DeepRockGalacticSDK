#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_PerkListTier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Cheat_PerkListTier.Cheat_PerkListTier_C.Initiate Widget
struct UCheat_PerkListTier_C_Initiate_Widget_Params
{
	EItemCategory*                                     input_category;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUpgradeTier*                               Upgrade_struct;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Tier_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     itemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_PerkListTier.Cheat_PerkListTier_C.On State change
struct UCheat_PerkListTier_C_On_State_change_Params
{
	bool*                                              Is_Checked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemUpgrade**                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemCategory*                                     Item_Category;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_PerkListTier.Cheat_PerkListTier_C.Initiate Bosco-tier
struct UCheat_PerkListTier_C_Initiate_Bosco_tier_Params
{
	struct FUpgradeTier*                               Upgrade_struct;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Tier_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Item_Class;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_PerkListTier.Cheat_PerkListTier_C.On bosco state change
struct UCheat_PerkListTier_C_On_bosco_state_change_Params
{
	bool*                                              Is_Checked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemUpgrade**                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemCategory*                                     Item_Category;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_PerkListTier.Cheat_PerkListTier_C.ExecuteUbergraph_Cheat_PerkListTier
struct UCheat_PerkListTier_C_ExecuteUbergraph_Cheat_PerkListTier_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_PerkListTier.Cheat_PerkListTier_C.OnItemActivationStateChange__DelegateSignature
struct UCheat_PerkListTier_C_OnItemActivationStateChange__DelegateSignature_Params
{
	bool*                                              Is_Checked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemUpgrade**                               Upgrade_item;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemCategory*                                     Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
