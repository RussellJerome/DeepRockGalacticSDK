// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_GrenadeAxe_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APRJ_GrenadeAxe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.UserConstructionScript");

	APRJ_GrenadeAxe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.OnImpacted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APRJ_GrenadeAxe_C::OnImpacted(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.OnImpacted");

	APRJ_GrenadeAxe_C_OnImpacted_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.Discharge
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                HitLocation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UFSDPhysicalMaterial**   HitPhysMat                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_GrenadeAxe_C::Discharge(class AActor** HitActor, class UPrimitiveComponent** HitComponent, struct FVector* HitLocation, class UFSDPhysicalMaterial** HitPhysMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.Discharge");

	APRJ_GrenadeAxe_C_Discharge_Params params;
	params.HitActor = HitActor;
	params.HitComponent = HitComponent;
	params.HitLocation = HitLocation;
	params.HitPhysMat = HitPhysMat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.BluntDamage
// (BlueprintCallable, BlueprintEvent)

void APRJ_GrenadeAxe_C::BluntDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.BluntDamage");

	APRJ_GrenadeAxe_C_BluntDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APRJ_GrenadeAxe_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.ReceiveBeginPlay");

	APRJ_GrenadeAxe_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.BndEvt__KillSmallShits Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APRJ_GrenadeAxe_C::BndEvt__KillSmallShits_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.BndEvt__KillSmallShits Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	APRJ_GrenadeAxe_C_BndEvt__KillSmallShits_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.ExecuteUbergraph_PRJ_GrenadeAxe
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_GrenadeAxe_C::ExecuteUbergraph_PRJ_GrenadeAxe(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.ExecuteUbergraph_PRJ_GrenadeAxe");

	APRJ_GrenadeAxe_C_ExecuteUbergraph_PRJ_GrenadeAxe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
