// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Grenade_Axe_Stuck_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_StandOnMe
// (BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Axe_Stuck_C::OnRep_StandOnMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_StandOnMe");

	ABP_Grenade_Axe_Stuck_C_OnRep_StandOnMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_AxeGrenadeItem
// (BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Axe_Stuck_C::OnRep_AxeGrenadeItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_AxeGrenadeItem");

	ABP_Grenade_Axe_Stuck_C_OnRep_AxeGrenadeItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Axe_Stuck_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.UserConstructionScript");

	ABP_Grenade_Axe_Stuck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.PickUpAxe
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AThrownGrenadeItem**     ThrownGrenadeItem              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Axe_Stuck_C::PickUpAxe(class AThrownGrenadeItem** ThrownGrenadeItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.PickUpAxe");

	ABP_Grenade_Axe_Stuck_C_PickUpAxe_Params params;
	params.ThrownGrenadeItem = ThrownGrenadeItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.Detach Axe
// (BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Axe_Stuck_C::Detach_Axe()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.Detach Axe");

	ABP_Grenade_Axe_Stuck_C_Detach_Axe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.Attach
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ParentActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        ParentComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  ParentSocketName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CanRetrieve                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Axe_Stuck_C::Attach(class AActor** ParentActor, class USceneComponent** ParentComponent, struct FName* ParentSocketName, bool* CanRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.Attach");

	ABP_Grenade_Axe_Stuck_C_Attach_Params params;
	params.ParentActor = ParentActor;
	params.ParentComponent = ParentComponent;
	params.ParentSocketName = ParentSocketName;
	params.CanRetrieve = CanRetrieve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnDestroyed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Axe_Stuck_C::OnDestroyed_Event(class AActor** DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnDestroyed_Event");

	ABP_Grenade_Axe_Stuck_C_OnDestroyed_Event_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnDeath_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHealthComponentBase**   HealthComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Grenade_Axe_Stuck_C::OnDeath_Event(class UHealthComponentBase** HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnDeath_Event");

	ABP_Grenade_Axe_Stuck_C_OnDeath_Event_Params params;
	params.HealthComponent = HealthComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.GoPhysical
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          PassThrough                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CanRetrieve                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Axe_Stuck_C::GoPhysical(bool* PassThrough, bool* CanRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.GoPhysical");

	ABP_Grenade_Axe_Stuck_C_GoPhysical_Params params;
	params.PassThrough = PassThrough;
	params.CanRetrieve = CanRetrieve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.MakeStandable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          CanRetrieve                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Axe_Stuck_C::MakeStandable(bool* CanRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.MakeStandable");

	ABP_Grenade_Axe_Stuck_C_MakeStandable_Params params;
	params.CanRetrieve = CanRetrieve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.SetRetrieval
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          CanRetrieve                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Axe_Stuck_C::SetRetrieval(bool* CanRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.SetRetrieval");

	ABP_Grenade_Axe_Stuck_C_SetRetrieval_Params params;
	params.CanRetrieve = CanRetrieve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Axe_Stuck_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature");

	ABP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Axe_Stuck_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool* canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");

	ABP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params params;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.ExecuteUbergraph_BP_Grenade_Axe_Stuck
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Axe_Stuck_C::ExecuteUbergraph_BP_Grenade_Axe_Stuck(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.ExecuteUbergraph_BP_Grenade_Axe_Stuck");

	ABP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
