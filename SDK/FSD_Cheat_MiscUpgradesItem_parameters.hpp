#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_MiscUpgradesItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Cheat_MiscUpgradesItem.Cheat_MiscUpgradesItem_C.Initiate Widget
struct UCheat_MiscUpgradesItem_C_Initiate_Widget_Params
{
	EItemCategory*                                     First_Upgrade_Item;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_MiscUpgradesItem.Cheat_MiscUpgradesItem_C.BndEvt__ItemSelect_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UCheat_MiscUpgradesItem_C_BndEvt__ItemSelect_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString*                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_MiscUpgradesItem.Cheat_MiscUpgradesItem_C.Initialize Current Item
struct UCheat_MiscUpgradesItem_C_Initialize_Current_Item_Params
{
};

// Function Cheat_MiscUpgradesItem.Cheat_MiscUpgradesItem_C.ExecuteUbergraph_Cheat_MiscUpgradesItem
struct UCheat_MiscUpgradesItem_C_ExecuteUbergraph_Cheat_MiscUpgradesItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
