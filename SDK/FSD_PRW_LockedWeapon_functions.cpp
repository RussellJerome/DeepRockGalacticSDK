// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRW_LockedWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRW_LockedWeapon.PRW_LockedWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APRW_LockedWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRW_LockedWeapon.PRW_LockedWeapon_C.ReceiveBeginPlay");

	APRW_LockedWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRW_LockedWeapon.PRW_LockedWeapon_C.ExecuteUbergraph_PRW_LockedWeapon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRW_LockedWeapon_C::ExecuteUbergraph_PRW_LockedWeapon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRW_LockedWeapon.PRW_LockedWeapon_C.ExecuteUbergraph_PRW_LockedWeapon");

	APRW_LockedWeapon_C_ExecuteUbergraph_PRW_LockedWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
