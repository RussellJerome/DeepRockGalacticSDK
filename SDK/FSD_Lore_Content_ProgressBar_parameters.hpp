#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_Content_ProgressBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lore_Content_ProgressBar.Lore_Content_ProgressBar_C.SetProgress
struct ULore_Content_ProgressBar_C_SetProgress_Params
{
	int*                                               Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_Content_ProgressBar.Lore_Content_ProgressBar_C.PreConstruct
struct ULore_Content_ProgressBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_Content_ProgressBar.Lore_Content_ProgressBar_C.Tick
struct ULore_Content_ProgressBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_Content_ProgressBar.Lore_Content_ProgressBar_C.ExecuteUbergraph_Lore_Content_ProgressBar
struct ULore_Content_ProgressBar_C_ExecuteUbergraph_Lore_Content_ProgressBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
