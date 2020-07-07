#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Perks_Column_Items_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.IsInteractable
struct UUI_Perks_Column_Items_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.RefreshTier
struct UUI_Perks_Column_Items_C_RefreshTier_Params
{
};

// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.AddPerk
struct UUI_Perks_Column_Items_C_AddPerk_Params
{
	class UPerkAsset**                                 Perk;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPerkAsset*                                  OutPerk;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UUI_Perks_Item_C*                            OutWidget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.PreConstruct
struct UUI_Perks_Column_Items_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.Construct
struct UUI_Perks_Column_Items_C_Construct_Params
{
};

// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked_Event
struct UUI_Perks_Column_Items_C_OnPerkClicked_Event_Params
{
	class UUI_Perks_Item_C**                           Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClaimed_Event
struct UUI_Perks_Column_Items_C_OnPerkClaimed_Event_Params
{
	class UPerkAsset**                                 Perk;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClaimedTier;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.SetPerks
struct UUI_Perks_Column_Items_C_SetPerks_Params
{
	TArray<class UPerkAsset*>                          Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.ExecuteUbergraph_UI_Perks_Column_Items
struct UUI_Perks_Column_Items_C_ExecuteUbergraph_UI_Perks_Column_Items_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked__DelegateSignature
struct UUI_Perks_Column_Items_C_OnPerkClicked__DelegateSignature_Params
{
	class UUI_Perks_Item_C**                           PerkWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
