// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Loadout_GrenadeProxyBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void ALoadout_GrenadeProxyBase_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C.RecieveEquipped");

	ALoadout_GrenadeProxyBase_C_RecieveEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C.RecieveUnequipped
// (Event, Protected, BlueprintEvent)

void ALoadout_GrenadeProxyBase_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C.RecieveUnequipped");

	ALoadout_GrenadeProxyBase_C_RecieveUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C.ExecuteUbergraph_Loadout_GrenadeProxyBase
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALoadout_GrenadeProxyBase_C::ExecuteUbergraph_Loadout_GrenadeProxyBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C.ExecuteUbergraph_Loadout_GrenadeProxyBase");

	ALoadout_GrenadeProxyBase_C_ExecuteUbergraph_Loadout_GrenadeProxyBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
