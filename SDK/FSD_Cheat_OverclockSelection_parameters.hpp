#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_OverclockSelection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Cheat_OverclockSelection.Cheat_OverclockSelection_C.Initiate Widget
struct UCheat_OverclockSelection_C_Initiate_Widget_Params
{
	EItemCategory*                                     ItemCategory;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_OverclockSelection.Cheat_OverclockSelection_C.On State change
struct UCheat_OverclockSelection_C_On_State_change_Params
{
	bool*                                              Is_Checked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemUpgrade**                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemCategory*                                     Item_Category;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_OverclockSelection.Cheat_OverclockSelection_C.ExecuteUbergraph_Cheat_OverclockSelection
struct UCheat_OverclockSelection_C_ExecuteUbergraph_Cheat_OverclockSelection_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
