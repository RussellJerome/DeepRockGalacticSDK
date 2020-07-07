// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_ChargedBlasterShot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnRep_AoEEnabled
// (BlueprintCallable, BlueprintEvent)

void APRJ_ChargedBlasterShot_C::OnRep_AoEEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnRep_AoEEnabled");

	APRJ_ChargedBlasterShot_C_OnRep_AoEEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APRJ_ChargedBlasterShot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.UserConstructionScript");

	APRJ_ChargedBlasterShot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.Grow Time Line__FinishedFunc
// (BlueprintEvent)

void APRJ_ChargedBlasterShot_C::Grow_Time_Line__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.Grow Time Line__FinishedFunc");

	APRJ_ChargedBlasterShot_C_Grow_Time_Line__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.Grow Time Line__UpdateFunc
// (BlueprintEvent)

void APRJ_ChargedBlasterShot_C::Grow_Time_Line__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.Grow Time Line__UpdateFunc");

	APRJ_ChargedBlasterShot_C_Grow_Time_Line__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHealthComponentBase**   HealthComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APRJ_ChargedBlasterShot_C::BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase** HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature");

	APRJ_ChargedBlasterShot_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature_Params params;
	params.HealthComponent = HealthComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.BndEvt__AoEDamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APRJ_ChargedBlasterShot_C::BndEvt__AoEDamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.BndEvt__AoEDamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APRJ_ChargedBlasterShot_C_BndEvt__AoEDamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnAoEDamageEnabled
// (Event, Protected, BlueprintEvent)

void APRJ_ChargedBlasterShot_C::OnAoEDamageEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnAoEDamageEnabled");

	APRJ_ChargedBlasterShot_C_OnAoEDamageEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APRJ_ChargedBlasterShot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.ReceiveBeginPlay");

	APRJ_ChargedBlasterShot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnImpacted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APRJ_ChargedBlasterShot_C::OnImpacted(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnImpacted");

	APRJ_ChargedBlasterShot_C_OnImpacted_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.UpdateFNRadius
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         New_Radius                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_ChargedBlasterShot_C::UpdateFNRadius(float* New_Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.UpdateFNRadius");

	APRJ_ChargedBlasterShot_C_UpdateFNRadius_Params params;
	params.New_Radius = New_Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.ExecuteUbergraph_PRJ_ChargedBlasterShot
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_ChargedBlasterShot_C::ExecuteUbergraph_PRJ_ChargedBlasterShot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.ExecuteUbergraph_PRJ_ChargedBlasterShot");

	APRJ_ChargedBlasterShot_C_ExecuteUbergraph_PRJ_ChargedBlasterShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
