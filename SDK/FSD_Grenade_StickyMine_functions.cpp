// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Grenade_StickyMine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Dead
// (BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::OnRep_Dead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Dead");

	AGrenade_StickyMine_C_OnRep_Dead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.AddGearStateEntries
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGrenade_StickyMine_C::AddGearStateEntries(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_StickyMine.Grenade_StickyMine_C.AddGearStateEntries");

	AGrenade_StickyMine_C_AddGearStateEntries_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Armed
// (BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::OnRep_Armed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Armed");

	AGrenade_StickyMine_C_OnRep_Armed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Triggered
// (BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::OnRep_Triggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Triggered");

	AGrenade_StickyMine_C_OnRep_Triggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_StickyMine.Grenade_StickyMine_C.UserConstructionScript");

	AGrenade_StickyMine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.RingPulse__FinishedFunc
// (BlueprintEvent)

void AGrenade_StickyMine_C::RingPulse__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_StickyMine.Grenade_StickyMine_C.RingPulse__FinishedFunc");

	AGrenade_StickyMine_C_RingPulse__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.RingPulse__UpdateFunc
// (BlueprintEvent)

void AGrenade_StickyMine_C::RingPulse__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_StickyMine.Grenade_StickyMine_C.RingPulse__UpdateFunc");

	AGrenade_StickyMine_C_RingPulse__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGrenade_StickyMine_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	AGrenade_StickyMine_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGrenade_StickyMine_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	AGrenade_StickyMine_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Grenade_StickyMine.Grenade_StickyMine_C.TriggerExplosion
// (BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::TriggerExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_StickyMine.Grenade_StickyMine_C.TriggerExplosion");

	AGrenade_StickyMine_C_TriggerExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.GetArmed
// (BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::GetArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_StickyMine.Grenade_StickyMine_C.GetArmed");

	AGrenade_StickyMine_C_GetArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.DoTriggerAreaPulse
// (BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::DoTriggerAreaPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_StickyMine.Grenade_StickyMine_C.DoTriggerAreaPulse");

	AGrenade_StickyMine_C_DoTriggerAreaPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_StickyMine_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature");

	AGrenade_StickyMine_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.DisarmMine
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AThrownGrenadeItem**     ThrownGrenadeItem              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_StickyMine_C::DisarmMine(class AThrownGrenadeItem** ThrownGrenadeItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_StickyMine.Grenade_StickyMine_C.DisarmMine");

	AGrenade_StickyMine_C_DisarmMine_Params params;
	params.ThrownGrenadeItem = ThrownGrenadeItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.KillMine
// (BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::KillMine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_StickyMine.Grenade_StickyMine_C.KillMine");

	AGrenade_StickyMine_C_KillMine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.ExplodeLast
// (BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::ExplodeLast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_StickyMine.Grenade_StickyMine_C.ExplodeLast");

	AGrenade_StickyMine_C_ExplodeLast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.ExecuteUbergraph_Grenade_StickyMine
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_StickyMine_C::ExecuteUbergraph_Grenade_StickyMine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_StickyMine.Grenade_StickyMine_C.ExecuteUbergraph_Grenade_StickyMine");

	AGrenade_StickyMine_C_ExecuteUbergraph_Grenade_StickyMine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
