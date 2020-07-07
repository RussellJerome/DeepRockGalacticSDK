#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_SetPerk_Row_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Cheat_SetPerk_Row.Cheat_SetPerk_Row_C.Set Perk for row
struct UCheat_SetPerk_Row_C_Set_Perk_for_row_Params
{
	class UPerkAsset**                                 Perk_for_row;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_SetPerk_Row.Cheat_SetPerk_Row_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_64_OnCheckBoxComponentStateChanged__DelegateSignature
struct UCheat_SetPerk_Row_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_64_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool*                                              bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_SetPerk_Row.Cheat_SetPerk_Row_C.Check if owned perk is a active perk
struct UCheat_SetPerk_Row_C_Check_if_owned_perk_is_a_active_perk_Params
{
};

// Function Cheat_SetPerk_Row.Cheat_SetPerk_Row_C.ExecuteUbergraph_Cheat_SetPerk_Row
struct UCheat_SetPerk_Row_C_ExecuteUbergraph_Cheat_SetPerk_Row_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_SetPerk_Row.Cheat_SetPerk_Row_C.On PerkRow checked__DelegateSignature
struct UCheat_SetPerk_Row_C_On_PerkRow_checked__DelegateSignature_Params
{
	class UCheat_SetPerk_Row_C**                       Buff_row_to_skip;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
