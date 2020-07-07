// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Grenade_IFG_Area_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.PushMixAtDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Max_Distance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Min_Distance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_IFG_Area_Base_C::PushMixAtDistance(float* Max_Distance, float* Min_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.PushMixAtDistance");

	ABP_Grenade_IFG_Area_Base_C_PushMixAtDistance_Params params;
	params.Max_Distance = Max_Distance;
	params.Min_Distance = Min_Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.OnRep_Actice
// (BlueprintCallable, BlueprintEvent)

void ABP_Grenade_IFG_Area_Base_C::OnRep_Actice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.OnRep_Actice");

	ABP_Grenade_IFG_Area_Base_C_OnRep_Actice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_IFG_Area_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.UserConstructionScript");

	ABP_Grenade_IFG_Area_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Grenade_IFG_Area_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.ReceiveBeginPlay");

	ABP_Grenade_IFG_Area_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature
// (BlueprintAuthorityOnly, BlueprintEvent)
// Parameters:
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          entered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_IFG_Area_Base_C::BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature(class AActor** TargetActor, bool* entered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature");

	ABP_Grenade_IFG_Area_Base_C_BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature_Params params;
	params.TargetActor = TargetActor;
	params.entered = entered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.ActiveWeakeningEffect
// (BlueprintCallable, BlueprintEvent)

void ABP_Grenade_IFG_Area_Base_C::ActiveWeakeningEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.ActiveWeakeningEffect");

	ABP_Grenade_IFG_Area_Base_C_ActiveWeakeningEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Grenade_IFG_Area_Base_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Grenade_IFG_Area_Base_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_IFG_Area_Base_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Grenade_IFG_Area_Base_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.ExecuteUbergraph_BP_Grenade_IFG_Area_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_IFG_Area_Base_C::ExecuteUbergraph_BP_Grenade_IFG_Area_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.ExecuteUbergraph_BP_Grenade_IFG_Area_Base");

	ABP_Grenade_IFG_Area_Base_C_ExecuteUbergraph_BP_Grenade_IFG_Area_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
