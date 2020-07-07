#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetUpgradeToolTip
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_GetUpgradeToolTip_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.SetIsHovered
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_SetIsHovered_Params
{
	bool*                                              InHovered;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.EquipItem
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_EquipItem_Params
{
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.TryPurchaseItem
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_TryPurchaseItem_Params
{
	bool                                               success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetGrenadeInfo
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_GetGrenadeInfo_Params
{
	struct FText                                       Name;                                                     // (Parm, OutParm)
	struct FText                                       Description;                                              // (Parm, OutParm)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetCraftingCost
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_GetCraftingCost_Params
{
	TArray<struct FCraftingCost>                       Cost;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.OnKeyDown
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.UpdateToolTip
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_UpdateToolTip_Params
{
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.IsInteractable
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetCurrentState
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_GetCurrentState_Params
{
	EItemUpgradeStatus                                 Item_State;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.SetState
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_SetState_Params
{
	EItemUpgradeStatus*                                InItemStatus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InRequiredCharacterLevel;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.Refresh
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_Refresh_Params
{
	EItemUpgradeStatus                                 OutState;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.SetItem
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_SetItem_Params
{
	class UClass**                                     GrenadeClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerCharacterID**                         characterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemUpgradeStatus                                 OutState;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.PreConstruct
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemTryPurchase__DelegateSignature
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_ItemTryPurchase__DelegateSignature_Params
{
	class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** GrenadeWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemUnhovered__DelegateSignature
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_ItemUnhovered__DelegateSignature_Params
{
	class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemHovered__DelegateSignature
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_ItemHovered__DelegateSignature_Params
{
	class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemEquipped__DelegateSignature
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_ItemEquipped__DelegateSignature_Params
{
	class UClass**                                     itemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
