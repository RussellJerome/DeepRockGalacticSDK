// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_SentryOvercharge_Projectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APRJ_SentryOvercharge_Projectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.UserConstructionScript");

	APRJ_SentryOvercharge_Projectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.OnImpacted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APRJ_SentryOvercharge_Projectile_C::OnImpacted(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.OnImpacted");

	APRJ_SentryOvercharge_Projectile_C_OnImpacted_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APRJ_SentryOvercharge_Projectile_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APRJ_SentryOvercharge_Projectile_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APRJ_SentryOvercharge_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.ReceiveBeginPlay");

	APRJ_SentryOvercharge_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.MakeBouncy
// (Event, Public, BlueprintEvent)

void APRJ_SentryOvercharge_Projectile_C::MakeBouncy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.MakeBouncy");

	APRJ_SentryOvercharge_Projectile_C_MakeBouncy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.ExecuteUbergraph_PRJ_SentryOvercharge_Projectile
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_SentryOvercharge_Projectile_C::ExecuteUbergraph_PRJ_SentryOvercharge_Projectile(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.ExecuteUbergraph_PRJ_SentryOvercharge_Projectile");

	APRJ_SentryOvercharge_Projectile_C_ExecuteUbergraph_PRJ_SentryOvercharge_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
