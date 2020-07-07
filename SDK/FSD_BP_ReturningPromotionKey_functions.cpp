// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ReturningPromotionKey_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.MoveTowardsCamera
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Finished                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ReturningPromotionKey_C::MoveTowardsCamera(bool* Finished)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.MoveTowardsCamera");

	ABP_ReturningPromotionKey_C_MoveTowardsCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Finished != nullptr)
		*Finished = params.Finished;
}


// Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.OnTick_FDAEBDB24C3AD5E8021577B83AA4B3FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NormalizedTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReturningPromotionKey_C::OnTick_FDAEBDB24C3AD5E8021577B83AA4B3FD(float* DeltaTime, float* NormalizedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.OnTick_FDAEBDB24C3AD5E8021577B83AA4B3FD");

	ABP_ReturningPromotionKey_C_OnTick_FDAEBDB24C3AD5E8021577B83AA4B3FD_Params params;
	params.DeltaTime = DeltaTime;
	params.NormalizedTime = NormalizedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.Completed_FDAEBDB24C3AD5E8021577B83AA4B3FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NormalizedTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReturningPromotionKey_C::Completed_FDAEBDB24C3AD5E8021577B83AA4B3FD(float* DeltaTime, float* NormalizedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.Completed_FDAEBDB24C3AD5E8021577B83AA4B3FD");

	ABP_ReturningPromotionKey_C_Completed_FDAEBDB24C3AD5E8021577B83AA4B3FD_Params params;
	params.DeltaTime = DeltaTime;
	params.NormalizedTime = NormalizedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.MoveToCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       InTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReturningPromotionKey_C::MoveToCharacter(class APlayerCharacter** InTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.MoveToCharacter");

	ABP_ReturningPromotionKey_C_MoveToCharacter_Params params;
	params.InTarget = InTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ReturningPromotionKey_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.ReceiveBeginPlay");

	ABP_ReturningPromotionKey_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReturningPromotionKey_C::BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathFinished__DelegateSignature(bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathFinished__DelegateSignature");

	ABP_ReturningPromotionKey_C_BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathFinished__DelegateSignature_Params params;
	params.success = success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.ExecuteUbergraph_BP_ReturningPromotionKey
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReturningPromotionKey_C::ExecuteUbergraph_BP_ReturningPromotionKey(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.ExecuteUbergraph_BP_ReturningPromotionKey");

	ABP_ReturningPromotionKey_C_ExecuteUbergraph_BP_ReturningPromotionKey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
