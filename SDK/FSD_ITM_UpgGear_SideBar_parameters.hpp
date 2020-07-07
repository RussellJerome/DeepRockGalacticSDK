#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_SideBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetUpgradePurchasedShout
struct UITM_UpgGear_SideBar_C_SetUpgradePurchasedShout_Params
{
	class UDialogDataAsset**                           ShoutUpgradePurchased;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetItem
struct UITM_UpgGear_SideBar_C_SetItem_Params
{
	class UClass*                                      InCharacterClass;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      InItemClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	EItemCategory                                      InCategory;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetYesNoPrompt
struct UITM_UpgGear_SideBar_C_SetYesNoPrompt_Params
{
	class UBasic_Popup_YesNoPrompt_C**                 Prompt;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UITM_UpgGear_SideBar_C_BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UBasic_FlatButton_C**                        Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BuyConfirmation
struct UITM_UpgGear_SideBar_C_BuyConfirmation_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.UpgradePurchased
struct UITM_UpgGear_SideBar_C_UpgradePurchased_Params
{
	class UITM_UpgGear_TierRow_C**                     Row;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.PreConstruct
struct UITM_UpgGear_SideBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.ExecuteUbergraph_ITM_UpgGear_SideBar
struct UITM_UpgGear_SideBar_C_ExecuteUbergraph_ITM_UpgGear_SideBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.OnItemPurchased__DelegateSignature
struct UITM_UpgGear_SideBar_C_OnItemPurchased__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
