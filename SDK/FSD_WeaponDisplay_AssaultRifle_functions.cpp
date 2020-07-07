// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_AssaultRifle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_AssaultRifle.WeaponDisplay_AssaultRifle_C.SetTotalCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_AssaultRifle_C::SetTotalCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_AssaultRifle.WeaponDisplay_AssaultRifle_C.SetTotalCount");

	UWeaponDisplay_AssaultRifle_C_SetTotalCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_AssaultRifle.WeaponDisplay_AssaultRifle_C.SetClipCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_AssaultRifle_C::SetClipCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_AssaultRifle.WeaponDisplay_AssaultRifle_C.SetClipCount");

	UWeaponDisplay_AssaultRifle_C_SetClipCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_AssaultRifle.WeaponDisplay_AssaultRifle_C.ExecuteUbergraph_WeaponDisplay_AssaultRifle
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_AssaultRifle_C::ExecuteUbergraph_WeaponDisplay_AssaultRifle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_AssaultRifle.WeaponDisplay_AssaultRifle_C.ExecuteUbergraph_WeaponDisplay_AssaultRifle");

	UWeaponDisplay_AssaultRifle_C_ExecuteUbergraph_WeaponDisplay_AssaultRifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
