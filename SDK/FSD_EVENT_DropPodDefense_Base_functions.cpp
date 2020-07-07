// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EVENT_DropPodDefense_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_DefendingPlayerCount
// (BlueprintCallable, BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::OnRep_DefendingPlayerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_DefendingPlayerCount");

	AEVENT_DropPodDefense_Base_C_OnRep_DefendingPlayerCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UpdateDefenderCount
// (Public, BlueprintCallable, BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::UpdateDefenderCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UpdateDefenderCount");

	AEVENT_DropPodDefense_Base_C_UpdateDefenderCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.GetDefenderBonus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           DefendingPlayers               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEVENT_DropPodDefense_Base_C::GetDefenderBonus(int* DefendingPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.GetDefenderBonus");

	AEVENT_DropPodDefense_Base_C_GetDefenderBonus_Params params;
	params.DefendingPlayers = DefendingPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.AnyPlayersDefending
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEVENT_DropPodDefense_Base_C::AnyPlayersDefending()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.AnyPlayersDefending");

	AEVENT_DropPodDefense_Base_C_AnyPlayersDefending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_Progress
// (BlueprintCallable, BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::OnRep_Progress()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_Progress");

	AEVENT_DropPodDefense_Base_C_OnRep_Progress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UserConstructionScript");

	AEVENT_DropPodDefense_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveBeginPlay");

	AEVENT_DropPodDefense_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEVENT_DropPodDefense_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveTick");

	AEVENT_DropPodDefense_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AEVENT_DropPodDefense_Base_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AEVENT_DropPodDefense_Base_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEVENT_DropPodDefense_Base_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AEVENT_DropPodDefense_Base_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventSucceded
// (BlueprintCallable, BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::EventSucceded()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventSucceded");

	AEVENT_DropPodDefense_Base_C_EventSucceded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventFailed
// (BlueprintCallable, BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::EventFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventFailed");

	AEVENT_DropPodDefense_Base_C_EventFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ExecuteUbergraph_EVENT_DropPodDefense_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEVENT_DropPodDefense_Base_C::ExecuteUbergraph_EVENT_DropPodDefense_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ExecuteUbergraph_EVENT_DropPodDefense_Base");

	AEVENT_DropPodDefense_Base_C_ExecuteUbergraph_EVENT_DropPodDefense_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefenderCountUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           DefenderCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEVENT_DropPodDefense_Base_C::DefenderCountUpdated__DelegateSignature(int* DefenderCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefenderCountUpdated__DelegateSignature");

	AEVENT_DropPodDefense_Base_C_DefenderCountUpdated__DelegateSignature_Params params;
	params.DefenderCount = DefenderCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ProgressUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewProgress                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEVENT_DropPodDefense_Base_C::ProgressUpdated__DelegateSignature(float* NewProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ProgressUpdated__DelegateSignature");

	AEVENT_DropPodDefense_Base_C_ProgressUpdated__DelegateSignature_Params params;
	params.NewProgress = NewProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendFailed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::DefendFailed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendFailed__DelegateSignature");

	AEVENT_DropPodDefense_Base_C_DefendFailed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendSucceded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::DefendSucceded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendSucceded__DelegateSignature");

	AEVENT_DropPodDefense_Base_C_DefendSucceded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
