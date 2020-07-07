// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BRT_Bomb_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BRT_Bomb.BP_BRT_Bomb_C.OnRep_Ready
// (BlueprintCallable, BlueprintEvent)

void ABP_BRT_Bomb_C::OnRep_Ready()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRT_Bomb.BP_BRT_Bomb_C.OnRep_Ready");

	ABP_BRT_Bomb_C_OnRep_Ready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRT_Bomb.BP_BRT_Bomb_C.OnRep_Triggered
// (BlueprintCallable, BlueprintEvent)

void ABP_BRT_Bomb_C::OnRep_Triggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRT_Bomb.BP_BRT_Bomb_C.OnRep_Triggered");

	ABP_BRT_Bomb_C_OnRep_Triggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRT_Bomb.BP_BRT_Bomb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BRT_Bomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRT_Bomb.BP_BRT_Bomb_C.UserConstructionScript");

	ABP_BRT_Bomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRT_Bomb.BP_BRT_Bomb_C.TriggerExplosion
// (BlueprintCallable, BlueprintEvent)

void ABP_BRT_Bomb_C::TriggerExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRT_Bomb.BP_BRT_Bomb_C.TriggerExplosion");

	ABP_BRT_Bomb_C_TriggerExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRT_Bomb.BP_BRT_Bomb_C.GetArmed
// (BlueprintCallable, BlueprintEvent)

void ABP_BRT_Bomb_C::GetArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRT_Bomb.BP_BRT_Bomb_C.GetArmed");

	ABP_BRT_Bomb_C_GetArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRT_Bomb.BP_BRT_Bomb_C.BndEvt__Area Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BRT_Bomb_C::BndEvt__Area_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRT_Bomb.BP_BRT_Bomb_C.BndEvt__Area Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_BRT_Bomb_C_BndEvt__Area_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_BRT_Bomb.BP_BRT_Bomb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BRT_Bomb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRT_Bomb.BP_BRT_Bomb_C.ReceiveBeginPlay");

	ABP_BRT_Bomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRT_Bomb.BP_BRT_Bomb_C.ExecuteUbergraph_BP_BRT_Bomb
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRT_Bomb_C::ExecuteUbergraph_BP_BRT_Bomb(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRT_Bomb.BP_BRT_Bomb_C.ExecuteUbergraph_BP_BRT_Bomb");

	ABP_BRT_Bomb_C_ExecuteUbergraph_BP_BRT_Bomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
