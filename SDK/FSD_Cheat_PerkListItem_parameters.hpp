#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_PerkListItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Cheat_PerkListItem.Cheat_PerkListItem_C.Construct
struct UCheat_PerkListItem_C_Construct_Params
{
};

// Function Cheat_PerkListItem.Cheat_PerkListItem_C.BndEvt__CheckBox_49_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
struct UCheat_PerkListItem_C_BndEvt__CheckBox_49_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool*                                              bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_PerkListItem.Cheat_PerkListItem_C.Increase font size
struct UCheat_PerkListItem_C_Increase_font_size_Params
{
};

// Function Cheat_PerkListItem.Cheat_PerkListItem_C.ExecuteUbergraph_Cheat_PerkListItem
struct UCheat_PerkListItem_C_ExecuteUbergraph_Cheat_PerkListItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_PerkListItem.Cheat_PerkListItem_C.OnCheckStateChanged__DelegateSignature
struct UCheat_PerkListItem_C_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              Is_Checked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemUpgrade**                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemCategory*                                     Item_Category;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
