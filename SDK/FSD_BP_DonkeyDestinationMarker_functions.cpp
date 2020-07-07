// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DonkeyDestinationMarker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.ActivateAtPosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DonkeyDestinationMarker_C::ActivateAtPosition(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.ActivateAtPosition");

	ABP_DonkeyDestinationMarker_C_ActivateAtPosition_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.HideMarker
// (BlueprintCallable, BlueprintEvent)

void ABP_DonkeyDestinationMarker_C::HideMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.HideMarker");

	ABP_DonkeyDestinationMarker_C_HideMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.ExecuteUbergraph_BP_DonkeyDestinationMarker
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DonkeyDestinationMarker_C::ExecuteUbergraph_BP_DonkeyDestinationMarker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.ExecuteUbergraph_BP_DonkeyDestinationMarker");

	ABP_DonkeyDestinationMarker_C_ExecuteUbergraph_BP_DonkeyDestinationMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
