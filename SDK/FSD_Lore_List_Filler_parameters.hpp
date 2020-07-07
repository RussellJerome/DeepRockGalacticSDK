#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_List_Filler_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lore_List_Filler.Lore_List_Filler_C.SetSize
struct ULore_List_Filler_C_SetSize_Params
{
	int*                                               Number_Of_Buttons;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_List_Filler.Lore_List_Filler_C.DecrementSize
struct ULore_List_Filler_C_DecrementSize_Params
{
};

// Function Lore_List_Filler.Lore_List_Filler_C.ExecuteUbergraph_Lore_List_Filler
struct ULore_List_Filler_C_ExecuteUbergraph_Lore_List_Filler_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_List_Filler.Lore_List_Filler_C.OnClicked__DelegateSignature
struct ULore_List_Filler_C_OnClicked__DelegateSignature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
