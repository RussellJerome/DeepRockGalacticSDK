// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Phys_Barrel01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.OnRep_KickSoundLocation
// (BlueprintCallable, BlueprintEvent)

void ABP_Phys_Barrel01_C::OnRep_KickSoundLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.OnRep_KickSoundLocation");

	ABP_Phys_Barrel01_C_OnRep_KickSoundLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Phys_Barrel01_C::BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_Phys_Barrel01_C_BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Phys_Barrel01_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature");

	ABP_Phys_Barrel01_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Phys_Barrel01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.ReceiveBeginPlay");

	ABP_Phys_Barrel01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.destroy
// (BlueprintCallable, BlueprintEvent)

void ABP_Phys_Barrel01_C::destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.destroy");

	ABP_Phys_Barrel01_C_destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.DestroyOvertime
// (BlueprintCallable, BlueprintEvent)

void ABP_Phys_Barrel01_C::DestroyOvertime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.DestroyOvertime");

	ABP_Phys_Barrel01_C_DestroyOvertime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.Play_Kick
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Kicker                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Phys_Barrel01_C::Play_Kick(class APlayerCharacter** Kicker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.Play_Kick");

	ABP_Phys_Barrel01_C_Play_Kick_Params params;
	params.Kicker = Kicker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Phys_Barrel01_C::BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Phys_Barrel01_C_BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Phys_Barrel01_C::BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Phys_Barrel01_C_BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.Spawn Bronzehead Effects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Phys_Barrel01_C::Spawn_Bronzehead_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.Spawn Bronzehead Effects");

	ABP_Phys_Barrel01_C_Spawn_Bronzehead_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.ExecuteUbergraph_BP_Phys_Barrel01
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Phys_Barrel01_C::ExecuteUbergraph_BP_Phys_Barrel01(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Phys_Barrel01.BP_Phys_Barrel01_C.ExecuteUbergraph_BP_Phys_Barrel01");

	ABP_Phys_Barrel01_C_ExecuteUbergraph_BP_Phys_Barrel01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
