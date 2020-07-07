#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_InfoBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lore_InfoBox.Lore_InfoBox_C.SetData
struct ULore_InfoBox_C_SetData_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FObjectiveMissionIcon*                      Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      GrayText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Lore_InfoBox.Lore_InfoBox_C.PreConstruct
struct ULore_InfoBox_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_InfoBox.Lore_InfoBox_C.SetColor
struct ULore_InfoBox_C_SetColor_Params
{
	struct FLinearColor*                               InColorAndOpacity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_InfoBox.Lore_InfoBox_C.ExecuteUbergraph_Lore_InfoBox
struct ULore_InfoBox_C_ExecuteUbergraph_Lore_InfoBox_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
