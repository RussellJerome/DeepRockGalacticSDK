#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_Container_CreatureInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.GetTypeText
struct ULore_Container_CreatureInfo_C_GetTypeText_Params
{
	EEnemyType*                                        InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayText;                                              // (Parm, OutParm)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.SetData
struct ULore_Container_CreatureInfo_C_SetData_Params
{
	class UEnemyMinersManualData**                     Creature;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMinersManual**                              MinersManual;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.FillInAttacks
struct ULore_Container_CreatureInfo_C_FillInAttacks_Params
{
	class UWrapBox**                                   Container;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FEnemyAttackDescription>*            attacks;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.ExecuteUbergraph_Lore_Container_CreatureInfo
struct ULore_Container_CreatureInfo_C_ExecuteUbergraph_Lore_Container_CreatureInfo_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
