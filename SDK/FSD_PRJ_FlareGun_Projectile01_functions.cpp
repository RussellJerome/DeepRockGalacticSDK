// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_FlareGun_Projectile01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.GetImpactEmitter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFSDPhysicalMaterial**   self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ImpactParticles                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APRJ_FlareGun_Projectile01_C::GetImpactEmitter(class UFSDPhysicalMaterial** self2, class UParticleSystem** ImpactParticles)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.GetImpactEmitter");

	APRJ_FlareGun_Projectile01_C_GetImpactEmitter_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImpactParticles != nullptr)
		*ImpactParticles = params.ImpactParticles;
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.UpdateShadowRadius
// (Public, BlueprintCallable, BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::UpdateShadowRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.UpdateShadowRadius");

	APRJ_FlareGun_Projectile01_C_UpdateShadowRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.StartFadeOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APRJ_FlareGun_Projectile01_C::StartFadeOut(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.StartFadeOut");

	APRJ_FlareGun_Projectile01_C_StartFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.GetHealthBaseComponentFromActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UHealthComponentBase*    Health                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APRJ_FlareGun_Projectile01_C::GetHealthBaseComponentFromActor(class AActor** Actor, class UHealthComponentBase** Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.GetHealthBaseComponentFromActor");

	APRJ_FlareGun_Projectile01_C_GetHealthBaseComponentFromActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Health != nullptr)
		*Health = params.Health;
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.FallToGround
// (Public, BlueprintCallable, BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::FallToGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.FallToGround");

	APRJ_FlareGun_Projectile01_C_FallToGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__FinishedFunc
// (BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::Light_Anim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__FinishedFunc");

	APRJ_FlareGun_Projectile01_C_Light_Anim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__UpdateFunc
// (BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::Light_Anim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__UpdateFunc");

	APRJ_FlareGun_Projectile01_C_Light_Anim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnImpacted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APRJ_FlareGun_Projectile01_C::OnImpacted(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnImpacted");

	APRJ_FlareGun_Projectile01_C_OnImpacted_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
// (BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature");

	APRJ_FlareGun_Projectile01_C_BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnDroppodImpact
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AMiningPod**             DropPod                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_FlareGun_Projectile01_C::OnDroppodImpact(class AMiningPod** DropPod)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnDroppodImpact");

	APRJ_FlareGun_Projectile01_C_OnDroppodImpact_Params params;
	params.DropPod = DropPod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.HideAll
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::HideAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.HideAll");

	APRJ_FlareGun_Projectile01_C_HideAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnFlareExtinguish
// (Event, Public, BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::OnFlareExtinguish()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnFlareExtinguish");

	APRJ_FlareGun_Projectile01_C_OnFlareExtinguish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnUpdateShadowRadius
// (Event, Public, BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::OnUpdateShadowRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnUpdateShadowRadius");

	APRJ_FlareGun_Projectile01_C_OnUpdateShadowRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ReleaseFlare
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::ReleaseFlare()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ReleaseFlare");

	APRJ_FlareGun_Projectile01_C_ReleaseFlare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ActivateFlare
// (Event, Public, BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::ActivateFlare()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ActivateFlare");

	APRJ_FlareGun_Projectile01_C_ActivateFlare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ExecuteUbergraph_PRJ_FlareGun_Projectile01
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_FlareGun_Projectile01_C::ExecuteUbergraph_PRJ_FlareGun_Projectile01(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ExecuteUbergraph_PRJ_FlareGun_Projectile01");

	APRJ_FlareGun_Projectile01_C_ExecuteUbergraph_PRJ_FlareGun_Projectile01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
