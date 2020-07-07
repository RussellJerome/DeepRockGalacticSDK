#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Loadout_PerksEquip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.GetEquippedPerksByType
struct UITM_Loadout_PerksEquip_C_GetEquippedPerksByType_Params
{
	class UClass**                                     InCharacterClass;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPerkUsageType*                                    InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPerkAsset*>                          OutPerks;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.SelectSlot
struct UITM_Loadout_PerksEquip_C_SelectSlot_Params
{
	class UITM_LoadOut_PerksEquip_Slot_C**             InSlot;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.CreateSlots
struct UITM_Loadout_PerksEquip_C_CreateSlots_Params
{
	class UVerticalBox**                               InSlotsBox;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass**                                     InCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPerkUsageType*                                    InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.UpdateSlots
struct UITM_Loadout_PerksEquip_C_UpdateSlots_Params
{
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Get_PerkStar_ToolTipWidget_1
struct UITM_Loadout_PerksEquip_C_Get_PerkStar_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.GetEquippedPerkAt
struct UITM_Loadout_PerksEquip_C_GetEquippedPerkAt_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPerkAsset*>*                         TargetArray;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UPerkAsset*                                  Perk;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.UpdateEquippedPerks
struct UITM_Loadout_PerksEquip_C_UpdateEquippedPerks_Params
{
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Set Character Class
struct UITM_Loadout_PerksEquip_C_Set_Character_Class_Params
{
	class UClass**                                     CharacterClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature
struct UITM_Loadout_PerksEquip_C_BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature_Params
{
	class UPerkAsset**                                 PerkAsset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Construct
struct UITM_Loadout_PerksEquip_C_Construct_Params
{
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.PreConstruct
struct UITM_Loadout_PerksEquip_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.ExecuteUbergraph_ITM_Loadout_PerksEquip
struct UITM_Loadout_PerksEquip_C_ExecuteUbergraph_ITM_Loadout_PerksEquip_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
