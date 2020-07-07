#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_HorizontalResourceBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.SetFromDict
struct UUI_HorizontalResourceBar_C_SetFromDict_Params
{
	TMap<class UResourceData*, int>*                   InResources;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.SetCraftingCost
struct UUI_HorizontalResourceBar_C_SetCraftingCost_Params
{
	TArray<struct FCraftingCost>                       Cost;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               OutCanAfford;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.AddResource
struct UUI_HorizontalResourceBar_C_AddResource_Params
{
	class UResourceData**                              InResource;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InRequiredAmount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.Clear
struct UUI_HorizontalResourceBar_C_Clear_Params
{
};

// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.AddResourceCustom
struct UUI_HorizontalResourceBar_C_AddResourceCustom_Params
{
	class UResourceData**                              InResource;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InRequiredAmount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IconOnRight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowRequiredAmount;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.PreConstruct
struct UUI_HorizontalResourceBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.ExecuteUbergraph_UI_HorizontalResourceBar
struct UUI_HorizontalResourceBar_C_ExecuteUbergraph_UI_HorizontalResourceBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
