#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_VanityTab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Cheat_VanityTab.Cheat_VanityTab_C.Construct
struct UCheat_VanityTab_C_Construct_Params
{
};

// Function Cheat_VanityTab.Cheat_VanityTab_C.Fill vanity List By Class
struct UCheat_VanityTab_C_Fill_vanity_List_By_Class_Params
{
	class UClass**                                     Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_VanityTab.Cheat_VanityTab_C.Set Vanity List From slot
struct UCheat_VanityTab_C_Set_Vanity_List_From_slot_Params
{
	EVanitySlot*                                       Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Player_class;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCheat_VanityList_C**                        Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Cheat_VanityTab.Cheat_VanityTab_C.ExecuteUbergraph_Cheat_VanityTab
struct UCheat_VanityTab_C_ExecuteUbergraph_Cheat_VanityTab_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
