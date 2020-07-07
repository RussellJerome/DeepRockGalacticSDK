// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SpectatorBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpectatorBase.BP_SpectatorBase_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_SpectatorBase_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpectatorBase.BP_SpectatorBase_C.ReceiveDestroyed");

	ABP_SpectatorBase_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpectatorBase.BP_SpectatorBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpectatorBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpectatorBase.BP_SpectatorBase_C.ReceiveBeginPlay");

	ABP_SpectatorBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpectatorBase.BP_SpectatorBase_C.ExecuteUbergraph_BP_SpectatorBase
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpectatorBase_C::ExecuteUbergraph_BP_SpectatorBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpectatorBase.BP_SpectatorBase_C.ExecuteUbergraph_BP_SpectatorBase");

	ABP_SpectatorBase_C_ExecuteUbergraph_BP_SpectatorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
