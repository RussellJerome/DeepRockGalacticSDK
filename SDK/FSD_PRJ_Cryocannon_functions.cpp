// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_Cryocannon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_Cryocannon.PRJ_Cryocannon_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APRJ_Cryocannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Cryocannon.PRJ_Cryocannon_C.UserConstructionScript");

	APRJ_Cryocannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_Cryocannon.PRJ_Cryocannon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_Cryocannon_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Cryocannon.PRJ_Cryocannon_C.ReceiveTick");

	APRJ_Cryocannon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_Cryocannon.PRJ_Cryocannon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APRJ_Cryocannon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Cryocannon.PRJ_Cryocannon_C.ReceiveBeginPlay");

	APRJ_Cryocannon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_Cryocannon.PRJ_Cryocannon_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APRJ_Cryocannon_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Cryocannon.PRJ_Cryocannon_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APRJ_Cryocannon_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PRJ_Cryocannon.PRJ_Cryocannon_C.Die
// (BlueprintCallable, BlueprintEvent)

void APRJ_Cryocannon_C::Die()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Cryocannon.PRJ_Cryocannon_C.Die");

	APRJ_Cryocannon_C_Die_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_Cryocannon.PRJ_Cryocannon_C.OnImpacted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APRJ_Cryocannon_C::OnImpacted(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Cryocannon.PRJ_Cryocannon_C.OnImpacted");

	APRJ_Cryocannon_C_OnImpacted_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_Cryocannon.PRJ_Cryocannon_C.ExecuteUbergraph_PRJ_Cryocannon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_Cryocannon_C::ExecuteUbergraph_PRJ_Cryocannon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Cryocannon.PRJ_Cryocannon_C.ExecuteUbergraph_PRJ_Cryocannon");

	APRJ_Cryocannon_C_ExecuteUbergraph_PRJ_Cryocannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
