// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Bulkhead01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Bulkhead01.BP_Bulkhead01_C.HasPlayersNearby
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AnyPlayers                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Bulkhead01_C::HasPlayersNearby(bool* AnyPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.HasPlayersNearby");

	ABP_Bulkhead01_C_HasPlayersNearby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnyPlayers != nullptr)
		*AnyPlayers = params.AnyPlayers;
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.OnRep_IsOpen
// (BlueprintCallable, BlueprintEvent)

void ABP_Bulkhead01_C::OnRep_IsOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.OnRep_IsOpen");

	ABP_Bulkhead01_C_OnRep_IsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.Driver__FinishedFunc
// (BlueprintEvent)

void ABP_Bulkhead01_C::Driver__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.Driver__FinishedFunc");

	ABP_Bulkhead01_C_Driver__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.Driver__UpdateFunc
// (BlueprintEvent)

void ABP_Bulkhead01_C::Driver__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.Driver__UpdateFunc");

	ABP_Bulkhead01_C_Driver__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.TL_Open__FinishedFunc
// (BlueprintEvent)

void ABP_Bulkhead01_C::TL_Open__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.TL_Open__FinishedFunc");

	ABP_Bulkhead01_C_TL_Open__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.TL_Open__UpdateFunc
// (BlueprintEvent)

void ABP_Bulkhead01_C::TL_Open__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.TL_Open__UpdateFunc");

	ABP_Bulkhead01_C_TL_Open__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.Open
// (BlueprintCallable, BlueprintEvent)

void ABP_Bulkhead01_C::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.Open");

	ABP_Bulkhead01_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_233_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bulkhead01_C::BndEvt__TriggerBox_K2Node_ComponentBoundEvent_233_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_233_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Bulkhead01_C_BndEvt__TriggerBox_K2Node_ComponentBoundEvent_233_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_222_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Bulkhead01_C::BndEvt__TriggerBox_K2Node_ComponentBoundEvent_222_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_222_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Bulkhead01_C_BndEvt__TriggerBox_K2Node_ComponentBoundEvent_222_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_Bulkhead01.BP_Bulkhead01_C.Close
// (BlueprintCallable, BlueprintEvent)

void ABP_Bulkhead01_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.Close");

	ABP_Bulkhead01_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bulkhead01_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.ReceiveTick");

	ABP_Bulkhead01_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.ExecuteUbergraph_BP_Bulkhead01
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bulkhead01_C::ExecuteUbergraph_BP_Bulkhead01(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.ExecuteUbergraph_BP_Bulkhead01");

	ABP_Bulkhead01_C_ExecuteUbergraph_BP_Bulkhead01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
