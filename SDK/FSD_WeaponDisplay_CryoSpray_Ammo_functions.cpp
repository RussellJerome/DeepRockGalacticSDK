// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_CryoSpray_Ammo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.Set Progress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_CryoSpray_Ammo_C::Set_Progress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.Set Progress");

	UWeaponDisplay_CryoSpray_Ammo_C_Set_Progress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_CryoSpray_Ammo_C::ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo");

	UWeaponDisplay_CryoSpray_Ammo_C_ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
