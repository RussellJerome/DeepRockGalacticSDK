#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_OrderMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.GetDrinkables
struct UUI_Bar_OrderMenu_C_GetDrinkables_Params
{
	TArray<class UDrinkableDataAsset*>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetMenu
struct UUI_Bar_OrderMenu_C_SetMenu_Params
{
	class UDrinkableDataAsset**                        Special;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UDrinkableDataAsset*>                 Drinks;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UUI_Bar_OrderMenu_C_BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinkAdded
struct UUI_Bar_OrderMenu_C_OnDrinkAdded_Params
{
	class UUI_Bar_OrderMenu_Item_C**                   DrinkWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinksPurchased_Event
struct UUI_Bar_OrderMenu_C_OnDrinksPurchased_Event_Params
{
	class UDrinkableDataAsset**                        Drink;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Cancel Order
struct UUI_Bar_OrderMenu_C_Cancel_Order_Params
{
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnShown
struct UUI_Bar_OrderMenu_C_OnShown_Params
{
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnHover_Event
struct UUI_Bar_OrderMenu_C_OnHover_Event_Params
{
	class USpaceRigBarMenuItem**                       OrderItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature
struct UUI_Bar_OrderMenu_C_BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature_Params
{
	class USpaceRigBarMenuItem**                       Previous_Item;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpaceRigBarMenuItem**                       New_Item;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnPurchaseDenied_Event
struct UUI_Bar_OrderMenu_C_OnPurchaseDenied_Event_Params
{
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature
struct UUI_Bar_OrderMenu_C_BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature_Params
{
	class USpaceRigBarMenuItem**                       OrderItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature
struct UUI_Bar_OrderMenu_C_BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature_Params
{
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnClosed
struct UUI_Bar_OrderMenu_C_OnClosed_Params
{
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature
struct UUI_Bar_OrderMenu_C_BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature_Params
{
	class UDrinkableDataAsset**                        Drink;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetBartender
struct UUI_Bar_OrderMenu_C_SetBartender_Params
{
	class ASpaceRigBar**                               BarActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnNewDrinkableSpecial
struct UUI_Bar_OrderMenu_C_OnNewDrinkableSpecial_Params
{
	class UDrinkableDataAsset**                        Drinkable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ReceiveCloseCommand
struct UUI_Bar_OrderMenu_C_ReceiveCloseCommand_Params
{
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature
struct UUI_Bar_OrderMenu_C_BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature_Params
{
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinkUnlocked
struct UUI_Bar_OrderMenu_C_OnDrinkUnlocked_Params
{
	class UDrinkableDataAsset**                        Drink;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Construct
struct UUI_Bar_OrderMenu_C_Construct_Params
{
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ExecuteUbergraph_UI_Bar_OrderMenu
struct UUI_Bar_OrderMenu_C_ExecuteUbergraph_UI_Bar_OrderMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnRoundSelected__DelegateSignature
struct UUI_Bar_OrderMenu_C_OnRoundSelected__DelegateSignature_Params
{
	class ASpaceRigBar**                               Bar;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDrinkableDataAsset**                        RequestedDrink;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
