// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SentryLoadoutProxy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SentryLoadoutProxy.BP_SentryLoadoutProxy_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void ABP_SentryLoadoutProxy_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryLoadoutProxy.BP_SentryLoadoutProxy_C.RecieveEquipped");

	ABP_SentryLoadoutProxy_C_RecieveEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryLoadoutProxy.BP_SentryLoadoutProxy_C.RecieveUnequipped
// (Event, Protected, BlueprintEvent)

void ABP_SentryLoadoutProxy_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryLoadoutProxy.BP_SentryLoadoutProxy_C.RecieveUnequipped");

	ABP_SentryLoadoutProxy_C_RecieveUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryLoadoutProxy.BP_SentryLoadoutProxy_C.ExecuteUbergraph_BP_SentryLoadoutProxy
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryLoadoutProxy_C::ExecuteUbergraph_BP_SentryLoadoutProxy(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryLoadoutProxy.BP_SentryLoadoutProxy_C.ExecuteUbergraph_BP_SentryLoadoutProxy");

	ABP_SentryLoadoutProxy_C_ExecuteUbergraph_BP_SentryLoadoutProxy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
