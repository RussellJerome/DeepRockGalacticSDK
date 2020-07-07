// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_SentryGunWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.IsOutOfAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutOfAmmo                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunWidget_C::IsOutOfAmmo(bool* OutOfAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.IsOutOfAmmo");

	UHUD_SentryGunWidget_C_IsOutOfAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOfAmmo != nullptr)
		*OutOfAmmo = params.OutOfAmmo;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.GetMovementState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ERecallableActorState          State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunWidget_C::GetMovementState(ERecallableActorState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.GetMovementState");

	UHUD_SentryGunWidget_C_GetMovementState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARecallableSentryGun**   Sentry_Gun                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunWidget_C::Set_Sentry(class ARecallableSentryGun** Sentry_Gun)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry");

	UHUD_SentryGunWidget_C_Set_Sentry_Params params;
	params.Sentry_Gun = Sentry_Gun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry Home
// (BlueprintCallable, BlueprintEvent)

void UHUD_SentryGunWidget_C::Set_Sentry_Home()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry Home");

	UHUD_SentryGunWidget_C_Set_Sentry_Home_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.On Ammo Count Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AmmoCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Change                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunWidget_C::On_Ammo_Count_Changed(int* AmmoCount, int* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.On Ammo Count Changed");

	UHUD_SentryGunWidget_C_On_Ammo_Count_Changed_Params params;
	params.AmmoCount = AmmoCount;
	params.Change = Change;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ARecallableSentryGunItem** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunWidget_C::Init(class UInventoryComponent** Inventory, class ARecallableSentryGunItem** Item, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Init");

	UHUD_SentryGunWidget_C_Init_Params params;
	params.Inventory = Inventory;
	params.Item = Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnActiveItemsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARecallableSentryGunItem** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunWidget_C::OnActiveItemsChanged(class ARecallableSentryGunItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnActiveItemsChanged");

	UHUD_SentryGunWidget_C_OnActiveItemsChanged_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARecallableActor**       Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ERecallableActorState*         State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunWidget_C::OnStateChanged(class ARecallableActor** Sender, ERecallableActorState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnStateChanged");

	UHUD_SentryGunWidget_C_OnStateChanged_Params params;
	params.Sender = Sender;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Update State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UHUD_SentryGunWidget_C::Update_State(class FString* reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Update State");

	UHUD_SentryGunWidget_C_Update_State_Params params;
	params.reason = reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.PreConstruct");

	UHUD_SentryGunWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnSelectedItemChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARecallableSentryGun**   SentryGun                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunWidget_C::OnSelectedItemChanged(class ARecallableSentryGun** SentryGun)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnSelectedItemChanged");

	UHUD_SentryGunWidget_C_OnSelectedItemChanged_Params params;
	params.SentryGun = SentryGun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Selected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunWidget_C::Set_Selected(bool* Is_Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Selected");

	UHUD_SentryGunWidget_C_Set_Selected_Params params;
	params.Is_Selected = Is_Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnItemEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunWidget_C::OnItemEquipped(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnItemEquipped");

	UHUD_SentryGunWidget_C_OnItemEquipped_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnGunStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARedeployableSentryGun** Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ERedeployableSentryGunState*   NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunWidget_C::OnGunStateChanged(class ARedeployableSentryGun** Sender, ERedeployableSentryGunState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnGunStateChanged");

	UHUD_SentryGunWidget_C_OnGunStateChanged_Params params;
	params.Sender = Sender;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Check For Ammo Depletion
// (BlueprintCallable, BlueprintEvent)

void UHUD_SentryGunWidget_C::Check_For_Ammo_Depletion()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Check For Ammo Depletion");

	UHUD_SentryGunWidget_C_Check_For_Ammo_Depletion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnDeployProgress_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunWidget_C::OnDeployProgress_Event(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnDeployProgress_Event");

	UHUD_SentryGunWidget_C_OnDeployProgress_Event_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_SentryGunWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Construct");

	UHUD_SentryGunWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnAmmoDepletedFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_SentryGunWidget_C::OnAmmoDepletedFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnAmmoDepletedFinished");

	UHUD_SentryGunWidget_C_OnAmmoDepletedFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnItemUnequipped_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunWidget_C::OnItemUnequipped_Event(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnItemUnequipped_Event");

	UHUD_SentryGunWidget_C_OnItemUnequipped_Event_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.ExecuteUbergraph_HUD_SentryGunWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunWidget_C::ExecuteUbergraph_HUD_SentryGunWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.ExecuteUbergraph_HUD_SentryGunWidget");

	UHUD_SentryGunWidget_C_ExecuteUbergraph_HUD_SentryGunWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnSentryStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHUD_SentryGunWidget_C::OnSentryStateChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnSentryStateChanged__DelegateSignature");

	UHUD_SentryGunWidget_C_OnSentryStateChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
