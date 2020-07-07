// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_LureTarget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LureTarget.BP_LureTarget_C.GetIsTargetable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LureTarget_C::GetIsTargetable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.GetIsTargetable");

	ABP_LureTarget_C_GetIsTargetable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LureTarget.BP_LureTarget_C.GetTargetCenterMass
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_LureTarget_C::GetTargetCenterMass()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.GetTargetCenterMass");

	ABP_LureTarget_C_GetTargetCenterMass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LureTarget.BP_LureTarget_C.GetTargetHealthComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UHealthComponentBase*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHealthComponentBase* ABP_LureTarget_C::GetTargetHealthComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.GetTargetHealthComponent");

	ABP_LureTarget_C_GetTargetHealthComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LureTarget.BP_LureTarget_C.ShowDamageEffects
// (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystem**        particles                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Orientation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LureTarget_C::ShowDamageEffects(class UParticleSystem** particles, struct FVector* Location, struct FRotator* Orientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.ShowDamageEffects");

	ABP_LureTarget_C_ShowDamageEffects_Params params;
	params.particles = particles;
	params.Location = Location;
	params.Orientation = Orientation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LureTarget.BP_LureTarget_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LureTarget_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.UserConstructionScript");

	ABP_LureTarget_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LureTarget.BP_LureTarget_C.GrowHologramZ__FinishedFunc
// (BlueprintEvent)

void ABP_LureTarget_C::GrowHologramZ__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.GrowHologramZ__FinishedFunc");

	ABP_LureTarget_C_GrowHologramZ__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LureTarget.BP_LureTarget_C.GrowHologramZ__UpdateFunc
// (BlueprintEvent)

void ABP_LureTarget_C::GrowHologramZ__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.GrowHologramZ__UpdateFunc");

	ABP_LureTarget_C_GrowHologramZ__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LureTarget.BP_LureTarget_C.Disappear__FinishedFunc
// (BlueprintEvent)

void ABP_LureTarget_C::Disappear__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.Disappear__FinishedFunc");

	ABP_LureTarget_C_Disappear__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LureTarget.BP_LureTarget_C.Disappear__UpdateFunc
// (BlueprintEvent)

void ABP_LureTarget_C::Disappear__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.Disappear__UpdateFunc");

	ABP_LureTarget_C_Disappear__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LureTarget.BP_LureTarget_C.Glitch__FinishedFunc
// (BlueprintEvent)

void ABP_LureTarget_C::Glitch__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.Glitch__FinishedFunc");

	ABP_LureTarget_C_Glitch__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LureTarget.BP_LureTarget_C.Glitch__UpdateFunc
// (BlueprintEvent)

void ABP_LureTarget_C::Glitch__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.Glitch__UpdateFunc");

	ABP_LureTarget_C_Glitch__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LureTarget.BP_LureTarget_C.Glitch2__FinishedFunc
// (BlueprintEvent)

void ABP_LureTarget_C::Glitch2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.Glitch2__FinishedFunc");

	ABP_LureTarget_C_Glitch2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LureTarget.BP_LureTarget_C.Glitch2__UpdateFunc
// (BlueprintEvent)

void ABP_LureTarget_C::Glitch2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.Glitch2__UpdateFunc");

	ABP_LureTarget_C_Glitch2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LureTarget.BP_LureTarget_C.GlitchAnimationRate__FinishedFunc
// (BlueprintEvent)

void ABP_LureTarget_C::GlitchAnimationRate__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.GlitchAnimationRate__FinishedFunc");

	ABP_LureTarget_C_GlitchAnimationRate__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LureTarget.BP_LureTarget_C.GlitchAnimationRate__UpdateFunc
// (BlueprintEvent)

void ABP_LureTarget_C::GlitchAnimationRate__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.GlitchAnimationRate__UpdateFunc");

	ABP_LureTarget_C_GlitchAnimationRate__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LureTarget.BP_LureTarget_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LureTarget_C::BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float* Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature");

	ABP_LureTarget_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LureTarget.BP_LureTarget_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHealthComponentBase**   HealthComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_LureTarget_C::BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase** HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature");

	ABP_LureTarget_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature_Params params;
	params.HealthComponent = HealthComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LureTarget.BP_LureTarget_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LureTarget_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.ReceiveBeginPlay");

	ABP_LureTarget_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LureTarget.BP_LureTarget_C.ExecuteUbergraph_BP_LureTarget
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LureTarget_C::ExecuteUbergraph_BP_LureTarget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.ExecuteUbergraph_BP_LureTarget");

	ABP_LureTarget_C_ExecuteUbergraph_BP_LureTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
