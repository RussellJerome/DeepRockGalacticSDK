// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_Drill_AmmoCount_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.AdjustProgressBar
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_Drill_AmmoCount_C::AdjustProgressBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.AdjustProgressBar");

	UWeaponDisplay_Drill_AmmoCount_C_AdjustProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.SetClipCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Drill_AmmoCount_C::SetClipCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.SetClipCount");

	UWeaponDisplay_Drill_AmmoCount_C_SetClipCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.SetTotalCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Drill_AmmoCount_C::SetTotalCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.SetTotalCount");

	UWeaponDisplay_Drill_AmmoCount_C_SetTotalCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponDisplay_Drill_AmmoCount_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.Construct");

	UWeaponDisplay_Drill_AmmoCount_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Drill_AmmoCount
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Drill_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_Drill_AmmoCount(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Drill_AmmoCount");

	UWeaponDisplay_Drill_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_Drill_AmmoCount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
