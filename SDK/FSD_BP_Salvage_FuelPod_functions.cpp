// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Salvage_FuelPod_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDroppodImpact
// (Event, Protected, BlueprintEvent)

void ABP_Salvage_FuelPod_C::OnDroppodImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDroppodImpact");

	ABP_Salvage_FuelPod_C_OnDroppodImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDropStarted
// (Event, Protected, BlueprintEvent)

void ABP_Salvage_FuelPod_C::OnDropStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDropStarted");

	ABP_Salvage_FuelPod_C_OnDropStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Salvage_FuelPod_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ReceiveTick");

	ABP_Salvage_FuelPod_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Salvage_FuelPod_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	ABP_Salvage_FuelPod_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Salvage_FuelPod_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool* canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature");

	ABP_Salvage_FuelPod_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature_Params params;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseStart
// (BlueprintCallable, BlueprintEvent)

void ABP_Salvage_FuelPod_C::OnDefenseStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseStart");

	ABP_Salvage_FuelPod_C_OnDefenseStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseComplete
// (BlueprintCallable, BlueprintEvent)

void ABP_Salvage_FuelPod_C::OnDefenseComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseComplete");

	ABP_Salvage_FuelPod_C_OnDefenseComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Salvage_FuelPod_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature");

	ABP_Salvage_FuelPod_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseFailed
// (BlueprintCallable, BlueprintEvent)

void ABP_Salvage_FuelPod_C::OnDefenseFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseFailed");

	ABP_Salvage_FuelPod_C_OnDefenseFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ExecuteUbergraph_BP_Salvage_FuelPod
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Salvage_FuelPod_C::ExecuteUbergraph_BP_Salvage_FuelPod(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ExecuteUbergraph_BP_Salvage_FuelPod");

	ABP_Salvage_FuelPod_C_ExecuteUbergraph_BP_Salvage_FuelPod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
