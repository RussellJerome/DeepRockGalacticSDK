// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DropPod_Escape_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.GetFrontLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 DoorLocation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Escape_Base_C::GetFrontLocation(struct FVector* DoorLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.GetFrontLocation");

	ABP_DropPod_Escape_Base_C_GetFrontLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoorLocation != nullptr)
		*DoorLocation = params.DoorLocation;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.IsAnyCharacterInEscapePod
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           EscapePodPopulated             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Escape_Base_C::IsAnyCharacterInEscapePod(bool* EscapePodPopulated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.IsAnyCharacterInEscapePod");

	ABP_DropPod_Escape_Base_C_IsAnyCharacterInEscapePod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EscapePodPopulated != nullptr)
		*EscapePodPopulated = params.EscapePodPopulated;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.LockCharactersInPod
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Escape_Base_C::LockCharactersInPod()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.LockCharactersInPod");

	ABP_DropPod_Escape_Base_C_LockCharactersInPod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Escape_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.UserConstructionScript");

	ABP_DropPod_Escape_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDroppodImpact
// (Event, Protected, BlueprintEvent)

void ABP_DropPod_Escape_Base_C::OnDroppodImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDroppodImpact");

	ABP_DropPod_Escape_Base_C_OnDroppodImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnAllDwavesInsidePod
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          AllInside                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Escape_Base_C::OnAllDwavesInsidePod(bool* AllInside)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnAllDwavesInsidePod");

	ABP_DropPod_Escape_Base_C_OnAllDwavesInsidePod_Params params;
	params.AllInside = AllInside;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_DropPod_Escape_Base_C::BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_DropPod_Escape_Base_C_BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Escape_Base_C::BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_DropPod_Escape_Base_C_BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDrillingStarted
// (Event, Protected, BlueprintEvent)

void ABP_DropPod_Escape_Base_C::OnDrillingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDrillingStarted");

	ABP_DropPod_Escape_Base_C_OnDrillingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DropPod_Escape_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ReceiveBeginPlay");

	ABP_DropPod_Escape_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDonkeyReachedDropShip
// (BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Escape_Base_C::OnDonkeyReachedDropShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDonkeyReachedDropShip");

	ABP_DropPod_Escape_Base_C_OnDonkeyReachedDropShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDeparting
// (Event, Protected, BlueprintEvent)

void ABP_DropPod_Escape_Base_C::OnDeparting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDeparting");

	ABP_DropPod_Escape_Base_C_OnDeparting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.RecieveReturnTimerExpired
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void ABP_DropPod_Escape_Base_C::RecieveReturnTimerExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.RecieveReturnTimerExpired");

	ABP_DropPod_Escape_Base_C_RecieveReturnTimerExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnPrepForTakeOff
// (Event, Protected, BlueprintEvent)

void ABP_DropPod_Escape_Base_C::OnPrepForTakeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnPrepForTakeOff");

	ABP_DropPod_Escape_Base_C_OnPrepForTakeOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnMuleLoaded
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Escape_Base_C::OnMuleLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnMuleLoaded");

	ABP_DropPod_Escape_Base_C_OnMuleLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnCharacterEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Escape_Base_C::OnCharacterEnter(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnCharacterEnter");

	ABP_DropPod_Escape_Base_C_OnCharacterEnter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnCharacterExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Escape_Base_C::OnCharacterExit(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnCharacterExit");

	ABP_DropPod_Escape_Base_C_OnCharacterExit_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.HandleHurryShouts
// (BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Escape_Base_C::HandleHurryShouts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.HandleHurryShouts");

	ABP_DropPod_Escape_Base_C_HandleHurryShouts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature
// (BlueprintEvent)

void ABP_DropPod_Escape_Base_C::BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature");

	ABP_DropPod_Escape_Base_C_BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature
// (BlueprintEvent)

void ABP_DropPod_Escape_Base_C::BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature");

	ABP_DropPod_Escape_Base_C_BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.RecieveReturnTimerFifteenSecondWarning
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void ABP_DropPod_Escape_Base_C::RecieveReturnTimerFifteenSecondWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.RecieveReturnTimerFifteenSecondWarning");

	ABP_DropPod_Escape_Base_C_RecieveReturnTimerFifteenSecondWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ForceTakeoff
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DropPod_Escape_Base_C::ForceTakeoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ForceTakeoff");

	ABP_DropPod_Escape_Base_C_ForceTakeoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Escape_Base_C::BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature");

	ABP_DropPod_Escape_Base_C_BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ExecuteUbergraph_BP_DropPod_Escape_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_Escape_Base_C::ExecuteUbergraph_BP_DropPod_Escape_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ExecuteUbergraph_BP_DropPod_Escape_Base");

	ABP_DropPod_Escape_Base_C_ExecuteUbergraph_BP_DropPod_Escape_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
