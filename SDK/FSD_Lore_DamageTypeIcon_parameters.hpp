#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_DamageTypeIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.GetToolTipWidget_1
struct ULore_DamageTypeIcon_C_GetToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.Construct
struct ULore_DamageTypeIcon_C_Construct_Params
{
};

// Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.SetData
struct ULore_DamageTypeIcon_C_SetData_Params
{
	struct FDamageTypeDescription*                     DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.PlayIntro
struct ULore_DamageTypeIcon_C_PlayIntro_Params
{
	float*                                             Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.ExecuteUbergraph_Lore_DamageTypeIcon
struct ULore_DamageTypeIcon_C_ExecuteUbergraph_Lore_DamageTypeIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
