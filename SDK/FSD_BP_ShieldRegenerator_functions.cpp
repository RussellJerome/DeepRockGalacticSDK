// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ShieldRegenerator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.ReturnHome
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ShieldRegenerator_C::ReturnHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.ReturnHome");

	ABP_ShieldRegenerator_C_ReturnHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.SetScale
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShieldRegenerator_C::SetScale(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.SetScale");

	ABP_ShieldRegenerator_C_SetScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.RemovePlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_ShieldRegenerator_C::RemovePlayer(class APlayerCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.RemovePlayer");

	ABP_ShieldRegenerator_C_RemovePlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.AddPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_ShieldRegenerator_C::AddPlayer(class APlayerCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.AddPlayer");

	ABP_ShieldRegenerator_C_AddPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShieldRegenerator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.UserConstructionScript");

	ABP_ShieldRegenerator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.IntroAnim__FinishedFunc
// (BlueprintEvent)

void ABP_ShieldRegenerator_C::IntroAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.IntroAnim__FinishedFunc");

	ABP_ShieldRegenerator_C_IntroAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.IntroAnim__UpdateFunc
// (BlueprintEvent)

void ABP_ShieldRegenerator_C::IntroAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.IntroAnim__UpdateFunc");

	ABP_ShieldRegenerator_C_IntroAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ShieldRegenerator_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ShieldRegenerator_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShieldRegenerator_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_ShieldRegenerator_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.AllBeginDestroy
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ShieldRegenerator_C::AllBeginDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.AllBeginDestroy");

	ABP_ShieldRegenerator_C_AllBeginDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.ReceiveHitObject
// (Event, Protected, BlueprintEvent)

void ABP_ShieldRegenerator_C::ReceiveHitObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.ReceiveHitObject");

	ABP_ShieldRegenerator_C_ReceiveHitObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShieldRegenerator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.ReceiveBeginPlay");

	ABP_ShieldRegenerator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.BndEvt__FleeCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ShieldRegenerator_C::BndEvt__FleeCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.BndEvt__FleeCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ShieldRegenerator_C_BndEvt__FleeCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.Failsafe Hit Object
// (BlueprintCallable, BlueprintEvent)

void ABP_ShieldRegenerator_C::Failsafe_Hit_Object()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.Failsafe Hit Object");

	ABP_ShieldRegenerator_C_Failsafe_Hit_Object_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.ExecuteUbergraph_BP_ShieldRegenerator
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShieldRegenerator_C::ExecuteUbergraph_BP_ShieldRegenerator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.ExecuteUbergraph_BP_ShieldRegenerator");

	ABP_ShieldRegenerator_C_ExecuteUbergraph_BP_ShieldRegenerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
