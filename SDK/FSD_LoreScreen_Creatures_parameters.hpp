#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LoreScreen_Creatures_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LoreScreen_Creatures.LoreScreen_Creatures_C.Construct
struct ULoreScreen_Creatures_C_Construct_Params
{
};

// Function LoreScreen_Creatures.LoreScreen_Creatures_C.RefreshContent
struct ULoreScreen_Creatures_C_RefreshContent_Params
{
};

// Function LoreScreen_Creatures.LoreScreen_Creatures_C.RefreshCreature
struct ULoreScreen_Creatures_C_RefreshCreature_Params
{
};

// Function LoreScreen_Creatures.LoreScreen_Creatures_C.FadeOutFinished
struct ULoreScreen_Creatures_C_FadeOutFinished_Params
{
};

// Function LoreScreen_Creatures.LoreScreen_Creatures_C.ShowCreature
struct ULoreScreen_Creatures_C_ShowCreature_Params
{
};

// Function LoreScreen_Creatures.LoreScreen_Creatures_C.Tick
struct ULoreScreen_Creatures_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoreScreen_Creatures.LoreScreen_Creatures_C.ExecuteUbergraph_LoreScreen_Creatures
struct ULoreScreen_Creatures_C_ExecuteUbergraph_LoreScreen_Creatures_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
