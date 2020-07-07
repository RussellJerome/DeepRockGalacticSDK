// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_FrozenState_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FrozenState.BP_FrozenState_C.ReceiveStateEnter
// (Event, Protected, BlueprintEvent)

void UBP_FrozenState_C::ReceiveStateEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrozenState.BP_FrozenState_C.ReceiveStateEnter");

	UBP_FrozenState_C_ReceiveStateEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrozenState.BP_FrozenState_C.ReceiveStateExit
// (Event, Protected, BlueprintEvent)

void UBP_FrozenState_C::ReceiveStateExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrozenState.BP_FrozenState_C.ReceiveStateExit");

	UBP_FrozenState_C_ReceiveStateExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrozenState.BP_FrozenState_C.ReceiveOnDefrosting
// (Event, Protected, BlueprintEvent)

void UBP_FrozenState_C::ReceiveOnDefrosting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrozenState.BP_FrozenState_C.ReceiveOnDefrosting");

	UBP_FrozenState_C_ReceiveOnDefrosting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrozenState.BP_FrozenState_C.ExecuteUbergraph_BP_FrozenState
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FrozenState_C::ExecuteUbergraph_BP_FrozenState(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrozenState.BP_FrozenState_C.ExecuteUbergraph_BP_FrozenState");

	UBP_FrozenState_C_ExecuteUbergraph_BP_FrozenState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
