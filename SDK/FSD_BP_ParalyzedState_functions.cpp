// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ParalyzedState_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ParalyzedState.BP_ParalyzedState_C.ReceiveStateEnter
// (Event, Protected, BlueprintEvent)

void UBP_ParalyzedState_C::ReceiveStateEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ParalyzedState.BP_ParalyzedState_C.ReceiveStateEnter");

	UBP_ParalyzedState_C_ReceiveStateEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ParalyzedState.BP_ParalyzedState_C.ReceiveStateExit
// (Event, Protected, BlueprintEvent)

void UBP_ParalyzedState_C::ReceiveStateExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ParalyzedState.BP_ParalyzedState_C.ReceiveStateExit");

	UBP_ParalyzedState_C_ReceiveStateExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ParalyzedState.BP_ParalyzedState_C.ExecuteUbergraph_BP_ParalyzedState
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ParalyzedState_C::ExecuteUbergraph_BP_ParalyzedState(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ParalyzedState.BP_ParalyzedState_C.ExecuteUbergraph_BP_ParalyzedState");

	UBP_ParalyzedState_C_ExecuteUbergraph_BP_ParalyzedState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
