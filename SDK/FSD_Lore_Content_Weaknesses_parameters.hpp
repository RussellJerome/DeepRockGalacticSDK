#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_Content_Weaknesses_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.PreConstruct
struct ULore_Content_Weaknesses_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.ClearChildren
struct ULore_Content_Weaknesses_C_ClearChildren_Params
{
};

// Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.AddIcon
struct ULore_Content_Weaknesses_C_AddIcon_Params
{
	struct FDamageTypeDescription*                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.PlayFade
struct ULore_Content_Weaknesses_C_PlayFade_Params
{
	bool*                                              Forward;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.ExecuteUbergraph_Lore_Content_Weaknesses
struct ULore_Content_Weaknesses_C_ExecuteUbergraph_Lore_Content_Weaknesses_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
