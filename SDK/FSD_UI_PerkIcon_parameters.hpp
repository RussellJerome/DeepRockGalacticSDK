#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_PerkIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_PerkIcon.UI_PerkIcon_C.SetPerkLevelVisibility
struct UUI_PerkIcon_C_SetPerkLevelVisibility_Params
{
	bool*                                              inVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PerkIcon.UI_PerkIcon_C.ShowPerkAs
struct UUI_PerkIcon_C_ShowPerkAs_Params
{
	class UPerkAsset**                                 InPerk;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               InIconColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InRank;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PerkIcon.UI_PerkIcon_C.ShowPerkByRank
struct UUI_PerkIcon_C_ShowPerkByRank_Params
{
	class UPerkAsset**                                 InPerk;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InRank;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PerkIcon.UI_PerkIcon_C.ShowAs
struct UUI_PerkIcon_C_ShowAs_Params
{
	class UTexture2D**                                 InIconTexture;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               InIconColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InRank;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PerkIcon.UI_PerkIcon_C.SetDimensions
struct UUI_PerkIcon_C_SetDimensions_Params
{
	float*                                             InDiminsions;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PerkIcon.UI_PerkIcon_C.PreConstruct
struct UUI_PerkIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PerkIcon.UI_PerkIcon_C.Set Perk Asset Last Claimed
struct UUI_PerkIcon_C_Set_Perk_Asset_Last_Claimed_Params
{
	class UPerkAsset**                                 PerkAsset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PerkIcon.UI_PerkIcon_C.ExecuteUbergraph_UI_PerkIcon
struct UUI_PerkIcon_C_ExecuteUbergraph_UI_PerkIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
