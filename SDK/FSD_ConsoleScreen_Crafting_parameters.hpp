#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_Crafting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.SetShowShopSign
struct UConsoleScreen_Crafting_C_SetShowShopSign_Params
{
	bool*                                              Show_Shop_Sign;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.Construct
struct UConsoleScreen_Crafting_C_Construct_Params
{
};

// Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.Notification Change
struct UConsoleScreen_Crafting_C_Notification_Change_Params
{
};

// Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.PreConstruct
struct UConsoleScreen_Crafting_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.ExecuteUbergraph_ConsoleScreen_Crafting
struct UConsoleScreen_Crafting_C_ExecuteUbergraph_ConsoleScreen_Crafting_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
