// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SpacerigSpectator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpacerigSpectator.BP_SpacerigSpectator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpacerigSpectator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpacerigSpectator.BP_SpacerigSpectator_C.ReceiveBeginPlay");

	ABP_SpacerigSpectator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpacerigSpectator.BP_SpacerigSpectator_C.ExecuteUbergraph_BP_SpacerigSpectator
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpacerigSpectator_C::ExecuteUbergraph_BP_SpacerigSpectator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpacerigSpectator.BP_SpacerigSpectator_C.ExecuteUbergraph_BP_SpacerigSpectator");

	ABP_SpacerigSpectator_C_ExecuteUbergraph_BP_SpacerigSpectator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
