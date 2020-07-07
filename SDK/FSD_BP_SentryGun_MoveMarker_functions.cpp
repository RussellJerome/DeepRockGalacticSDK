// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SentryGun_MoveMarker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SentryGun_MoveMarker.BP_SentryGun_MoveMarker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SentryGun_MoveMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_MoveMarker.BP_SentryGun_MoveMarker_C.UserConstructionScript");

	ABP_SentryGun_MoveMarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_MoveMarker.BP_SentryGun_MoveMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_MoveMarker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_MoveMarker.BP_SentryGun_MoveMarker_C.ReceiveBeginPlay");

	ABP_SentryGun_MoveMarker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_MoveMarker.BP_SentryGun_MoveMarker_C.ExecuteUbergraph_BP_SentryGun_MoveMarker
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_MoveMarker_C::ExecuteUbergraph_BP_SentryGun_MoveMarker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_MoveMarker.BP_SentryGun_MoveMarker_C.ExecuteUbergraph_BP_SentryGun_MoveMarker");

	ABP_SentryGun_MoveMarker_C_ExecuteUbergraph_BP_SentryGun_MoveMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
