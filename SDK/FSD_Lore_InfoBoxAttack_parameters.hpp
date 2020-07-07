#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_InfoBoxAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.SetData
struct ULore_InfoBoxAttack_C_SetData_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FDamageTypeDescription*                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      GrayText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.PreConstruct
struct ULore_InfoBoxAttack_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.SetColor
struct ULore_InfoBoxAttack_C_SetColor_Params
{
	struct FLinearColor*                               InColorAndOpacity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.ExecuteUbergraph_Lore_InfoBoxAttack
struct ULore_InfoBoxAttack_C_ExecuteUbergraph_Lore_InfoBoxAttack_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
