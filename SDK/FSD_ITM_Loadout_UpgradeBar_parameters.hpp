#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Loadout_UpgradeBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ShowItemUpgrades
struct UITM_Loadout_UpgradeBar_C_ShowItemUpgrades_Params
{
	class UClass*                                      InCharacterClass;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass**                                     InItemClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            InPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              EnableHoverTooltip;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.GetUpgradeFromList
struct UITM_Loadout_UpgradeBar_C_GetUpgradeFromList_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UItemUpgrade*>                        Upgrades;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UItemUpgrade*                                Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.Construct
struct UITM_Loadout_UpgradeBar_C_Construct_Params
{
};

// Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.PreConstruct
struct UITM_Loadout_UpgradeBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ExecuteUbergraph_ITM_Loadout_UpgradeBar
struct UITM_Loadout_UpgradeBar_C_ExecuteUbergraph_ITM_Loadout_UpgradeBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
