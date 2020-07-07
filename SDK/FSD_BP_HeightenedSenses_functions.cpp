// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_HeightenedSenses_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HeightenedSenses.BP_HeightenedSenses_C.Receive_OnInitialized
// (Event, Protected, BlueprintEvent)

void UBP_HeightenedSenses_C::Receive_OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeightenedSenses.BP_HeightenedSenses_C.Receive_OnInitialized");

	UBP_HeightenedSenses_C_Receive_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HeightenedSenses.BP_HeightenedSenses_C.OnKilledGrabber_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HeightenedSenses_C::OnKilledGrabber_Event(class AActor** Grabber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeightenedSenses.BP_HeightenedSenses_C.OnKilledGrabber_Event");

	UBP_HeightenedSenses_C_OnKilledGrabber_Event_Params params;
	params.Grabber = Grabber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HeightenedSenses.BP_HeightenedSenses_C.ExecuteUbergraph_BP_HeightenedSenses
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HeightenedSenses_C::ExecuteUbergraph_BP_HeightenedSenses(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeightenedSenses.BP_HeightenedSenses_C.ExecuteUbergraph_BP_HeightenedSenses");

	UBP_HeightenedSenses_C_ExecuteUbergraph_BP_HeightenedSenses_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
