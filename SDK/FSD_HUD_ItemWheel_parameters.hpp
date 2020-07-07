#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_ItemWheel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_ItemWheel.HUD_ItemWheel_C.SwapUpperItems
struct UHUD_ItemWheel_C_SwapUpperItems_Params
{
	class UWidget**                                    Unselected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget**                                    Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemAdded
struct UHUD_ItemWheel_C_OnItemAdded_Params
{
	class UItemsBarIcon**                              ItemIcon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_ItemWheel.HUD_ItemWheel_C.PreConstruct
struct UHUD_ItemWheel_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemEquipped
struct UHUD_ItemWheel_C_OnItemEquipped_Params
{
	class UItemsBarIcon**                              ItemIcon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_ItemWheel.HUD_ItemWheel_C.AddIcon
struct UHUD_ItemWheel_C_AddIcon_Params
{
	class UItemsBarIcon**                              Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ItemWheel.HUD_ItemWheel_C.OnClear
struct UHUD_ItemWheel_C_OnClear_Params
{
};

// Function HUD_ItemWheel.HUD_ItemWheel_C.Construct
struct UHUD_ItemWheel_C_Construct_Params
{
};

// Function HUD_ItemWheel.HUD_ItemWheel_C.OnInputSourceChanged
struct UHUD_ItemWheel_C_OnInputSourceChanged_Params
{
	EInputSource*                                      InputSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ItemWheel.HUD_ItemWheel_C.Show
struct UHUD_ItemWheel_C_Show_Params
{
};

// Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemClicked
struct UHUD_ItemWheel_C_OnItemClicked_Params
{
};

// Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemAdded
struct UHUD_ItemWheel_C_OnSupplyItemAdded_Params
{
	class UItemsBarIcon**                              ItemIcon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemUnequipped
struct UHUD_ItemWheel_C_OnSupplyItemUnequipped_Params
{
	class UItemsBarIcon**                              ItemIcon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemEquipped
struct UHUD_ItemWheel_C_OnSupplyItemEquipped_Params
{
	class UItemsBarIcon**                              ItemIcon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_ItemWheel.HUD_ItemWheel_C.OnFadeInOutFinished
struct UHUD_ItemWheel_C_OnFadeInOutFinished_Params
{
};

// Function HUD_ItemWheel.HUD_ItemWheel_C.OnFadeInOutStarted
struct UHUD_ItemWheel_C_OnFadeInOutStarted_Params
{
};

// Function HUD_ItemWheel.HUD_ItemWheel_C.ExecuteUbergraph_HUD_ItemWheel
struct UHUD_ItemWheel_C_ExecuteUbergraph_HUD_ItemWheel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
