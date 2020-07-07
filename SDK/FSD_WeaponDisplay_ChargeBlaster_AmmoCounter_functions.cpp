// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_ChargeBlaster_AmmoCounter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.UpdateAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_AmmoCounter_C::UpdateAmount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.UpdateAmount");

	UWeaponDisplay_ChargeBlaster_AmmoCounter_C_UpdateAmount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.SetTotalCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_AmmoCounter_C::SetTotalCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.SetTotalCount");

	UWeaponDisplay_ChargeBlaster_AmmoCounter_C_SetTotalCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponDisplay_ChargeBlaster_AmmoCounter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.Construct");

	UWeaponDisplay_ChargeBlaster_AmmoCounter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.Max Ammo Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_AmmoCounter_C::Max_Ammo_Changed(int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.Max Ammo Changed");

	UWeaponDisplay_ChargeBlaster_AmmoCounter_C_Max_Ammo_Changed_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.Total Ammo left changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_AmmoCounter_C::Total_Ammo_left_changed(int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.Total Ammo left changed");

	UWeaponDisplay_ChargeBlaster_AmmoCounter_C_Total_Ammo_left_changed_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.SetClipCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_AmmoCounter_C::SetClipCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.SetClipCount");

	UWeaponDisplay_ChargeBlaster_AmmoCounter_C_SetClipCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.ExecuteUbergraph_WeaponDisplay_ChargeBlaster_AmmoCounter
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_AmmoCounter_C::ExecuteUbergraph_WeaponDisplay_ChargeBlaster_AmmoCounter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.ExecuteUbergraph_WeaponDisplay_ChargeBlaster_AmmoCounter");

	UWeaponDisplay_ChargeBlaster_AmmoCounter_C_ExecuteUbergraph_WeaponDisplay_ChargeBlaster_AmmoCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
