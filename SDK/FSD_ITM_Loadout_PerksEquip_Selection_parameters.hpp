#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Loadout_PerksEquip_Selection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.PreConstruct
struct UITM_Loadout_PerksEquip_Selection_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Refresh
struct UITM_Loadout_PerksEquip_Selection_C_Refresh_Params
{
	class UClass**                                     CharacterClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPerkUsageType*                                    PerkType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Add Perk
struct UITM_Loadout_PerksEquip_Selection_C_Add_Perk_Params
{
	class UPerkAsset**                                 Perk;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnClicked_Event
struct UITM_Loadout_PerksEquip_Selection_C_OnClicked_Event_Params
{
	class UITM_LoadOut_PerksEquip_Item_C**             Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Add None
struct UITM_Loadout_PerksEquip_Selection_C_Add_None_Params
{
};

// Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnNoneClicked_Event
struct UITM_Loadout_PerksEquip_Selection_C_OnNoneClicked_Event_Params
{
};

// Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection
struct UITM_Loadout_PerksEquip_Selection_C_ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnPerkClicked__DelegateSignature
struct UITM_Loadout_PerksEquip_Selection_C_OnPerkClicked__DelegateSignature_Params
{
	class UPerkAsset**                                 PerkAsset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
