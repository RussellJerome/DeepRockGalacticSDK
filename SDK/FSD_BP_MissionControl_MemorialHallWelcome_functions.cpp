// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_MissionControl_MemorialHallWelcome_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionControl_MemorialHallWelcome_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C.ReceiveActorBeginOverlap");

	ABP_MissionControl_MemorialHallWelcome_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C.ExecuteUbergraph_BP_MissionControl_MemorialHallWelcome
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionControl_MemorialHallWelcome_C::ExecuteUbergraph_BP_MissionControl_MemorialHallWelcome(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C.ExecuteUbergraph_BP_MissionControl_MemorialHallWelcome");

	ABP_MissionControl_MemorialHallWelcome_C_ExecuteUbergraph_BP_MissionControl_MemorialHallWelcome_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
