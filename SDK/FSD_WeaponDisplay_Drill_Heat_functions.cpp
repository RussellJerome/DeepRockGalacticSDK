// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_Drill_Heat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.SetHeatValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         HeatPercentage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Overheated                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Drill_Heat_C::SetHeatValue(float* HeatPercentage, bool* Overheated)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.SetHeatValue");

	UWeaponDisplay_Drill_Heat_C_SetHeatValue_Params params;
	params.HeatPercentage = HeatPercentage;
	params.Overheated = Overheated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponDisplay_Drill_Heat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.Construct");

	UWeaponDisplay_Drill_Heat_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.ExecuteUbergraph_WeaponDisplay_Drill_Heat
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Drill_Heat_C::ExecuteUbergraph_WeaponDisplay_Drill_Heat(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.ExecuteUbergraph_WeaponDisplay_Drill_Heat");

	UWeaponDisplay_Drill_Heat_C_ExecuteUbergraph_WeaponDisplay_Drill_Heat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
