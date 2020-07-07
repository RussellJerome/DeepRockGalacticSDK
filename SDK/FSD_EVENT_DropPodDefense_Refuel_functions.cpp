// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EVENT_DropPodDefense_Refuel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EVENT_DropPodDefense_Refuel.EVENT_DropPodDefense_Refuel_C.EventSucceded
// (BlueprintCallable, BlueprintEvent)

void AEVENT_DropPodDefense_Refuel_C::EventSucceded()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Refuel.EVENT_DropPodDefense_Refuel_C.EventSucceded");

	AEVENT_DropPodDefense_Refuel_C_EventSucceded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Refuel.EVENT_DropPodDefense_Refuel_C.EventFailed
// (BlueprintCallable, BlueprintEvent)

void AEVENT_DropPodDefense_Refuel_C::EventFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Refuel.EVENT_DropPodDefense_Refuel_C.EventFailed");

	AEVENT_DropPodDefense_Refuel_C_EventFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Refuel.EVENT_DropPodDefense_Refuel_C.ExecuteUbergraph_EVENT_DropPodDefense_Refuel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEVENT_DropPodDefense_Refuel_C::ExecuteUbergraph_EVENT_DropPodDefense_Refuel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Refuel.EVENT_DropPodDefense_Refuel_C.ExecuteUbergraph_EVENT_DropPodDefense_Refuel");

	AEVENT_DropPodDefense_Refuel_C_ExecuteUbergraph_EVENT_DropPodDefense_Refuel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
