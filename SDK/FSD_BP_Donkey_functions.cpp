// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Donkey_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Donkey.BP_Donkey_C.HandlePhotosensitivity
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Donkey_C::HandlePhotosensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.HandlePhotosensitivity");

	ABP_Donkey_C_HandlePhotosensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.OnRep_IsTrayOpen
// (BlueprintCallable, BlueprintEvent)

void ABP_Donkey_C::OnRep_IsTrayOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.OnRep_IsTrayOpen");

	ABP_Donkey_C_OnRep_IsTrayOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.SetGotoDropShip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Pos                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Donkey_C::SetGotoDropShip(struct FVector* Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.SetGotoDropShip");

	ABP_Donkey_C_SetGotoDropShip_Params params;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.SetControlledByDropShip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Control                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Donkey_C::SetControlledByDropShip(bool* Control)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.SetControlledByDropShip");

	ABP_Donkey_C_SetControlledByDropShip_Params params;
	params.Control = Control;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.SetDestination
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Donkey_C::SetDestination(struct FVector* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.SetDestination");

	ABP_Donkey_C_SetDestination_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Donkey_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.UserConstructionScript");

	ABP_Donkey_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Donkey_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.ReceiveBeginPlay");

	ABP_Donkey_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.OnDonkeyCalled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Donkey_C::OnDonkeyCalled(struct FVector* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.OnDonkeyCalled");

	ABP_Donkey_C_OnDonkeyCalled_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.SetDonkeyPos
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Pos                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Donkey_C::SetDonkeyPos(struct FVector* Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.SetDonkeyPos");

	ABP_Donkey_C_SetDonkeyPos_Params params;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.On Goto Dropship
// (BlueprintCallable, BlueprintEvent)

void ABP_Donkey_C::On_Goto_Dropship()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.On Goto Dropship");

	ABP_Donkey_C_On_Goto_Dropship_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Donkey_C::BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Donkey_C_BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_Donkey.BP_Donkey_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Donkey_C::BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Donkey_C_BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Donkey_C::BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature");

	ABP_Donkey_C_BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Donkey_C::BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool* canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");

	ABP_Donkey_C_BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params params;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.SpawnBreadCrumb
// (BlueprintCallable, BlueprintEvent)

void ABP_Donkey_C::SpawnBreadCrumb()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.SpawnBreadCrumb");

	ABP_Donkey_C_SpawnBreadCrumb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature
// (BlueprintEvent)

void ABP_Donkey_C::BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature");

	ABP_Donkey_C_BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature
// (BlueprintEvent)

void ABP_Donkey_C::BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature");

	ABP_Donkey_C_BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Donkey_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Donkey_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_Donkey.BP_Donkey_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Donkey_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Donkey_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.Update Button State
// (BlueprintCallable, BlueprintEvent)

void ABP_Donkey_C::Update_Button_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.Update Button State");

	ABP_Donkey_C_Update_Button_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Donkey_C::BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature");

	ABP_Donkey_C_BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.EnableButton
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Donkey_C::EnableButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.EnableButton");

	ABP_Donkey_C_EnableButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.ExecuteUbergraph_BP_Donkey
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Donkey_C::ExecuteUbergraph_BP_Donkey(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.ExecuteUbergraph_BP_Donkey");

	ABP_Donkey_C_ExecuteUbergraph_BP_Donkey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.PlayerOverlapsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           OverlapCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Donkey_C::PlayerOverlapsChanged__DelegateSignature(int* OverlapCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.PlayerOverlapsChanged__DelegateSignature");

	ABP_Donkey_C_PlayerOverlapsChanged__DelegateSignature_Params params;
	params.OverlapCount = OverlapCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Donkey.BP_Donkey_C.OnReachedDropship__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Donkey_C::OnReachedDropship__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.OnReachedDropship__DelegateSignature");

	ABP_Donkey_C_OnReachedDropship__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
