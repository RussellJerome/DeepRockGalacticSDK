#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_ObjectiveBox_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.UpdateText
struct UHUD_ObjectiveBox_Item_C_UpdateText_Params
{
	struct FText*                                      InText;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      InCounterText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D**                                 InCounterIcon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Completed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.Set Objective
struct UHUD_ObjectiveBox_Item_C_Set_Objective_Params
{
	class UObjective**                                 Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsPrimary;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.OnObjectiveUpdated
struct UHUD_ObjectiveBox_Item_C_OnObjectiveUpdated_Params
{
	class UObjective**                                 Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.PreConstruct
struct UHUD_ObjectiveBox_Item_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.SetCustom
struct UHUD_ObjectiveBox_Item_C_SetCustom_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Completed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.ExecuteUbergraph_HUD_ObjectiveBox_Item
struct UHUD_ObjectiveBox_Item_C_ExecuteUbergraph_HUD_ObjectiveBox_Item_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
