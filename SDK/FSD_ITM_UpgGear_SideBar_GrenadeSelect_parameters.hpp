#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_SideBar_GrenadeSelect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetActiveGrenade
struct UITM_UpgGear_SideBar_GrenadeSelect_C_SetActiveGrenade_Params
{
	class UClass**                                     NewClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InEquip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      itemClass;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetItem
struct UITM_UpgGear_SideBar_GrenadeSelect_C_SetItem_Params
{
	class UPlayerCharacterID**                         characterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnWidgetCreated
struct UITM_UpgGear_SideBar_GrenadeSelect_C_OnWidgetCreated_Params
{
	class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetYesNoPrompt
struct UITM_UpgGear_SideBar_GrenadeSelect_C_SetYesNoPrompt_Params
{
	class UBasic_Popup_YesNoPrompt_C**                 YesNoPrompt;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.RefreshItems
struct UITM_UpgGear_SideBar_GrenadeSelect_C_RefreshItems_Params
{
};

// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.Reset Grenade Preview
struct UITM_UpgGear_SideBar_GrenadeSelect_C_Reset_Grenade_Preview_Params
{
};

// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.ItemEquipped_Event
struct UITM_UpgGear_SideBar_GrenadeSelect_C_ItemEquipped_Event_Params
{
	class UClass**                                     itemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnYesNo
struct UITM_UpgGear_SideBar_GrenadeSelect_C_OnYesNo_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemTryPurchase
struct UITM_UpgGear_SideBar_GrenadeSelect_C_OnItemTryPurchase_Params
{
	class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** GrenadeWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemUnhovered
struct UITM_UpgGear_SideBar_GrenadeSelect_C_OnItemUnhovered_Params
{
	class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemHovered
struct UITM_UpgGear_SideBar_GrenadeSelect_C_OnItemHovered_Params
{
	class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect
struct UITM_UpgGear_SideBar_GrenadeSelect_C_ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemSelected__DelegateSignature
struct UITM_UpgGear_SideBar_GrenadeSelect_C_OnItemSelected__DelegateSignature_Params
{
	class UClass**                                     itemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Equip;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
