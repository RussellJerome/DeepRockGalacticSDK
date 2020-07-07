// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Bar_Glass_Physics_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bar_Glass_Physics.Bar_Glass_Physics_C.OnRep_Drinkable
// (BlueprintCallable, BlueprintEvent)

void ABar_Glass_Physics_C::OnRep_Drinkable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bar_Glass_Physics.Bar_Glass_Physics_C.OnRep_Drinkable");

	ABar_Glass_Physics_C_OnRep_Drinkable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bar_Glass_Physics.Bar_Glass_Physics_C.OnRep_Thrown
// (BlueprintCallable, BlueprintEvent)

void ABar_Glass_Physics_C::OnRep_Thrown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bar_Glass_Physics.Bar_Glass_Physics_C.OnRep_Thrown");

	ABar_Glass_Physics_C_OnRep_Thrown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bar_Glass_Physics.Bar_Glass_Physics_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABar_Glass_Physics_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bar_Glass_Physics.Bar_Glass_Physics_C.UserConstructionScript");

	ABar_Glass_Physics_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bar_Glass_Physics.Bar_Glass_Physics_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABar_Glass_Physics_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bar_Glass_Physics.Bar_Glass_Physics_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABar_Glass_Physics_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Bar_Glass_Physics.Bar_Glass_Physics_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABar_Glass_Physics_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bar_Glass_Physics.Bar_Glass_Physics_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABar_Glass_Physics_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bar_Glass_Physics.Bar_Glass_Physics_C.PlayKickSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABar_Glass_Physics_C::PlayKickSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bar_Glass_Physics.Bar_Glass_Physics_C.PlayKickSound");

	ABar_Glass_Physics_C_PlayKickSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bar_Glass_Physics.Bar_Glass_Physics_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABar_Glass_Physics_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bar_Glass_Physics.Bar_Glass_Physics_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature");

	ABar_Glass_Physics_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bar_Glass_Physics.Bar_Glass_Physics_C.Throw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                fromLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Thrower                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABar_Glass_Physics_C::Throw(struct FVector* fromLocation, struct FRotator* NewRotation, class AActor** Thrower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bar_Glass_Physics.Bar_Glass_Physics_C.Throw");

	ABar_Glass_Physics_C_Throw_Params params;
	params.fromLocation = fromLocation;
	params.NewRotation = NewRotation;
	params.Thrower = Thrower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bar_Glass_Physics.Bar_Glass_Physics_C.ExecuteUbergraph_Bar_Glass_Physics
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABar_Glass_Physics_C::ExecuteUbergraph_Bar_Glass_Physics(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bar_Glass_Physics.Bar_Glass_Physics_C.ExecuteUbergraph_Bar_Glass_Physics");

	ABar_Glass_Physics_C_ExecuteUbergraph_Bar_Glass_Physics_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
