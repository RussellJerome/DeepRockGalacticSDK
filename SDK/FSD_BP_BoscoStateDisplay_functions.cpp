// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BoscoStateDisplay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance**      NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoscoStateDisplay_C::SetMaterial(class UMaterialInstance** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetMaterial");

	ABP_BoscoStateDisplay_C_SetMaterial_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDroneAIState*                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoscoStateDisplay_C::SetState(EDroneAIState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetState");

	ABP_BoscoStateDisplay_C_SetState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BoscoStateDisplay_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.ReceiveBeginPlay");

	ABP_BoscoStateDisplay_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoscoStateDisplay_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.ReceiveTick");

	ABP_BoscoStateDisplay_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.ExecuteUbergraph_BP_BoscoStateDisplay
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoscoStateDisplay_C::ExecuteUbergraph_BP_BoscoStateDisplay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.ExecuteUbergraph_BP_BoscoStateDisplay");

	ABP_BoscoStateDisplay_C_ExecuteUbergraph_BP_BoscoStateDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
