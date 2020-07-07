// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Grenade_BouncyPlasma_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.AddGearStateEntries
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGrenade_BouncyPlasma_C::AddGearStateEntries(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.AddGearStateEntries");

	AGrenade_BouncyPlasma_C_AddGearStateEntries_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.OnRep_ExplosionCount
// (BlueprintCallable, BlueprintEvent)

void AGrenade_BouncyPlasma_C::OnRep_ExplosionCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.OnRep_ExplosionCount");

	AGrenade_BouncyPlasma_C_OnRep_ExplosionCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGrenade_BouncyPlasma_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	AGrenade_BouncyPlasma_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.TriggerExplosion
// (BlueprintCallable, BlueprintEvent)

void AGrenade_BouncyPlasma_C::TriggerExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.TriggerExplosion");

	AGrenade_BouncyPlasma_C_TriggerExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.HideGrenade
// (BlueprintCallable, BlueprintEvent)

void AGrenade_BouncyPlasma_C::HideGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.HideGrenade");

	AGrenade_BouncyPlasma_C_HideGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGrenade_BouncyPlasma_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.ReceiveBeginPlay");

	AGrenade_BouncyPlasma_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGrenade_BouncyPlasma_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	AGrenade_BouncyPlasma_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.ExecuteUbergraph_Grenade_BouncyPlasma
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_BouncyPlasma_C::ExecuteUbergraph_Grenade_BouncyPlasma(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.ExecuteUbergraph_Grenade_BouncyPlasma");

	AGrenade_BouncyPlasma_C_ExecuteUbergraph_Grenade_BouncyPlasma_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
