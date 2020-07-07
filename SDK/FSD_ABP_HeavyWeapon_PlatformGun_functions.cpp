// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_HeavyWeapon_PlatformGun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_HeavyWeapon_PlatformGun.ABP_HeavyWeapon_PlatformGun_C.ExecuteUbergraph_ABP_HeavyWeapon_PlatformGun
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_HeavyWeapon_PlatformGun_C::ExecuteUbergraph_ABP_HeavyWeapon_PlatformGun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_HeavyWeapon_PlatformGun.ABP_HeavyWeapon_PlatformGun_C.ExecuteUbergraph_ABP_HeavyWeapon_PlatformGun");

	UABP_HeavyWeapon_PlatformGun_C_ExecuteUbergraph_ABP_HeavyWeapon_PlatformGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
