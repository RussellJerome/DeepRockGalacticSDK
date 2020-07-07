#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_OrderMenu_ItemSpecial_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.HasPlayerRank
struct UUI_Bar_OrderMenu_ItemSpecial_C_HasPlayerRank_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.GetTemporaryBuf
struct UUI_Bar_OrderMenu_ItemSpecial_C_GetTemporaryBuf_Params
{
	class UTemporaryBuff*                              buff;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.UpdateItemStatus
struct UUI_Bar_OrderMenu_ItemSpecial_C_UpdateItemStatus_Params
{
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.GetBorderColor
struct UUI_Bar_OrderMenu_ItemSpecial_C_GetBorderColor_Params
{
	struct FLinearColor                                OutputColor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.IsInteractable
struct UUI_Bar_OrderMenu_ItemSpecial_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.No_026492834E69A68487066993DA576F51
struct UUI_Bar_OrderMenu_ItemSpecial_C_No_026492834E69A68487066993DA576F51_Params
{
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Yes_026492834E69A68487066993DA576F51
struct UUI_Bar_OrderMenu_ItemSpecial_C_Yes_026492834E69A68487066993DA576F51_Params
{
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.PreConstruct
struct UUI_Bar_OrderMenu_ItemSpecial_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Construct
struct UUI_Bar_OrderMenu_ItemSpecial_C_Construct_Params
{
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnCreditsChanged
struct UUI_Bar_OrderMenu_ItemSpecial_C_OnCreditsChanged_Params
{
	int*                                               Credits;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
struct UUI_Bar_OrderMenu_ItemSpecial_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature
struct UUI_Bar_OrderMenu_ItemSpecial_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UUI_Bar_OrderMenu_ItemSpecial_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnPlayerProgressChanged
struct UUI_Bar_OrderMenu_ItemSpecial_C_OnPlayerProgressChanged_Params
{
	int*                                               Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Stars;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Select
struct UUI_Bar_OrderMenu_ItemSpecial_C_Select_Params
{
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Unselect
struct UUI_Bar_OrderMenu_ItemSpecial_C_Unselect_Params
{
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnHoverFinished
struct UUI_Bar_OrderMenu_ItemSpecial_C_OnHoverFinished_Params
{
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BuyFailed
struct UUI_Bar_OrderMenu_ItemSpecial_C_BuyFailed_Params
{
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.TryUnlock
struct UUI_Bar_OrderMenu_ItemSpecial_C_TryUnlock_Params
{
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.SetDrinkable
struct UUI_Bar_OrderMenu_ItemSpecial_C_SetDrinkable_Params
{
	class UDrinkableDataAsset**                        Drinkable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.ExecuteUbergraph_UI_Bar_OrderMenu_ItemSpecial
struct UUI_Bar_OrderMenu_ItemSpecial_C_ExecuteUbergraph_UI_Bar_OrderMenu_ItemSpecial_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnDrinkUnlocked__DelegateSignature
struct UUI_Bar_OrderMenu_ItemSpecial_C_OnDrinkUnlocked__DelegateSignature_Params
{
	class UDrinkableDataAsset**                        Drink;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnSelected__DelegateSignature
struct UUI_Bar_OrderMenu_ItemSpecial_C_OnSelected__DelegateSignature_Params
{
	class USpaceRigBarMenuItem**                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnPurchaseDenied__DelegateSignature
struct UUI_Bar_OrderMenu_ItemSpecial_C_OnPurchaseDenied__DelegateSignature_Params
{
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnUnhover__DelegateSignature
struct UUI_Bar_OrderMenu_ItemSpecial_C_OnUnhover__DelegateSignature_Params
{
	class USpaceRigBarMenuItem**                       OrderItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnHover__DelegateSignature
struct UUI_Bar_OrderMenu_ItemSpecial_C_OnHover__DelegateSignature_Params
{
	class USpaceRigBarMenuItem**                       OrderItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnDrinksPurchased__DelegateSignature
struct UUI_Bar_OrderMenu_ItemSpecial_C_OnDrinksPurchased__DelegateSignature_Params
{
	class UDrinkableDataAsset**                        Drink;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
