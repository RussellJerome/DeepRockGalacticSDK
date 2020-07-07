#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_GrenadeLauncher_AmmoCounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.SetTotalCount
struct UWeaponDisplay_GrenadeLauncher_AmmoCounter_C_SetTotalCount_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.SetClipCount
struct UWeaponDisplay_GrenadeLauncher_AmmoCounter_C_SetClipCount_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.Construct
struct UWeaponDisplay_GrenadeLauncher_AmmoCounter_C_Construct_Params
{
};

// Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.Max Ammo Changed
struct UWeaponDisplay_GrenadeLauncher_AmmoCounter_C_Max_Ammo_Changed_Params
{
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.Total Ammo left changed
struct UWeaponDisplay_GrenadeLauncher_AmmoCounter_C_Total_Ammo_left_changed_Params
{
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.ExecuteUbergraph_WeaponDisplay_GrenadeLauncher_AmmoCounter
struct UWeaponDisplay_GrenadeLauncher_AmmoCounter_C_ExecuteUbergraph_WeaponDisplay_GrenadeLauncher_AmmoCounter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
