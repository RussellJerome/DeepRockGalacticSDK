#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_SupporterLabel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.SetDrinkable
struct UUI_Bar_SupporterLabel_C_SetDrinkable_Params
{
	class UDrinkableDataAsset**                        Drinkable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSupporterEdition;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UDrinkableDataAsset*                         OutDrinkable;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.PreConstruct
struct UUI_Bar_SupporterLabel_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.ExecuteUbergraph_UI_Bar_SupporterLabel
struct UUI_Bar_SupporterLabel_C_ExecuteUbergraph_UI_Bar_SupporterLabel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
