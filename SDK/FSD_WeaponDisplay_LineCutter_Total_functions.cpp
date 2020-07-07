// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_LineCutter_Total_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_LineCutter_Total.WeaponDisplay_LineCutter_Total_C.SetTotalCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_LineCutter_Total_C::SetTotalCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_LineCutter_Total.WeaponDisplay_LineCutter_Total_C.SetTotalCount");

	UWeaponDisplay_LineCutter_Total_C_SetTotalCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_LineCutter_Total.WeaponDisplay_LineCutter_Total_C.SetClipCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_LineCutter_Total_C::SetClipCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_LineCutter_Total.WeaponDisplay_LineCutter_Total_C.SetClipCount");

	UWeaponDisplay_LineCutter_Total_C_SetClipCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_LineCutter_Total.WeaponDisplay_LineCutter_Total_C.ExecuteUbergraph_WeaponDisplay_LineCutter_Total
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_LineCutter_Total_C::ExecuteUbergraph_WeaponDisplay_LineCutter_Total(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_LineCutter_Total.WeaponDisplay_LineCutter_Total_C.ExecuteUbergraph_WeaponDisplay_LineCutter_Total");

	UWeaponDisplay_LineCutter_Total_C_ExecuteUbergraph_WeaponDisplay_LineCutter_Total_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
