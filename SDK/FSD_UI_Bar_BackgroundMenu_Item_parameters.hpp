#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_BackgroundMenu_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Bar_BackgroundMenu_Item.UI_Bar_BackgroundMenu_Item_C.Set Drinkable shown price
struct UUI_Bar_BackgroundMenu_Item_C_Set_Drinkable_shown_price_Params
{
};

// Function UI_Bar_BackgroundMenu_Item.UI_Bar_BackgroundMenu_Item_C.PreConstruct
struct UUI_Bar_BackgroundMenu_Item_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_BackgroundMenu_Item.UI_Bar_BackgroundMenu_Item_C.ExecuteUbergraph_UI_Bar_BackgroundMenu_Item
struct UUI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
