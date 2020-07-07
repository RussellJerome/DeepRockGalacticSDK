#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_PerkInfoBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.GetEquippedPerkAt
struct UITM_PerkInfoBox_C_GetEquippedPerkAt_Params
{
	int*                                               Idx;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPerkAsset*>                          perks;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UPerkAsset*                                  Perk;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.CreateSlots
struct UITM_PerkInfoBox_C_CreateSlots_Params
{
	class UPanelWidget**                               InSlotsBox;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EPerkUsageType*                                    InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.GetEquippedPerksByType
struct UITM_PerkInfoBox_C_GetEquippedPerksByType_Params
{
	class UClass**                                     InCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPerkUsageType*                                    InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPerkAsset*>                          perks;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.Construct
struct UITM_PerkInfoBox_C_Construct_Params
{
};

// Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.PreConstruct
struct UITM_PerkInfoBox_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.Update
struct UITM_PerkInfoBox_C_Update_Params
{
};

// Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.ExecuteUbergraph_ITM_PerkInfoBox
struct UITM_PerkInfoBox_C_ExecuteUbergraph_ITM_PerkInfoBox_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
