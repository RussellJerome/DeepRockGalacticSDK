#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_GearStat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.SetGearStat
struct UITM_UpgGear_GearStat_C_SetGearStat_Params
{
	struct FGearStatEntry*                             InStat;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.SetData
struct UITM_UpgGear_GearStat_C_SetData_Params
{
	struct FText*                                      InStatName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      InStatValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      InStatBaseValue;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      InStatUpgradeValue;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	EItemPreviewStatus*                                InItemPreviewStatus;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.PreConstruct
struct UITM_UpgGear_GearStat_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.ExecuteUbergraph_ITM_UpgGear_GearStat
struct UITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
