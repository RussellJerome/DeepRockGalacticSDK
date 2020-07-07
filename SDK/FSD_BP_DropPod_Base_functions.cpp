// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DropPod_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DropPod_Base.BP_DropPod_Base_C.AnyPlayersOnRamp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DropPod_Base_C::AnyPlayersOnRamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.AnyPlayersOnRamp");

	ABP_DropPod_Base_C_AnyPlayersOnRamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.HandleRampPhotosensitivity
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Base_C::HandleRampPhotosensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.HandleRampPhotosensitivity");

	ABP_DropPod_Base_C_HandleRampPhotosensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.SetPathBlockersEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::SetPathBlockersEnabled(bool* enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.SetPathBlockersEnabled");

	ABP_DropPod_Base_C_SetPathBlockersEnabled_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.DestroyIfClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Actors                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float*                         DistanceSQ                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::DestroyIfClose(float* DistanceSQ, TArray<class AActor*>* Actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.DestroyIfClose");

	ABP_DropPod_Base_C_DestroyIfClose_Params params;
	params.DistanceSQ = DistanceSQ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.RemoveDangerousCaveItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::RemoveDangerousCaveItems(float* distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.RemoveDangerousCaveItems");

	ABP_DropPod_Base_C_RemoveDangerousCaveItems_Params params;
	params.distance = distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.SetAllPlayersAnsel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::SetAllPlayersAnsel(bool* active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.SetAllPlayersAnsel");

	ABP_DropPod_Base_C_SetAllPlayersAnsel_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.GetDonkeyReturnPickupLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_DropPod_Base_C::GetDonkeyReturnPickupLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.GetDonkeyReturnPickupLocation");

	ABP_DropPod_Base_C_GetDonkeyReturnPickupLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.SetDoorState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDroppodDoorState>* DoorState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::SetDoorState(TEnumAsByte<EDroppodDoorState>* DoorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.SetDoorState");

	ABP_DropPod_Base_C_SetDoorState_Params params;
	params.DoorState = DoorState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.GetCountDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          First                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Widget_DropPod_AltitudeMeter_C* AsBP_Count_Down_Actor          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::GetCountDown(bool* First, class ABP_Widget_DropPod_AltitudeMeter_C** AsBP_Count_Down_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.GetCountDown");

	ABP_DropPod_Base_C_GetCountDown_Params params;
	params.First = First;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBP_Count_Down_Actor != nullptr)
		*AsBP_Count_Down_Actor = params.AsBP_Count_Down_Actor;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_MuleInstance
// (BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Base_C::OnRep_MuleInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_MuleInstance");

	ABP_DropPod_Base_C_OnRep_MuleInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OnMuleLoaded
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Base_C::OnMuleLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnMuleLoaded");

	ABP_DropPod_Base_C_OnMuleLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.GetMule
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_Donkey_C*            Donkey                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::GetMule(class ABP_Donkey_C** Donkey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.GetMule");

	ABP_DropPod_Base_C_GetMule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Donkey != nullptr)
		*Donkey = params.Donkey;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.SetStandingDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsStandingDown                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::SetStandingDown(bool* IsStandingDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.SetStandingDown");

	ABP_DropPod_Base_C_SetStandingDown_Params params;
	params.IsStandingDown = IsStandingDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.CloseRamp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Base_C::CloseRamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.CloseRamp");

	ABP_DropPod_Base_C_CloseRamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OpenRamp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Base_C::OpenRamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OpenRamp");

	ABP_DropPod_Base_C_OpenRamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OnAllPlayersLeftPod
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Base_C::OnAllPlayersLeftPod()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnAllPlayersLeftPod");

	ABP_DropPod_Base_C_OnAllPlayersLeftPod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.SetPreferredCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent**   Spawn                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TSoftObjectPtr<class UClass>*  Class                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DropPod_Base_C::SetPreferredCharacter(class UChildActorComponent** Spawn, TSoftObjectPtr<class UClass>* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.SetPreferredCharacter");

	ABP_DropPod_Base_C_SetPreferredCharacter_Params params;
	params.Spawn = Spawn;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.UserConstructionScript");

	ABP_DropPod_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_1__FinishedFunc");

	ABP_DropPod_Base_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_1__UpdateFunc");

	ABP_DropPod_Base_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_2__FinishedFunc");

	ABP_DropPod_Base_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_2__UpdateFunc");

	ABP_DropPod_Base_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_3__FinishedFunc
// (BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_3__FinishedFunc");

	ABP_DropPod_Base_C_Timeline_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_3__UpdateFunc
// (BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_3__UpdateFunc");

	ABP_DropPod_Base_C_Timeline_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_4__FinishedFunc
// (BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_4__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_4__FinishedFunc");

	ABP_DropPod_Base_C_Timeline_4__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_4__UpdateFunc
// (BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_4__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_4__UpdateFunc");

	ABP_DropPod_Base_C_Timeline_4__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_0__FinishedFunc");

	ABP_DropPod_Base_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_0__UpdateFunc");

	ABP_DropPod_Base_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DropPod_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveBeginPlay");

	ABP_DropPod_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveActorBeginOverlap");

	ABP_DropPod_Base_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveActorEndOverlap");

	ABP_DropPod_Base_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.StartDeparture
// (BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Base_C::StartDeparture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.StartDeparture");

	ABP_DropPod_Base_C_StartDeparture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OnDroppodImpact
// (Event, Protected, BlueprintEvent)

void ABP_DropPod_Base_C::OnDroppodImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnDroppodImpact");

	ABP_DropPod_Base_C_OnDroppodImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Start Donkey Unload Sequence
// (BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Base_C::Start_Donkey_Unload_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Start Donkey Unload Sequence");

	ABP_DropPod_Base_C_Start_Donkey_Unload_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Unload Donkey
// (BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Base_C::Unload_Donkey()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Unload Donkey");

	ABP_DropPod_Base_C_Unload_Donkey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OnDrillingStarted
// (Event, Protected, BlueprintEvent)

void ABP_DropPod_Base_C::OnDrillingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnDrillingStarted");

	ABP_DropPod_Base_C_OnDrillingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Load Donkey
// (BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Base_C::Load_Donkey()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Load Donkey");

	ABP_DropPod_Base_C_Load_Donkey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Fade to Black
// (BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Base_C::Fade_to_Black()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Fade to Black");

	ABP_DropPod_Base_C_Fade_to_Black_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_DropPod_Base_C::BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_DropPod_Base_C_BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_DropPod_Base_C_BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_DropPod_Base_C::BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_DropPod_Base_C_BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_DropPod_Base.BP_DropPod_Base_C.DrillRotate
// (BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Base_C::DrillRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.DrillRotate");

	ABP_DropPod_Base_C_DrillRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OnCharacterEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::OnCharacterEnter(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnCharacterEnter");

	ABP_DropPod_Base_C_OnCharacterEnter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OnCharacterExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::OnCharacterExit(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnCharacterExit");

	ABP_DropPod_Base_C_OnCharacterExit_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.SetMuleInstance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADonkeyCharacter**       Donkey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::SetMuleInstance(class ADonkeyCharacter** Donkey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.SetMuleInstance");

	ABP_DropPod_Base_C_SetMuleInstance_Params params;
	params.Donkey = Donkey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.DropPodSetAnsel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::DropPodSetAnsel(bool* active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.DropPodSetAnsel");

	ABP_DropPod_Base_C_DropPodSetAnsel_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.AllSetAnsel
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::AllSetAnsel(bool* active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.AllSetAnsel");

	ABP_DropPod_Base_C_AllSetAnsel_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_DropPod_Base_C::BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_DropPod_Base_C_BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature");

	ABP_DropPod_Base_C_BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.MakeTruckerDicesMove
// (BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Base_C::MakeTruckerDicesMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.MakeTruckerDicesMove");

	ABP_DropPod_Base_C_MakeTruckerDicesMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_RampState
// (Event, Protected, BlueprintEvent)

void ABP_DropPod_Base_C::OnRep_RampState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_RampState");

	ABP_DropPod_Base_C_OnRep_RampState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OnGeneratedMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::OnGeneratedMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnGeneratedMissionChanged");

	ABP_DropPod_Base_C_OnGeneratedMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.ExecuteUbergraph_BP_DropPod_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Base_C::ExecuteUbergraph_BP_DropPod_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.ExecuteUbergraph_BP_DropPod_Base");

	ABP_DropPod_Base_C_ExecuteUbergraph_BP_DropPod_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
