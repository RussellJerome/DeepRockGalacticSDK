#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_BackgroundMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.PreConstruct
struct UUI_Bar_BackgroundMenu_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.Set Bartender
struct UUI_Bar_BackgroundMenu_C_Set_Bartender_Params
{
	class ABP_SpaceRig_Bartender_C**                   InBartender;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.OnNewDrinkableSpecial
struct UUI_Bar_BackgroundMenu_C_OnNewDrinkableSpecial_Params
{
	class UDrinkableDataAsset**                        Drinkable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.ExecuteUbergraph_UI_Bar_BackgroundMenu
struct UUI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.OnRoundSelected__DelegateSignature
struct UUI_Bar_BackgroundMenu_C_OnRoundSelected__DelegateSignature_Params
{
	class ASpaceRigBar**                               Bar;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDrinkableDataAsset**                        RequestedDrink;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
