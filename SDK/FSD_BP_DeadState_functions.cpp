// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DeadState_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DeadState.BP_DeadState_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_DeadState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeadState.BP_DeadState_C.ReceiveBeginPlay");

	UBP_DeadState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeadState.BP_DeadState_C.ReceiveStateExit
// (Event, Protected, BlueprintEvent)

void UBP_DeadState_C::ReceiveStateExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeadState.BP_DeadState_C.ReceiveStateExit");

	UBP_DeadState_C_ReceiveStateExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeadState.BP_DeadState_C.ReceiveStateEnter
// (Event, Protected, BlueprintEvent)

void UBP_DeadState_C::ReceiveStateEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeadState.BP_DeadState_C.ReceiveStateEnter");

	UBP_DeadState_C_ReceiveStateEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeadState.BP_DeadState_C.Set Death parameters
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Respawn_delay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Effect_Delay                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Death_montage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem**        Death_Effect                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Use_animtime_as_respawn_time   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DeadState_C::Set_Death_parameters(float* Respawn_delay, float* Effect_Delay, class UAnimMontage** Death_montage, class UParticleSystem** Death_Effect, bool* Use_animtime_as_respawn_time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeadState.BP_DeadState_C.Set Death parameters");

	UBP_DeadState_C_Set_Death_parameters_Params params;
	params.Respawn_delay = Respawn_delay;
	params.Effect_Delay = Effect_Delay;
	params.Death_montage = Death_montage;
	params.Death_Effect = Death_Effect;
	params.Use_animtime_as_respawn_time = Use_animtime_as_respawn_time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeadState.BP_DeadState_C.ExecuteUbergraph_BP_DeadState
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DeadState_C::ExecuteUbergraph_BP_DeadState(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeadState.BP_DeadState_C.ExecuteUbergraph_BP_DeadState");

	UBP_DeadState_C_ExecuteUbergraph_BP_DeadState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
