// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Detpack_LoadoutProxy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Detpack_LoadoutProxy.BP_Detpack_LoadoutProxy_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void ABP_Detpack_LoadoutProxy_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Detpack_LoadoutProxy.BP_Detpack_LoadoutProxy_C.RecieveEquipped");

	ABP_Detpack_LoadoutProxy_C_RecieveEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Detpack_LoadoutProxy.BP_Detpack_LoadoutProxy_C.RecieveUnequipped
// (Event, Protected, BlueprintEvent)

void ABP_Detpack_LoadoutProxy_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Detpack_LoadoutProxy.BP_Detpack_LoadoutProxy_C.RecieveUnequipped");

	ABP_Detpack_LoadoutProxy_C_RecieveUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Detpack_LoadoutProxy.BP_Detpack_LoadoutProxy_C.ExecuteUbergraph_BP_Detpack_LoadoutProxy
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Detpack_LoadoutProxy_C::ExecuteUbergraph_BP_Detpack_LoadoutProxy(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Detpack_LoadoutProxy.BP_Detpack_LoadoutProxy_C.ExecuteUbergraph_BP_Detpack_LoadoutProxy");

	ABP_Detpack_LoadoutProxy_C_ExecuteUbergraph_BP_Detpack_LoadoutProxy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
