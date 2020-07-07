#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_TierRow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.UpdateBackBar
struct UITM_UpgGear_TierRow_C_UpdateBackBar_Params
{
};

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.SetPurchasedShout
struct UITM_UpgGear_TierRow_C_SetPurchasedShout_Params
{
	class UDialogDataAsset**                           InShout;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.GetIsRowLocked
struct UITM_UpgGear_TierRow_C_GetIsRowLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PreConstruct
struct UITM_UpgGear_TierRow_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Construct
struct UITM_UpgGear_TierRow_C_Construct_Params
{
};

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Initialize Upgrade Widget
struct UITM_UpgGear_TierRow_C_Initialize_Upgrade_Widget_Params
{
	class UITM_UpgGear_UpgIconSingle_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh
struct UITM_UpgGear_TierRow_C_Refresh_Params
{
};

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.EquipUpgrade
struct UITM_UpgGear_TierRow_C_EquipUpgrade_Params
{
	class UITM_UpgGear_UpgIconSingle_C**               UpgradeWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PurchaseUpgrade
struct UITM_UpgGear_TierRow_C_PurchaseUpgrade_Params
{
	class UITM_UpgGear_UpgIconSingle_C**               UpgradeWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnPurchaseConfirmation
struct UITM_UpgGear_TierRow_C_OnPurchaseConfirmation_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh Tier Icon
struct UITM_UpgGear_TierRow_C_Refresh_Tier_Icon_Params
{
};

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Unequip Upgrade
struct UITM_UpgGear_TierRow_C_Unequip_Upgrade_Params
{
	class UITM_UpgGear_UpgIconSingle_C**               Upgrade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeHovered
struct UITM_UpgGear_TierRow_C_OnUpgradeHovered_Params
{
	class UITM_UpgGear_UpgIconSingle_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeUnhovered
struct UITM_UpgGear_TierRow_C_OnUpgradeUnhovered_Params
{
	class UITM_UpgGear_UpgIconSingle_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgrade Clicked
struct UITM_UpgGear_TierRow_C_OnUpgrade_Clicked_Params
{
	class UITM_UpgGear_UpgIconSingle_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.ExecuteUbergraph_ITM_UpgGear_TierRow
struct UITM_UpgGear_TierRow_C_ExecuteUbergraph_ITM_UpgGear_TierRow_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
