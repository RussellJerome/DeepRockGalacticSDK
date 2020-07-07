// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_PlatformGun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_PlatformGun.WPN_PlatformGun_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_PlatformGun_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_PlatformGun.WPN_PlatformGun_C.GetGearStatEntry");

	AWPN_PlatformGun_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_PlatformGun.WPN_PlatformGun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_PlatformGun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_PlatformGun.WPN_PlatformGun_C.ReceiveBeginPlay");

	AWPN_PlatformGun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_PlatformGun.WPN_PlatformGun_C.BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AWPN_PlatformGun_C::BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_PlatformGun.WPN_PlatformGun_C.BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature");

	AWPN_PlatformGun_C_BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_PlatformGun.WPN_PlatformGun_C.Upgraded_Blueprint_Implementation
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UItemUpgrade*>*   Upgrades                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_PlatformGun_C::Upgraded_Blueprint_Implementation(TArray<class UItemUpgrade*>* Upgrades)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_PlatformGun.WPN_PlatformGun_C.Upgraded_Blueprint_Implementation");

	AWPN_PlatformGun_C_Upgraded_Blueprint_Implementation_Params params;
	params.Upgrades = Upgrades;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_PlatformGun.WPN_PlatformGun_C.BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature
// (BlueprintAuthorityOnly, BlueprintEvent)
// Parameters:
// class AProjectileBase**        Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_PlatformGun_C::BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature(class AProjectileBase** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_PlatformGun.WPN_PlatformGun_C.BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature");

	AWPN_PlatformGun_C_BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_PlatformGun.WPN_PlatformGun_C.ExecuteUbergraph_WPN_PlatformGun
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_PlatformGun_C::ExecuteUbergraph_WPN_PlatformGun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_PlatformGun.WPN_PlatformGun_C.ExecuteUbergraph_WPN_PlatformGun");

	AWPN_PlatformGun_C_ExecuteUbergraph_WPN_PlatformGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
