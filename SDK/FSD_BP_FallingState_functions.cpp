// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_FallingState_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FallingState.BP_FallingState_C.HoverBootsTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Enter                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Exit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FallingState_C::HoverBootsTick(float* DeltaSeconds, bool* Enter, bool* Exit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FallingState.BP_FallingState_C.HoverBootsTick");

	UBP_FallingState_C_HoverBootsTick_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.Enter = Enter;
	params.Exit = Exit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FallingState.BP_FallingState_C.ShowJumpBootsActivation
// (Event, Protected, BlueprintEvent)

void UBP_FallingState_C::ShowJumpBootsActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FallingState.BP_FallingState_C.ShowJumpBootsActivation");

	UBP_FallingState_C_ShowJumpBootsActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FallingState.BP_FallingState_C.ReceiveHoverBootsTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FallingState_C::ReceiveHoverBootsTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FallingState.BP_FallingState_C.ReceiveHoverBootsTick");

	UBP_FallingState_C_ReceiveHoverBootsTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FallingState.BP_FallingState_C.ReceiveHoverBootsActiveChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FallingState_C::ReceiveHoverBootsActiveChanged(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FallingState.BP_FallingState_C.ReceiveHoverBootsActiveChanged");

	UBP_FallingState_C_ReceiveHoverBootsActiveChanged_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FallingState.BP_FallingState_C.ExecuteUbergraph_BP_FallingState
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FallingState_C::ExecuteUbergraph_BP_FallingState(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FallingState.BP_FallingState_C.ExecuteUbergraph_BP_FallingState");

	UBP_FallingState_C_ExecuteUbergraph_BP_FallingState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
