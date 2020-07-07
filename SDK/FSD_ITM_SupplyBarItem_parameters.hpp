#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_SupplyBarItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetProgress
struct UITM_SupplyBarItem_C_SetProgress_Params
{
	float*                                             InProgress;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetColors
struct UITM_SupplyBarItem_C_SetColors_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      InBorderColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_MenuColors>*                      InInnerColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_MenuColors>*                      InLowColorColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetOn
struct UITM_SupplyBarItem_C_SetOn_Params
{
	bool*                                              IsOn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.PreConstruct
struct UITM_SupplyBarItem_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.Construct
struct UITM_SupplyBarItem_C_Construct_Params
{
};

// Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.OnBlinkingFinished
struct UITM_SupplyBarItem_C_OnBlinkingFinished_Params
{
};

// Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.ExecuteUbergraph_ITM_SupplyBarItem
struct UITM_SupplyBarItem_C_ExecuteUbergraph_ITM_SupplyBarItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
