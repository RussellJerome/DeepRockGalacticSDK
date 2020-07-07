// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Kickable_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Kickable_Base.BP_Kickable_Base_C.OnRep_KickSoundLocation
// (BlueprintCallable, BlueprintEvent)

void ABP_Kickable_Base_C::OnRep_KickSoundLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.OnRep_KickSoundLocation");

	ABP_Kickable_Base_C_OnRep_KickSoundLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Kickable_Base.BP_Kickable_Base_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Kickable_Base_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature");

	ABP_Kickable_Base_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Kickable_Base.BP_Kickable_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Kickable_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.ReceiveBeginPlay");

	ABP_Kickable_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Kickable_Base.BP_Kickable_Base_C.destroy
// (BlueprintCallable, BlueprintEvent)

void ABP_Kickable_Base_C::destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.destroy");

	ABP_Kickable_Base_C_destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Kickable_Base.BP_Kickable_Base_C.DestroyOvertime
// (BlueprintCallable, BlueprintEvent)

void ABP_Kickable_Base_C::DestroyOvertime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.DestroyOvertime");

	ABP_Kickable_Base_C_DestroyOvertime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Kickable_Base.BP_Kickable_Base_C.Play_Kick
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Kicker                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Kickable_Base_C::Play_Kick(class APlayerCharacter** Kicker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.Play_Kick");

	ABP_Kickable_Base_C_Play_Kick_Params params;
	params.Kicker = Kicker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Kickable_Base.BP_Kickable_Base_C.BndEvt__Kickable Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Kickable_Base_C::BndEvt__Kickable_Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.BndEvt__Kickable Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature");

	ABP_Kickable_Base_C_BndEvt__Kickable_Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Kickable_Base.BP_Kickable_Base_C.Set Is Interactable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Can_interact                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Kickable_Base_C::Set_Is_Interactable(bool* Can_interact)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.Set Is Interactable");

	ABP_Kickable_Base_C_Set_Is_Interactable_Params params;
	params.Can_interact = Can_interact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Kickable_Base.BP_Kickable_Base_C.ExecuteUbergraph_BP_Kickable_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Kickable_Base_C::ExecuteUbergraph_BP_Kickable_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.ExecuteUbergraph_BP_Kickable_Base");

	ABP_Kickable_Base_C_ExecuteUbergraph_BP_Kickable_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
