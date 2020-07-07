// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_GrenadeLauncher_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.LaunchPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_GrenadeLauncher_C::LaunchPlayer(class APlayerCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.LaunchPlayer");

	APRJ_GrenadeLauncher_C_LaunchPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.OnRep_Lit
// (BlueprintCallable, BlueprintEvent)

void APRJ_GrenadeLauncher_C::OnRep_Lit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.OnRep_Lit");

	APRJ_GrenadeLauncher_C_OnRep_Lit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APRJ_GrenadeLauncher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.UserConstructionScript");

	APRJ_GrenadeLauncher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.OnImpacted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APRJ_GrenadeLauncher_C::OnImpacted(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.OnImpacted");

	APRJ_GrenadeLauncher_C_OnImpacted_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APRJ_GrenadeLauncher_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APRJ_GrenadeLauncher_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.MakeBouncy
// (Event, Public, BlueprintEvent)

void APRJ_GrenadeLauncher_C::MakeBouncy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.MakeBouncy");

	APRJ_GrenadeLauncher_C_MakeBouncy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.Trigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void APRJ_GrenadeLauncher_C::Trigger(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.Trigger");

	APRJ_GrenadeLauncher_C_Trigger_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.ExecuteUbergraph_PRJ_GrenadeLauncher
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_GrenadeLauncher_C::ExecuteUbergraph_PRJ_GrenadeLauncher(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.ExecuteUbergraph_PRJ_GrenadeLauncher");

	APRJ_GrenadeLauncher_C_ExecuteUbergraph_PRJ_GrenadeLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
