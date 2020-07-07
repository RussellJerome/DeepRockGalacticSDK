// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Elimination_RadarPoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C.Receive_EncounterHasSpawned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn**                  spawnedPawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Elimination_RadarPoint_C::Receive_EncounterHasSpawned(class APawn** spawnedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C.Receive_EncounterHasSpawned");

	ABP_Elimination_RadarPoint_C_Receive_EncounterHasSpawned_Params params;
	params.spawnedPawn = spawnedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Elimination_RadarPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C.ReceiveBeginPlay");

	ABP_Elimination_RadarPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C.ExecuteUbergraph_BP_Elimination_RadarPoint
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Elimination_RadarPoint_C::ExecuteUbergraph_BP_Elimination_RadarPoint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C.ExecuteUbergraph_BP_Elimination_RadarPoint");

	ABP_Elimination_RadarPoint_C_ExecuteUbergraph_BP_Elimination_RadarPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
