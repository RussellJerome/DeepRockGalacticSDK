// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SelfiePoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SelfiePoint.BP_SelfiePoint_C.GetTargetTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UBP_SelfiePoint_C::GetTargetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.GetTargetTransform");

	UBP_SelfiePoint_C_GetTargetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SelfiePoint.BP_SelfiePoint_C.DeactivateCamera
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SelfiePoint_C::DeactivateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.DeactivateCamera");

	UBP_SelfiePoint_C_DeactivateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SelfiePoint.BP_SelfiePoint_C.ActivateCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_SelfiePoint_C::ActivateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.ActivateCamera");

	UBP_SelfiePoint_C_ActivateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_SelfiePoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveBeginPlay");

	UBP_SelfiePoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SelfiePoint_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveTick");

	UBP_SelfiePoint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SelfiePoint.BP_SelfiePoint_C.ExecuteUbergraph_BP_SelfiePoint
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SelfiePoint_C::ExecuteUbergraph_BP_SelfiePoint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.ExecuteUbergraph_BP_SelfiePoint");

	UBP_SelfiePoint_C_ExecuteUbergraph_BP_SelfiePoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
