#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Perk_ToolTip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.PreConstruct
struct UUI_Perk_ToolTip_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.OnPerkClaimed_Event
struct UUI_Perk_ToolTip_C_OnPerkClaimed_Event_Params
{
	class UPerkAsset**                                 Perk;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClaimedTier;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.SetPerkAsset
struct UUI_Perk_ToolTip_C_SetPerkAsset_Params
{
	class UPerkAsset**                                 PerkAsset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowRank;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.FancyDelayedIntro
struct UUI_Perk_ToolTip_C_FancyDelayedIntro_Params
{
};

// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.FadeInIntro
struct UUI_Perk_ToolTip_C_FadeInIntro_Params
{
};

// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.Show Rank
struct UUI_Perk_ToolTip_C_Show_Rank_Params
{
	bool*                                              InShowRank;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.StopAnimations
struct UUI_Perk_ToolTip_C_StopAnimations_Params
{
};

// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.ExecuteUbergraph_UI_Perk_ToolTip
struct UUI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
