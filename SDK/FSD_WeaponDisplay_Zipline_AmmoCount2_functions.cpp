// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_Zipline_AmmoCount2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_Zipline_AmmoCount2.WeaponDisplay_Zipline_AmmoCount2_C.SetTotalCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Zipline_AmmoCount2_C::SetTotalCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Zipline_AmmoCount2.WeaponDisplay_Zipline_AmmoCount2_C.SetTotalCount");

	UWeaponDisplay_Zipline_AmmoCount2_C_SetTotalCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Zipline_AmmoCount2.WeaponDisplay_Zipline_AmmoCount2_C.SetClipCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Zipline_AmmoCount2_C::SetClipCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Zipline_AmmoCount2.WeaponDisplay_Zipline_AmmoCount2_C.SetClipCount");

	UWeaponDisplay_Zipline_AmmoCount2_C_SetClipCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Zipline_AmmoCount2.WeaponDisplay_Zipline_AmmoCount2_C.ExecuteUbergraph_WeaponDisplay_Zipline_AmmoCount2
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Zipline_AmmoCount2_C::ExecuteUbergraph_WeaponDisplay_Zipline_AmmoCount2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Zipline_AmmoCount2.WeaponDisplay_Zipline_AmmoCount2_C.ExecuteUbergraph_WeaponDisplay_Zipline_AmmoCount2");

	UWeaponDisplay_Zipline_AmmoCount2_C_ExecuteUbergraph_WeaponDisplay_Zipline_AmmoCount2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
