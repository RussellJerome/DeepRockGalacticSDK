#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_Container_CombatTip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.SetText
struct ULore_Container_CombatTip_C_SetText_Params
{
	struct FText*                                      Headline;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      Body;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.PreConstruct
struct ULore_Container_CombatTip_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.PlayIntro
struct ULore_Container_CombatTip_C_PlayIntro_Params
{
};

// Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.ExecuteUbergraph_Lore_Container_CombatTip
struct ULore_Container_CombatTip_C_ExecuteUbergraph_Lore_Container_CombatTip_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
