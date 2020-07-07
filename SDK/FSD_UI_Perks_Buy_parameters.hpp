#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Perks_Buy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Perks_Buy.UI_Perks_Buy_C.CanBuyPerk
struct UUI_Perks_Buy_C_CanBuyPerk_Params
{
	bool                                               Can_Buy;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Buy.UI_Perks_Buy_C.SetPerk
struct UUI_Perks_Buy_C_SetPerk_Params
{
	class UPerkAsset**                                 InPerk;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InTier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Buy.UI_Perks_Buy_C.PreConstruct
struct UUI_Perks_Buy_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Buy.UI_Perks_Buy_C.BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UUI_Perks_Buy_C_BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UBasic_FlatButton_C**                        Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Perks_Buy.UI_Perks_Buy_C.Construct
struct UUI_Perks_Buy_C_Construct_Params
{
};

// Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkPointsChanged
struct UUI_Perks_Buy_C_OnPerkPointsChanged_Params
{
	int*                                               PerkPoints;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Change;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Buy.UI_Perks_Buy_C.Buy Selected Perk
struct UUI_Perks_Buy_C_Buy_Selected_Perk_Params
{
};

// Function UI_Perks_Buy.UI_Perks_Buy_C.ExecuteUbergraph_UI_Perks_Buy
struct UUI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkClaimed__DelegateSignature
struct UUI_Perks_Buy_C_OnPerkClaimed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
