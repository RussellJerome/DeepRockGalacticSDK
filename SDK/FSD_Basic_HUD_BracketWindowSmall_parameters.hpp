#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_HUD_BracketWindowSmall_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.SetEdgeColor
struct UBasic_HUD_BracketWindowSmall_C_SetEdgeColor_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.PreConstruct
struct UBasic_HUD_BracketWindowSmall_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.ExecuteUbergraph_Basic_HUD_BracketWindowSmall
struct UBasic_HUD_BracketWindowSmall_C_ExecuteUbergraph_Basic_HUD_BracketWindowSmall_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
