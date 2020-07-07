#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Forge_SchematicList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddSeparator
struct UUI_Forge_SchematicList_C_AddSeparator_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.PopulateList
struct UUI_Forge_SchematicList_C_PopulateList_Params
{
};

// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.TryAddSeparator
struct UUI_Forge_SchematicList_C_TryAddSeparator_Params
{
	class USchematic**                                 InNextSchematic;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.GetCategoryOrder
struct UUI_Forge_SchematicList_C_GetCategoryOrder_Params
{
	class USchematic**                                 Schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutOrder;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutName;                                                  // (Parm, OutParm)
};

// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddNext
struct UUI_Forge_SchematicList_C_AddNext_Params
{
};

// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Refresh
struct UUI_Forge_SchematicList_C_Refresh_Params
{
};

// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.SortMethod
struct UUI_Forge_SchematicList_C_SortMethod_Params
{
	class USchematic**                                 Schematic1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USchematic**                                 Schematic2;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FirstIsLarger;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.ItemClicked
struct UUI_Forge_SchematicList_C_ItemClicked_Params
{
	class UUI_Forge_Schematic_C**                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddSchematic
struct UUI_Forge_SchematicList_C_AddSchematic_Params
{
	class USchematic**                                 InSchematic;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Clear
struct UUI_Forge_SchematicList_C_Clear_Params
{
};

// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Construct
struct UUI_Forge_SchematicList_C_Construct_Params
{
};

// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.ExecuteUbergraph_UI_Forge_SchematicList
struct UUI_Forge_SchematicList_C_ExecuteUbergraph_UI_Forge_SchematicList_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.OnItemClicked__DelegateSignature
struct UUI_Forge_SchematicList_C_OnItemClicked__DelegateSignature_Params
{
	class UUI_Forge_Schematic_C**                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
