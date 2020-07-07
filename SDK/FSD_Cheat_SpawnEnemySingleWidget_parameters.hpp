#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_SpawnEnemySingleWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.GetListItemObject
struct UCheat_SpawnEnemySingleWidget_C_GetListItemObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.GetBrushColor_BG
struct UCheat_SpawnEnemySingleWidget_C_GetBrushColor_BG_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.BP_OnEntryReleased
struct UCheat_SpawnEnemySingleWidget_C_BP_OnEntryReleased_Params
{
};

// Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.BP_OnItemExpansionChanged
struct UCheat_SpawnEnemySingleWidget_C_BP_OnItemExpansionChanged_Params
{
	bool*                                              bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.OnListItemObjectSet
struct UCheat_SpawnEnemySingleWidget_C_OnListItemObjectSet_Params
{
	class UObject**                                    ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.BP_OnItemSelectionChanged
struct UCheat_SpawnEnemySingleWidget_C_BP_OnItemSelectionChanged_Params
{
	bool*                                              bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.ExecuteUbergraph_Cheat_SpawnEnemySingleWidget
struct UCheat_SpawnEnemySingleWidget_C_ExecuteUbergraph_Cheat_SpawnEnemySingleWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
