#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_OrderMenu_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.AreBeersFreee
struct UUI_Bar_OrderMenu_Item_C_AreBeersFreee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.HasPlayerRank
struct UUI_Bar_OrderMenu_Item_C_HasPlayerRank_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.GetTemporaryBuf
struct UUI_Bar_OrderMenu_Item_C_GetTemporaryBuf_Params
{
	class UTemporaryBuff*                              buff;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.UpdateItem
struct UUI_Bar_OrderMenu_Item_C_UpdateItem_Params
{
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.GetBorderColor
struct UUI_Bar_OrderMenu_Item_C_GetBorderColor_Params
{
	struct FLinearColor                                OutputColor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.IsInteractable
struct UUI_Bar_OrderMenu_Item_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.No_0F2CD82B4BA6006B33BED8B78B16B74B
struct UUI_Bar_OrderMenu_Item_C_No_0F2CD82B4BA6006B33BED8B78B16B74B_Params
{
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Yes_0F2CD82B4BA6006B33BED8B78B16B74B
struct UUI_Bar_OrderMenu_Item_C_Yes_0F2CD82B4BA6006B33BED8B78B16B74B_Params
{
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.PreConstruct
struct UUI_Bar_OrderMenu_Item_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Construct
struct UUI_Bar_OrderMenu_Item_C_Construct_Params
{
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnCreditsChanged
struct UUI_Bar_OrderMenu_Item_C_OnCreditsChanged_Params
{
	int*                                               Credits;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
struct UUI_Bar_OrderMenu_Item_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature
struct UUI_Bar_OrderMenu_Item_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UUI_Bar_OrderMenu_Item_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnPlayerProgressChanged
struct UUI_Bar_OrderMenu_Item_C_OnPlayerProgressChanged_Params
{
	int*                                               Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Stars;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Select
struct UUI_Bar_OrderMenu_Item_C_Select_Params
{
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Unselect
struct UUI_Bar_OrderMenu_Item_C_Unselect_Params
{
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnHoverFinished
struct UUI_Bar_OrderMenu_Item_C_OnHoverFinished_Params
{
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BuyFailed
struct UUI_Bar_OrderMenu_Item_C_BuyFailed_Params
{
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.TryUnlock
struct UUI_Bar_OrderMenu_Item_C_TryUnlock_Params
{
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnUnlockAnimFinished_Event
struct UUI_Bar_OrderMenu_Item_C_OnUnlockAnimFinished_Event_Params
{
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.ExecuteUbergraph_UI_Bar_OrderMenu_Item
struct UUI_Bar_OrderMenu_Item_C_ExecuteUbergraph_UI_Bar_OrderMenu_Item_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnDrinkUnlocked__DelegateSignature
struct UUI_Bar_OrderMenu_Item_C_OnDrinkUnlocked__DelegateSignature_Params
{
	class UDrinkableDataAsset**                        Drink;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnSelected__DelegateSignature
struct UUI_Bar_OrderMenu_Item_C_OnSelected__DelegateSignature_Params
{
	class USpaceRigBarMenuItem**                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnPurchaseDenied__DelegateSignature
struct UUI_Bar_OrderMenu_Item_C_OnPurchaseDenied__DelegateSignature_Params
{
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnUnhover__DelegateSignature
struct UUI_Bar_OrderMenu_Item_C_OnUnhover__DelegateSignature_Params
{
	class USpaceRigBarMenuItem**                       OrderItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnHover__DelegateSignature
struct UUI_Bar_OrderMenu_Item_C_OnHover__DelegateSignature_Params
{
	class USpaceRigBarMenuItem**                       OrderItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnDrinksPurchased__DelegateSignature
struct UUI_Bar_OrderMenu_Item_C_OnDrinksPurchased__DelegateSignature_Params
{
	class UDrinkableDataAsset**                        Drink;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
