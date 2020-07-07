#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_SentryGun_AmmoCount_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.SetSentry
struct UWeaponDisplay_SentryGun_AmmoCount_C_SetSentry_Params
{
	class ASentryGun**                                 SentryGun;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.OnAmmoCountChanged
struct UWeaponDisplay_SentryGun_AmmoCount_C_OnAmmoCountChanged_Params
{
	int*                                               AmmoCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Change;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.Construct
struct UWeaponDisplay_SentryGun_AmmoCount_C_Construct_Params
{
};

// Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCount
struct UWeaponDisplay_SentryGun_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCount_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
