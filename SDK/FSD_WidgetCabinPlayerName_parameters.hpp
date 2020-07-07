#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WidgetCabinPlayerName_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WidgetCabinPlayerName.WidgetCabinPlayerName_C.SetColor
struct UWidgetCabinPlayerName_C_SetColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WidgetCabinPlayerName.WidgetCabinPlayerName_C.SetPlayerName
struct UWidgetCabinPlayerName_C_SetPlayerName_Params
{
	struct FText*                                      NewName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
