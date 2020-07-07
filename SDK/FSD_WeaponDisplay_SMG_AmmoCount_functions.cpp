// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_SMG_AmmoCount_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.SetTotalCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_SMG_AmmoCount_C::SetTotalCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.SetTotalCount");

	UWeaponDisplay_SMG_AmmoCount_C_SetTotalCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.SetClipCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_SMG_AmmoCount_C::SetClipCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.SetClipCount");

	UWeaponDisplay_SMG_AmmoCount_C_SetClipCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponDisplay_SMG_AmmoCount_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.Construct");

	UWeaponDisplay_SMG_AmmoCount_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_SMG_AmmoCount
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_SMG_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_SMG_AmmoCount(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_SMG_AmmoCount");

	UWeaponDisplay_SMG_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_SMG_AmmoCount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
