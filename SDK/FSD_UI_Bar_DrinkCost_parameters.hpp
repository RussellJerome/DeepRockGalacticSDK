#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_DrinkCost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.SetCostWidgets
struct UUI_Bar_DrinkCost_C_SetCostWidgets_Params
{
	TMap<class UResourceData*, int>*                   TargetMap;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ShowCost
struct UUI_Bar_DrinkCost_C_ShowCost_Params
{
	class UDrinkableDataAsset**                        Drinkable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowUnlockPrice;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.Construct
struct UUI_Bar_DrinkCost_C_Construct_Params
{
};

// Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.OnFreeBeerRewardChanged
struct UUI_Bar_DrinkCost_C_OnFreeBeerRewardChanged_Params
{
	bool*                                              IsBeersFree;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ShowFixedCost
struct UUI_Bar_DrinkCost_C_ShowFixedCost_Params
{
	TMap<class UResourceData*, int>*                   Cost;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ExecuteUbergraph_UI_Bar_DrinkCost
struct UUI_Bar_DrinkCost_C_ExecuteUbergraph_UI_Bar_DrinkCost_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
