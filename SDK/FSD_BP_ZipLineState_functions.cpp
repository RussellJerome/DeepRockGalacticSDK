// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ZipLineState_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ZipLineState.BP_ZipLineState_C.GetJumpVector
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                LookVector                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                CurrentVelocity                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UBP_ZipLineState_C::GetJumpVector(struct FVector* LookVector, struct FVector* CurrentVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLineState.BP_ZipLineState_C.GetJumpVector");

	UBP_ZipLineState_C_GetJumpVector_Params params;
	params.LookVector = LookVector;
	params.CurrentVelocity = CurrentVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ZipLineState.BP_ZipLineState_C.ReceiveSpeedBoostActivated
// (Event, Protected, BlueprintEvent)

void UBP_ZipLineState_C::ReceiveSpeedBoostActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLineState.BP_ZipLineState_C.ReceiveSpeedBoostActivated");

	UBP_ZipLineState_C_ReceiveSpeedBoostActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZipLineState.BP_ZipLineState_C.ReceiveSpeedBoostDeactivated
// (Event, Protected, BlueprintEvent)

void UBP_ZipLineState_C::ReceiveSpeedBoostDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLineState.BP_ZipLineState_C.ReceiveSpeedBoostDeactivated");

	UBP_ZipLineState_C_ReceiveSpeedBoostDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZipLineState.BP_ZipLineState_C.ExecuteUbergraph_BP_ZipLineState
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ZipLineState_C::ExecuteUbergraph_BP_ZipLineState(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLineState.BP_ZipLineState_C.ExecuteUbergraph_BP_ZipLineState");

	UBP_ZipLineState_C_ExecuteUbergraph_BP_ZipLineState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
