// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_NormalBlasterShot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.OnImpacted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APRJ_NormalBlasterShot_C::OnImpacted(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.OnImpacted");

	APRJ_NormalBlasterShot_C_OnImpacted_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.MakeBouncy
// (Event, Public, BlueprintEvent)

void APRJ_NormalBlasterShot_C::MakeBouncy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.MakeBouncy");

	APRJ_NormalBlasterShot_C_MakeBouncy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void APRJ_NormalBlasterShot_C::BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult* ImpactResult, struct FVector* ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");

	APRJ_NormalBlasterShot_C_BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.DoEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_NormalBlasterShot_C::DoEffects(struct FVector* Location, struct FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.DoEffects");

	APRJ_NormalBlasterShot_C_DoEffects_Params params;
	params.Location = Location;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.ExecuteUbergraph_PRJ_NormalBlasterShot
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_NormalBlasterShot_C::ExecuteUbergraph_PRJ_NormalBlasterShot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.ExecuteUbergraph_PRJ_NormalBlasterShot");

	APRJ_NormalBlasterShot_C_ExecuteUbergraph_PRJ_NormalBlasterShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
