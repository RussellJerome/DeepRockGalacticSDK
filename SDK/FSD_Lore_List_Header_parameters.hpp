#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_List_Header_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lore_List_Header.Lore_List_Header_C.SetText
struct ULore_List_Header_C_SetText_Params
{
	struct FText*                                      Headline;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Lore_List_Header.Lore_List_Header_C.ExecuteUbergraph_Lore_List_Header
struct ULore_List_Header_C_ExecuteUbergraph_Lore_List_Header_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
