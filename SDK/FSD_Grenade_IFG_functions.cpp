// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Grenade_IFG_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Grenade_IFG.Grenade_IFG_C.OnRep_stick
// (BlueprintCallable, BlueprintEvent)

void AGrenade_IFG_C::OnRep_stick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_IFG.Grenade_IFG_C.OnRep_stick");

	AGrenade_IFG_C_OnRep_stick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_IFG.Grenade_IFG_C.AddGearStateEntries
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGrenade_IFG_C::AddGearStateEntries(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_IFG.Grenade_IFG_C.AddGearStateEntries");

	AGrenade_IFG_C_AddGearStateEntries_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function Grenade_IFG.Grenade_IFG_C.EnableWeakeningEffect
// (BlueprintCallable, BlueprintEvent)

void AGrenade_IFG_C::EnableWeakeningEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_IFG.Grenade_IFG_C.EnableWeakeningEffect");

	AGrenade_IFG_C_EnableWeakeningEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_IFG.Grenade_IFG_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGrenade_IFG_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_IFG.Grenade_IFG_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

	AGrenade_IFG_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_IFG.Grenade_IFG_C.ExecuteUbergraph_Grenade_IFG
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_IFG_C::ExecuteUbergraph_Grenade_IFG(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_IFG.Grenade_IFG_C.ExecuteUbergraph_Grenade_IFG");

	AGrenade_IFG_C_ExecuteUbergraph_Grenade_IFG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
