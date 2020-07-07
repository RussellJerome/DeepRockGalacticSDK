// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_SentryGun_AmmoCount_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.SetSentry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASentryGun**             SentryGun                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_SentryGun_AmmoCount_C::SetSentry(class ASentryGun** SentryGun)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.SetSentry");

	UWeaponDisplay_SentryGun_AmmoCount_C_SetSentry_Params params;
	params.SentryGun = SentryGun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.OnAmmoCountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AmmoCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Change                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_SentryGun_AmmoCount_C::OnAmmoCountChanged(int* AmmoCount, int* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.OnAmmoCountChanged");

	UWeaponDisplay_SentryGun_AmmoCount_C_OnAmmoCountChanged_Params params;
	params.AmmoCount = AmmoCount;
	params.Change = Change;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponDisplay_SentryGun_AmmoCount_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.Construct");

	UWeaponDisplay_SentryGun_AmmoCount_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCount
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_SentryGun_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCount(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCount");

	UWeaponDisplay_SentryGun_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
