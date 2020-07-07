#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TOOLTIP_UpgradeIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.UpdateDetailVisibility
struct UTOOLTIP_UpgradeIcon_C_UpdateDetailVisibility_Params
{
};

// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Update
struct UTOOLTIP_UpgradeIcon_C_Update_Params
{
	class UItemUpgradeCategory**                       Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      InUpgradeName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      InUpgradeDescription;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	EItemUpgradeStatus*                                InStatus;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCraftingCost>                       InCost;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              InCanUnequip;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowUpgradeStatus;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.PreConstruct
struct UTOOLTIP_UpgradeIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Construct
struct UTOOLTIP_UpgradeIcon_C_Construct_Params
{
};

// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.OnShowUpgradeExtraDetailsChanged
struct UTOOLTIP_UpgradeIcon_C_OnShowUpgradeExtraDetailsChanged_Params
{
	bool*                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.ExecuteUbergraph_TOOLTIP_UpgradeIcon
struct UTOOLTIP_UpgradeIcon_C_ExecuteUbergraph_TOOLTIP_UpgradeIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
