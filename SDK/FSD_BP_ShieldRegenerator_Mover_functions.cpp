// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ShieldRegenerator_Mover_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.FindTakeOffPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 TakeOffPoint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ShieldRegenerator_Mover_C::FindTakeOffPoint(struct FVector* TakeOffPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.FindTakeOffPoint");

	ABP_ShieldRegenerator_Mover_C_FindTakeOffPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TakeOffPoint != nullptr)
		*TakeOffPoint = params.TakeOffPoint;
}


// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.MoveToInstigator
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ShieldRegenerator_Mover_C::MoveToInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.MoveToInstigator");

	ABP_ShieldRegenerator_Mover_C_MoveToInstigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.LiftOff__FinishedFunc
// (BlueprintEvent)

void ABP_ShieldRegenerator_Mover_C::LiftOff__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.LiftOff__FinishedFunc");

	ABP_ShieldRegenerator_Mover_C_LiftOff__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.LiftOff__UpdateFunc
// (BlueprintEvent)

void ABP_ShieldRegenerator_Mover_C::LiftOff__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.LiftOff__UpdateFunc");

	ABP_ShieldRegenerator_Mover_C_LiftOff__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShieldRegenerator_Mover_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.ReceiveBeginPlay");

	ABP_ShieldRegenerator_Mover_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.All_LiftOff
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                InHoverPoint                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShieldRegenerator_Mover_C::All_LiftOff(struct FVector* InHoverPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.All_LiftOff");

	ABP_ShieldRegenerator_Mover_C_All_LiftOff_Params params;
	params.InHoverPoint = InHoverPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EDeepMovementState*            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShieldRegenerator_Mover_C::BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature(EDeepMovementState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature");

	ABP_ShieldRegenerator_Mover_C_BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.Begin Lift Off Effects
// (BlueprintCallable, BlueprintEvent)

void ABP_ShieldRegenerator_Mover_C::Begin_Lift_Off_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.Begin Lift Off Effects");

	ABP_ShieldRegenerator_Mover_C_Begin_Lift_Off_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_1_PathFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShieldRegenerator_Mover_C::BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_1_PathFinished__DelegateSignature(bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_1_PathFinished__DelegateSignature");

	ABP_ShieldRegenerator_Mover_C_BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_1_PathFinished__DelegateSignature_Params params;
	params.success = success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.Begin Move To Actor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 InTargetActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShieldRegenerator_Mover_C::Begin_Move_To_Actor(class AActor** InTargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.Begin Move To Actor");

	ABP_ShieldRegenerator_Mover_C_Begin_Move_To_Actor_Params params;
	params.InTargetActor = InTargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.OnReturned
// (BlueprintCallable, BlueprintEvent)

void ABP_ShieldRegenerator_Mover_C::OnReturned()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.OnReturned");

	ABP_ShieldRegenerator_Mover_C_OnReturned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.ExecuteUbergraph_BP_ShieldRegenerator_Mover
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShieldRegenerator_Mover_C::ExecuteUbergraph_BP_ShieldRegenerator_Mover(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.ExecuteUbergraph_BP_ShieldRegenerator_Mover");

	ABP_ShieldRegenerator_Mover_C_ExecuteUbergraph_BP_ShieldRegenerator_Mover_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
