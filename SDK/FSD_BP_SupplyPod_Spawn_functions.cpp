// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SupplyPod_Spawn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_RemoveDoorsIfTheyAreNotPushed
// (BlueprintCallable, BlueprintEvent)

void ABP_SupplyPod_Spawn_C::OnRep_RemoveDoorsIfTheyAreNotPushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_RemoveDoorsIfTheyAreNotPushed");

	ABP_SupplyPod_Spawn_C_OnRep_RemoveDoorsIfTheyAreNotPushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_LightsOff
// (BlueprintCallable, BlueprintEvent)

void ABP_SupplyPod_Spawn_C::OnRep_LightsOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_LightsOff");

	ABP_SupplyPod_Spawn_C_OnRep_LightsOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.DoorSlamAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    Prim                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SupplyPod_Spawn_C::DoorSlamAudio(class UPrimitiveComponent** Prim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.DoorSlamAudio");

	ABP_SupplyPod_Spawn_C_DoorSlamAudio_Params params;
	params.Prim = Prim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.FindNearestPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerCharacter**       FromCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerCharacter*        OutNearestPlayer               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Spawn_C::FindNearestPlayer(class APlayerCharacter** FromCharacter, class APlayerCharacter** OutNearestPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.FindNearestPlayer");

	ABP_SupplyPod_Spawn_C_FindNearestPlayer_Params params;
	params.FromCharacter = FromCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNearestPlayer != nullptr)
		*OutNearestPlayer = params.OutNearestPlayer;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.PushDoor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    Prim                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SupplyPod_Spawn_C::PushDoor(class UPrimitiveComponent** Prim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.PushDoor");

	ABP_SupplyPod_Spawn_C_PushDoor_Params params;
	params.Prim = Prim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_SidesDestroyed
// (BlueprintCallable, BlueprintEvent)

void ABP_SupplyPod_Spawn_C::OnRep_SidesDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_SidesDestroyed");

	ABP_SupplyPod_Spawn_C_OnRep_SidesDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_RocksParticlesDisabled
// (BlueprintCallable, BlueprintEvent)

void ABP_SupplyPod_Spawn_C::OnRep_RocksParticlesDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_RocksParticlesDisabled");

	ABP_SupplyPod_Spawn_C_OnRep_RocksParticlesDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_Character
// (BlueprintCallable, BlueprintEvent)

void ABP_SupplyPod_Spawn_C::OnRep_Character()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_Character");

	ABP_SupplyPod_Spawn_C_OnRep_Character_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_SupplyPod_Spawn_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.Timeline_0__FinishedFunc");

	ABP_SupplyPod_Spawn_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_SupplyPod_Spawn_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.Timeline_0__UpdateFunc");

	ABP_SupplyPod_Spawn_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnDropStarted
// (Event, Protected, BlueprintEvent)

void ABP_SupplyPod_Spawn_C::OnDropStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnDropStarted");

	ABP_SupplyPod_Spawn_C_OnDropStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Spawn_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.ReceiveTick");

	ABP_SupplyPod_Spawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnDroppodCloseToImpact
// (Event, Protected, BlueprintEvent)

void ABP_SupplyPod_Spawn_C::OnDroppodCloseToImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnDroppodCloseToImpact");

	ABP_SupplyPod_Spawn_C_OnDroppodCloseToImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnDroppodImpact
// (Event, Protected, BlueprintEvent)

void ABP_SupplyPod_Spawn_C::OnDroppodImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnDroppodImpact");

	ABP_SupplyPod_Spawn_C_OnDroppodImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.Test Drop Pod
// (BlueprintCallable, BlueprintEvent)

void ABP_SupplyPod_Spawn_C::Test_Drop_Pod()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.Test Drop Pod");

	ABP_SupplyPod_Spawn_C_Test_Drop_Pod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SupplyPod_Spawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.ReceiveBeginPlay");

	ABP_SupplyPod_Spawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.HandleWelcomeShouting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       LateJoinCharacter              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Spawn_C::HandleWelcomeShouting(class APlayerCharacter** LateJoinCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.HandleWelcomeShouting");

	ABP_SupplyPod_Spawn_C_HandleWelcomeShouting_Params params;
	params.LateJoinCharacter = LateJoinCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_SupplyPod_Spawn_C::BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_SupplyPod_Spawn_C_BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box_Front_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_SupplyPod_Spawn_C::BndEvt__Box_Front_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box_Front_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

	ABP_SupplyPod_Spawn_C_BndEvt__Box_Front_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box_Back_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_SupplyPod_Spawn_C::BndEvt__Box_Back_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box_Back_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature");

	ABP_SupplyPod_Spawn_C_BndEvt__Box_Back_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box_Left_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_SupplyPod_Spawn_C::BndEvt__Box_Left_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box_Left_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature");

	ABP_SupplyPod_Spawn_C_BndEvt__Box_Left_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.CameraShake
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Shake                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECameraAnimPlaySpace>* PlaySpace                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               UserPlaySpaceRot               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Spawn_C::CameraShake(class UClass** Shake, float* Scale, TEnumAsByte<ECameraAnimPlaySpace>* PlaySpace, struct FRotator* UserPlaySpaceRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.CameraShake");

	ABP_SupplyPod_Spawn_C_CameraShake_Params params;
	params.Shake = Shake;
	params.Scale = Scale;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.SetController
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerController**   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Spawn_C::SetController(class AFSDPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.SetController");

	ABP_SupplyPod_Spawn_C_SetController_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.ExecuteUbergraph_BP_SupplyPod_Spawn
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Spawn_C::ExecuteUbergraph_BP_SupplyPod_Spawn(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.ExecuteUbergraph_BP_SupplyPod_Spawn");

	ABP_SupplyPod_Spawn_C_ExecuteUbergraph_BP_SupplyPod_Spawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
