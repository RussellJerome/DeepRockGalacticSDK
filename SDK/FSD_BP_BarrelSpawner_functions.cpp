// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BarrelSpawner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BarrelSpawner.BP_BarrelSpawner_C.OnRep_BarrelCount
// (BlueprintCallable, BlueprintEvent)

void ABP_BarrelSpawner_C::OnRep_BarrelCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarrelSpawner.BP_BarrelSpawner_C.OnRep_BarrelCount");

	ABP_BarrelSpawner_C_OnRep_BarrelCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BarrelSpawner.BP_BarrelSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BarrelSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarrelSpawner.BP_BarrelSpawner_C.ReceiveBeginPlay");

	ABP_BarrelSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BarrelSpawner.BP_BarrelSpawner_C.SpawnBarrel
// (BlueprintCallable, BlueprintEvent)

void ABP_BarrelSpawner_C::SpawnBarrel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarrelSpawner.BP_BarrelSpawner_C.SpawnBarrel");

	ABP_BarrelSpawner_C_SpawnBarrel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BarrelSpawner.BP_BarrelSpawner_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BarrelSpawner_C::BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarrelSpawner.BP_BarrelSpawner_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	ABP_BarrelSpawner_C_BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BarrelSpawner.BP_BarrelSpawner_C.Reset
// (BlueprintCallable, BlueprintEvent)

void ABP_BarrelSpawner_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarrelSpawner.BP_BarrelSpawner_C.Reset");

	ABP_BarrelSpawner_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BarrelSpawner.BP_BarrelSpawner_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BarrelSpawner_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarrelSpawner.BP_BarrelSpawner_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_BarrelSpawner_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_BarrelSpawner.BP_BarrelSpawner_C.OnBarrelKicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BarrelSpawner_C::OnBarrelKicked(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarrelSpawner.BP_BarrelSpawner_C.OnBarrelKicked");

	ABP_BarrelSpawner_C_OnBarrelKicked_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BarrelSpawner.BP_BarrelSpawner_C.ExecuteUbergraph_BP_BarrelSpawner
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BarrelSpawner_C::ExecuteUbergraph_BP_BarrelSpawner(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarrelSpawner.BP_BarrelSpawner_C.ExecuteUbergraph_BP_BarrelSpawner");

	ABP_BarrelSpawner_C_ExecuteUbergraph_BP_BarrelSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BarrelSpawner.BP_BarrelSpawner_C.OnSpawnBarrelKicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Kicked_by                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BarrelSpawner_C::OnSpawnBarrelKicked__DelegateSignature(class APlayerCharacter** Kicked_by)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarrelSpawner.BP_BarrelSpawner_C.OnSpawnBarrelKicked__DelegateSignature");

	ABP_BarrelSpawner_C_OnSpawnBarrelKicked__DelegateSignature_Params params;
	params.Kicked_by = Kicked_by;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
