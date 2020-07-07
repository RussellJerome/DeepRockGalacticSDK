#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Perks_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Perks_Item.UI_Perks_Item_C.SetIconSize
struct UUI_Perks_Item_C_SetIconSize_Params
{
	int*                                               InSize;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Item.UI_Perks_Item_C.Set Selected
struct UUI_Perks_Item_C_Set_Selected_Params
{
	bool*                                              InSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Item.UI_Perks_Item_C.ShowAs
struct UUI_Perks_Item_C_ShowAs_Params
{
	class UPerkAsset**                                 InPerkAsset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InRank;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPerkTierState*                                    InState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InHovered;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InPerkHighlighted;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Item.UI_Perks_Item_C.CreateToolTipWidget
struct UUI_Perks_Item_C_CreateToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UI_Perks_Item.UI_Perks_Item_C.GetPerkAsset
struct UUI_Perks_Item_C_GetPerkAsset_Params
{
	class UPerkAsset*                                  PerkAsset;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EPerkTierState                                     State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Tier;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Item.UI_Perks_Item_C.Refresh
struct UUI_Perks_Item_C_Refresh_Params
{
};

// Function UI_Perks_Item.UI_Perks_Item_C.OnPerkClaimed
struct UUI_Perks_Item_C_OnPerkClaimed_Params
{
	class UPerkAsset**                                 Perk;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClaimedTier;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Item.UI_Perks_Item_C.Construct
struct UUI_Perks_Item_C_Construct_Params
{
};

// Function UI_Perks_Item.UI_Perks_Item_C.Set Hovered
struct UUI_Perks_Item_C_Set_Hovered_Params
{
	bool*                                              Hovered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Item.UI_Perks_Item_C.OnPerkHighlighted_Event
struct UUI_Perks_Item_C_OnPerkHighlighted_Event_Params
{
	class UPerkAsset**                                 Perk;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsHighlighted;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Item.UI_Perks_Item_C.OnPerkPointsChanged
struct UUI_Perks_Item_C_OnPerkPointsChanged_Params
{
	int*                                               PerkPoints;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Change;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Item.UI_Perks_Item_C.OnPingFinished
struct UUI_Perks_Item_C_OnPingFinished_Params
{
};

// Function UI_Perks_Item.UI_Perks_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_Perks_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Perks_Item.UI_Perks_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UUI_Perks_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Perks_Item.UI_Perks_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UUI_Perks_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Perks_Item.UI_Perks_Item_C.PreConstruct
struct UUI_Perks_Item_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Item.UI_Perks_Item_C.ExecuteUbergraph_UI_Perks_Item
struct UUI_Perks_Item_C_ExecuteUbergraph_UI_Perks_Item_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Item.UI_Perks_Item_C.OnClick__DelegateSignature
struct UUI_Perks_Item_C_OnClick__DelegateSignature_Params
{
	class UUI_Perks_Item_C**                           Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Perks_Item.UI_Perks_Item_C.OnHoverLeave__DelegateSignature
struct UUI_Perks_Item_C_OnHoverLeave__DelegateSignature_Params
{
	class UUI_Perks_Item_C**                           Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Perks_Item.UI_Perks_Item_C.OnHoverEnter__DelegateSignature
struct UUI_Perks_Item_C_OnHoverEnter__DelegateSignature_Params
{
	class UUI_Perks_Item_C**                           Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
