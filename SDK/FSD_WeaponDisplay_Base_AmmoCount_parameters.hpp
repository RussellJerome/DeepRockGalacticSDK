#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_Base_AmmoCount_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetMaxAmmo
struct UWeaponDisplay_Base_AmmoCount_C_SetMaxAmmo_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.RequestRedraw
struct UWeaponDisplay_Base_AmmoCount_C_RequestRedraw_Params
{
};

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetTotalCount
struct UWeaponDisplay_Base_AmmoCount_C_SetTotalCount_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetClipCount
struct UWeaponDisplay_Base_AmmoCount_C_SetClipCount_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChanged
struct UWeaponDisplay_Base_AmmoCount_C_OnTotalAmountChanged_Params
{
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnClipEmountChanged
struct UWeaponDisplay_Base_AmmoCount_C_OnClipEmountChanged_Params
{
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnCarriedAmountChanged
struct UWeaponDisplay_Base_AmmoCount_C_OnCarriedAmountChanged_Params
{
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChange
struct UWeaponDisplay_Base_AmmoCount_C_OnTotalAmountChange_Params
{
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Initialize
struct UWeaponDisplay_Base_AmmoCount_C_Initialize_Params
{
	class AItem**                                      OwningItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent**                           WidgetComp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadStarted
struct UWeaponDisplay_Base_AmmoCount_C_OnReloadStarted_Params
{
};

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadComplete
struct UWeaponDisplay_Base_AmmoCount_C_OnReloadComplete_Params
{
};

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Max Ammo Changed
struct UWeaponDisplay_Base_AmmoCount_C_Max_Ammo_Changed_Params
{
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Total Ammo left changed
struct UWeaponDisplay_Base_AmmoCount_C_Total_Ammo_left_changed_Params
{
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Reload Time Tick
struct UWeaponDisplay_Base_AmmoCount_C_Reload_Time_Tick_Params
{
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Base_AmmoCount
struct UWeaponDisplay_Base_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_Base_AmmoCount_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
