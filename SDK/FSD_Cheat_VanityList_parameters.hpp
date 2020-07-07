#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_VanityList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Cheat_VanityList.Cheat_VanityList_C.Set Vanity List
struct UCheat_VanityList_C_Set_Vanity_List_Params
{
	TArray<class UVanityItem*>*                        vanityItems;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EVanitySlot*                                       Vanity_Class_type;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_VanityList.Cheat_VanityList_C.On State change
struct UCheat_VanityList_C_On_State_change_Params
{
	bool*                                              Is_Checked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UVanityItem**                                Vanity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVanitySlot*                                       Vanity_Type;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_VanityList.Cheat_VanityList_C.ExecuteUbergraph_Cheat_VanityList
struct UCheat_VanityList_C_ExecuteUbergraph_Cheat_VanityList_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
