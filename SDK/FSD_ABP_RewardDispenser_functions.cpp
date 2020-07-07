// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_RewardDispenser_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_RewardDispenser.ABP_RewardDispenser_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UABP_RewardDispenser_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RewardDispenser.ABP_RewardDispenser_C.BlueprintBeginPlay");

	UABP_RewardDispenser_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_RewardDispenser.ABP_RewardDispenser_C.AnimNotify_InsertingCore
// (BlueprintCallable, BlueprintEvent)

void UABP_RewardDispenser_C::AnimNotify_InsertingCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RewardDispenser.ABP_RewardDispenser_C.AnimNotify_InsertingCore");

	UABP_RewardDispenser_C_AnimNotify_InsertingCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_RewardDispenser.ABP_RewardDispenser_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_RewardDispenser_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RewardDispenser.ABP_RewardDispenser_C.BlueprintInitializeAnimation");

	UABP_RewardDispenser_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_RewardDispenser.ABP_RewardDispenser_C.OnRewardSelected
// (Event, Protected, BlueprintEvent)

void UABP_RewardDispenser_C::OnRewardSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RewardDispenser.ABP_RewardDispenser_C.OnRewardSelected");

	UABP_RewardDispenser_C_OnRewardSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_RewardDispenser.ABP_RewardDispenser_C.SetMatrixCoreVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_RewardDispenser_C::SetMatrixCoreVisible(bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RewardDispenser.ABP_RewardDispenser_C.SetMatrixCoreVisible");

	UABP_RewardDispenser_C_SetMatrixCoreVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_RewardDispenser.ABP_RewardDispenser_C.ExecuteUbergraph_ABP_RewardDispenser
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_RewardDispenser_C::ExecuteUbergraph_ABP_RewardDispenser(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RewardDispenser.ABP_RewardDispenser_C.ExecuteUbergraph_ABP_RewardDispenser");

	UABP_RewardDispenser_C_ExecuteUbergraph_ABP_RewardDispenser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
