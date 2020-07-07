#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_PerkBackground_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_PerkBackground.UI_PerkBackground_C.FromPerk
struct UUI_PerkBackground_C_FromPerk_Params
{
	class UPerkAsset**                                 InPerk;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPerkTierState*                                    InState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PerkBackground.UI_PerkBackground_C.SetPerkType
struct UUI_PerkBackground_C_SetPerkType_Params
{
	EPerkUsageType*                                    InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPerkTierState*                                    InState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PerkBackground.UI_PerkBackground_C.SetColors
struct UUI_PerkBackground_C_SetColors_Params
{
	struct FLinearColor*                               InFillColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               InBorderColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PerkBackground.UI_PerkBackground_C.SetDimensions
struct UUI_PerkBackground_C_SetDimensions_Params
{
	float*                                             InDimensions;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PerkBackground.UI_PerkBackground_C.PreConstruct
struct UUI_PerkBackground_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PerkBackground.UI_PerkBackground_C.ExecuteUbergraph_UI_PerkBackground
struct UUI_PerkBackground_C_ExecuteUbergraph_UI_PerkBackground_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
