#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MENU_UpgradeScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Toggle Auto GearStats Preview
struct UMENU_UpgradeScreen_C_Toggle_Auto_GearStats_Preview_Params
{
	bool*                                              IsOn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ChangeItemCustom
struct UMENU_UpgradeScreen_C_ChangeItemCustom_Params
{
	class UClass**                                     InItemClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              EquipItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetItemTabIndex
struct UMENU_UpgradeScreen_C_GetItemTabIndex_Params
{
	class UClass**                                     InItemClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.SelectNextTab
struct UMENU_UpgradeScreen_C_SelectNextTab_Params
{
	int*                                               Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetYesNoPrompt
struct UMENU_UpgradeScreen_C_GetYesNoPrompt_Params
{
	class UBasic_Popup_YesNoPrompt_C*                  YesNoPrompt;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshGearStats
struct UMENU_UpgradeScreen_C_RefreshGearStats_Params
{
	class FString*                                     entry;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetTabItems
struct UMENU_UpgradeScreen_C_GetTabItems_Params
{
	class UClass**                                     InCharacterClass;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemCategory*                                     InCategory;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Tab_Items;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BuildGearTabs
struct UMENU_UpgradeScreen_C_BuildGearTabs_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ChangeItem
struct UMENU_UpgradeScreen_C_ChangeItem_Params
{
	class UClass**                                     InItemClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshItemDetails
struct UMENU_UpgradeScreen_C_RefreshItemDetails_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Show
struct UMENU_UpgradeScreen_C_Show_Params
{
	class UClass**                                     InCharacterClass;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     InItemClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemCategory*                                     InItemCategory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.PreConstruct
struct UMENU_UpgradeScreen_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature
struct UMENU_UpgradeScreen_C_BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectNextCommand
struct UMENU_UpgradeScreen_C_ReceiveSelectNextCommand_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectPreviousCommand
struct UMENU_UpgradeScreen_C_ReceiveSelectPreviousCommand_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Construct
struct UMENU_UpgradeScreen_C_Construct_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnClosed
struct UMENU_UpgradeScreen_C_OnClosed_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnShown
struct UMENU_UpgradeScreen_C_OnShown_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature
struct UMENU_UpgradeScreen_C_BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UMENU_UpgradeScreen_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UMENU_UpgradeScreen_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UMENU_UpgradeScreen_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveCloseCommand
struct UMENU_UpgradeScreen_C_ReceiveCloseCommand_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveOkCommand
struct UMENU_UpgradeScreen_C_ReceiveOkCommand_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnGrenadeSelected
struct UMENU_UpgradeScreen_C_OnGrenadeSelected_Params
{
	class UClass**                                     itemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Equip;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnPreviewUpgradeChangedEvent
struct UMENU_UpgradeScreen_C_OnPreviewUpgradeChangedEvent_Params
{
	class UItemUpgrade**                               PreviewUpgrade;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemRewarded
struct UMENU_UpgradeScreen_C_OnItemRewarded_Params
{
	struct FMasteryItem*                               Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnFinished
struct UMENU_UpgradeScreen_C_OnFinished_Params
{
	TArray<class UUnlockReward*>                       Rewards;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_0_NewLoadoutSelected__DelegateSignature
struct UMENU_UpgradeScreen_C_BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_0_NewLoadoutSelected__DelegateSignature_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnYesNoClicked_Event
struct UMENU_UpgradeScreen_C_OnYesNoClicked_Event_Params
{
	bool*                                              ClickedYes;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_Skins_Color_K2Node_ComponentBoundEvent_5_OnOpened__DelegateSignature
struct UMENU_UpgradeScreen_C_BndEvt__ITM_Skins_Color_K2Node_ComponentBoundEvent_5_OnOpened__DelegateSignature_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_Skins_Mesh_K2Node_ComponentBoundEvent_6_OnOpened__DelegateSignature
struct UMENU_UpgradeScreen_C_BndEvt__ITM_Skins_Mesh_K2Node_ComponentBoundEvent_6_OnOpened__DelegateSignature_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ExecuteUbergraph_MENU_UpgradeScreen
struct UMENU_UpgradeScreen_C_ExecuteUbergraph_MENU_UpgradeScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemPurchased__DelegateSignature
struct UMENU_UpgradeScreen_C_OnItemPurchased__DelegateSignature_Params
{
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemChanged__DelegateSignature
struct UMENU_UpgradeScreen_C_OnItemChanged__DelegateSignature_Params
{
	class UClass**                                     NewItemClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnCloseClicked__DelegateSignature
struct UMENU_UpgradeScreen_C_OnCloseClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
