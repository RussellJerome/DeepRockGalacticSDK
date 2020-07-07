#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_UpgIconSingle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnMouseButtonDown
struct UITM_UpgGear_UpgIconSingle_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Get_UpgradeIcon_ToolTip
struct UITM_UpgGear_UpgIconSingle_C_Get_UpgradeIcon_ToolTip_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnKeyDown
struct UITM_UpgGear_UpgIconSingle_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ToggleStatPreview
struct UITM_UpgGear_UpgIconSingle_C_ToggleStatPreview_Params
{
	bool*                                              Preview;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierLock
struct UITM_UpgGear_UpgIconSingle_C_GetTierLock_Params
{
	class AFSDPlayerState**                            InPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUpgradeTier*                               InTierUpgrades;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                LockLevel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  LockIcon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_MenuColors>                       LockBackgroundTint;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryUnequipUpgrade
struct UITM_UpgGear_UpgIconSingle_C_TryUnequipUpgrade_Params
{
	bool                                               success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeCategory
struct UITM_UpgGear_UpgIconSingle_C_GetUpgradeCategory_Params
{
	class UItemUpgradeCategory*                        Category;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeIcon
struct UITM_UpgGear_UpgIconSingle_C_GetUpgradeIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetGoogleAnalytics
struct UITM_UpgGear_UpgIconSingle_C_GetGoogleAnalytics_Params
{
	class UItemUpgrade**                               Upgrade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsInteractable
struct UITM_UpgGear_UpgIconSingle_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierStatus
struct UITM_UpgGear_UpgIconSingle_C_GetTierStatus_Params
{
	struct FUpgradeTier*                               InTier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               InTierIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     InCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     InItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            InPlayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemUpgradeStatus                                 DefaultStatus;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsTierIsAffordable
struct UITM_UpgGear_UpgIconSingle_C_IsTierIsAffordable_Params
{
	struct FUpgradeTier                                TierUpgrades;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UClass**                                     InItemClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            InPlayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     InCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Affordable;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ShowTier
struct UITM_UpgGear_UpgIconSingle_C_ShowTier_Params
{
	class UClass**                                     InItemClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     InCharacterClass;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InTierIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUpgradeTier*                               InTier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AFSDPlayerState**                            InPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InShowLockRequirement;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowToolTip;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetPlayerState
struct UITM_UpgGear_UpgIconSingle_C_GetPlayerState_Params
{
	class AFSDPlayerState*                             PlayerState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemClass
struct UITM_UpgGear_UpgIconSingle_C_GetItemClass_Params
{
	class UClass*                                      itemClass;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemUpgrade
struct UITM_UpgGear_UpgIconSingle_C_GetItemUpgrade_Params
{
	class UItemUpgrade*                                Upgrade;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryEquipUpgrade
struct UITM_UpgGear_UpgIconSingle_C_TryEquipUpgrade_Params
{
	bool                                               Equipped;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryPurchaseUpgrade
struct UITM_UpgGear_UpgIconSingle_C_TryPurchaseUpgrade_Params
{
	bool                                               Purchased;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeStatus
struct UITM_UpgGear_UpgIconSingle_C_GetUpgradeStatus_Params
{
	EItemUpgradeStatus                                 Status;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Show
struct UITM_UpgGear_UpgIconSingle_C_Show_Params
{
	class UItemUpgrade**                               InUpgrade;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     InItemClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerCharacterID**                         PlayerCharacterID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            InPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowEquipAsBorder;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InTierLocked;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh
struct UITM_UpgGear_UpgIconSingle_C_Refresh_Params
{
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature
struct UITM_UpgGear_UpgIconSingle_C_BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature_Params
{
	class UITM_BaseUpgradeIcon_C**                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature
struct UITM_UpgGear_UpgIconSingle_C_BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature_Params
{
	class UITM_BaseUpgradeIcon_C**                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature
struct UITM_UpgGear_UpgIconSingle_C_BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature_Params
{
	class UITM_BaseUpgradeIcon_C**                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh Tool Tip
struct UITM_UpgGear_UpgIconSingle_C_Refresh_Tool_Tip_Params
{
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.PlayPurchasedAnim
struct UITM_UpgGear_UpgIconSingle_C_PlayPurchasedAnim_Params
{
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ExecuteUbergraph_ITM_UpgGear_UpgIconSingle
struct UITM_UpgGear_UpgIconSingle_C_ExecuteUbergraph_ITM_UpgGear_UpgIconSingle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeClicked__DelegateSignature
struct UITM_UpgGear_UpgIconSingle_C_OnUpgradeClicked__DelegateSignature_Params
{
	class UITM_UpgGear_UpgIconSingle_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeUnhovered__DelegateSignature
struct UITM_UpgGear_UpgIconSingle_C_OnUpgradeUnhovered__DelegateSignature_Params
{
	class UITM_UpgGear_UpgIconSingle_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeHovered__DelegateSignature
struct UITM_UpgGear_UpgIconSingle_C_OnUpgradeHovered__DelegateSignature_Params
{
	class UITM_UpgGear_UpgIconSingle_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
