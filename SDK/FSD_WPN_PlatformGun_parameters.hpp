#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_PlatformGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_PlatformGun.WPN_PlatformGun_C.GetGearStatEntry
struct AWPN_PlatformGun_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_PlatformGun.WPN_PlatformGun_C.ReceiveBeginPlay
struct AWPN_PlatformGun_C_ReceiveBeginPlay_Params
{
};

// Function WPN_PlatformGun.WPN_PlatformGun_C.BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature
struct AWPN_PlatformGun_C_BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WPN_PlatformGun.WPN_PlatformGun_C.Upgraded_Blueprint_Implementation
struct AWPN_PlatformGun_C_Upgraded_Blueprint_Implementation_Params
{
	TArray<class UItemUpgrade*>*                       Upgrades;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_PlatformGun.WPN_PlatformGun_C.BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature
struct AWPN_PlatformGun_C_BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature_Params
{
	class AProjectileBase**                            Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_PlatformGun.WPN_PlatformGun_C.ExecuteUbergraph_WPN_PlatformGun
struct AWPN_PlatformGun_C_ExecuteUbergraph_WPN_PlatformGun_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
