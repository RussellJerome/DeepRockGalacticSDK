#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_HUD_BracketWindowBig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C.PreConstruct
struct UBasic_HUD_BracketWindowBig_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C.Set Edge Color
struct UBasic_HUD_BracketWindowBig_C_Set_Edge_Color_Params
{
	struct FLinearColor*                               Edge_Tint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C.Set Background Opacity
struct UBasic_HUD_BracketWindowBig_C_Set_Background_Opacity_Params
{
	float*                                             BG_Opacity;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C.ExecuteUbergraph_Basic_HUD_BracketWindowBig
struct UBasic_HUD_BracketWindowBig_C_ExecuteUbergraph_Basic_HUD_BracketWindowBig_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
