// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Elevator2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Elevator2.Elevator2_C.OnRep_GoingUp
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AElevator2_C::OnRep_GoingUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Elevator2.Elevator2_C.OnRep_GoingUp");

	AElevator2_C_OnRep_GoingUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Elevator2.Elevator2_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AElevator2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Elevator2.Elevator2_C.UserConstructionScript");

	AElevator2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Elevator2.Elevator2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AElevator2_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Elevator2.Elevator2_C.ReceiveTick");

	AElevator2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Elevator2.Elevator2_C.ExecuteUbergraph_Elevator2
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AElevator2_C::ExecuteUbergraph_Elevator2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Elevator2.Elevator2_C.ExecuteUbergraph_Elevator2");

	AElevator2_C_ExecuteUbergraph_Elevator2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
