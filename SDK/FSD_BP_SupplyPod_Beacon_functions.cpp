// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SupplyPod_Beacon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SupplyPod_Beacon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.UserConstructionScript");

	ABP_SupplyPod_Beacon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.Light Animation__FinishedFunc
// (BlueprintEvent)

void ABP_SupplyPod_Beacon_C::Light_Animation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.Light Animation__FinishedFunc");

	ABP_SupplyPod_Beacon_C_Light_Animation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.Light Animation__UpdateFunc
// (BlueprintEvent)

void ABP_SupplyPod_Beacon_C::Light_Animation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.Light Animation__UpdateFunc");

	ABP_SupplyPod_Beacon_C_Light_Animation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Beacon_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.ReceiveTick");

	ABP_SupplyPod_Beacon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SupplyPod_Beacon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.ReceiveBeginPlay");

	ABP_SupplyPod_Beacon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.ExecuteUbergraph_BP_SupplyPod_Beacon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Beacon_C::ExecuteUbergraph_BP_SupplyPod_Beacon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.ExecuteUbergraph_BP_SupplyPod_Beacon");

	ABP_SupplyPod_Beacon_C_ExecuteUbergraph_BP_SupplyPod_Beacon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
