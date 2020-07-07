// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EVENT_DropPodDefense_Uplink_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.EventSucceded
// (BlueprintCallable, BlueprintEvent)

void AEVENT_DropPodDefense_Uplink_C::EventSucceded()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.EventSucceded");

	AEVENT_DropPodDefense_Uplink_C_EventSucceded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.EventFailed
// (BlueprintCallable, BlueprintEvent)

void AEVENT_DropPodDefense_Uplink_C::EventFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.EventFailed");

	AEVENT_DropPodDefense_Uplink_C_EventFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.ExecuteUbergraph_EVENT_DropPodDefense_Uplink
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEVENT_DropPodDefense_Uplink_C::ExecuteUbergraph_EVENT_DropPodDefense_Uplink(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.ExecuteUbergraph_EVENT_DropPodDefense_Uplink");

	AEVENT_DropPodDefense_Uplink_C_ExecuteUbergraph_EVENT_DropPodDefense_Uplink_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
