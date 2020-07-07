// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_TeamDisplay_SmallItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.ShowDynamicHUD
// (BlueprintCallable, BlueprintEvent)

void UHUD_TeamDisplay_SmallItem_C::ShowDynamicHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.ShowDynamicHUD");

	UHUD_TeamDisplay_SmallItem_C_ShowDynamicHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnVisibilityModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHUDVisibilityGroup**    Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EHUDVisibilityMode*            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnVisibilityModeChanged(class UHUDVisibilityGroup** Group, EHUDVisibilityMode* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnVisibilityModeChanged");

	UHUD_TeamDisplay_SmallItem_C_OnVisibilityModeChanged_Params params;
	params.Group = Group;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerNameChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 NewName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UHUD_TeamDisplay_SmallItem_C::OnPlayerNameChanged(class FString* NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerNameChanged");

	UHUD_TeamDisplay_SmallItem_C_OnPlayerNameChanged_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerLeave_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnPlayerLeave_Event(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerLeave_Event");

	UHUD_TeamDisplay_SmallItem_C_OnPlayerLeave_Event_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerCharacterSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnPlayerCharacterSpawned(class APlayerCharacter** PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerCharacterSpawned");

	UHUD_TeamDisplay_SmallItem_C_OnPlayerCharacterSpawned_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.StopAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Anim                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::StopAnim(class UWidgetAnimation** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.StopAnim");

	UHUD_TeamDisplay_SmallItem_C_StopAnim_Params params;
	params.Anim = Anim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHealthComponentBase**   HealthComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnDeath(class UHealthComponentBase** HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDeath");

	UHUD_TeamDisplay_SmallItem_C_OnDeath_Params params;
	params.HealthComponent = HealthComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDamageTaken_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnDamageTaken_Event(float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDamageTaken_Event");

	UHUD_TeamDisplay_SmallItem_C_OnDamageTaken_Event_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnHealthChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnHealthChanged(float* Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnHealthChanged");

	UHUD_TeamDisplay_SmallItem_C_OnHealthChanged_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnCharacterStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterState*               NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnCharacterStateChanged(ECharacterState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnCharacterStateChanged");

	UHUD_TeamDisplay_SmallItem_C_OnCharacterStateChanged_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.PlayAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Anim                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::PlayAnim(class UWidgetAnimation** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.PlayAnim");

	UHUD_TeamDisplay_SmallItem_C_PlayAnim_Params params;
	params.Anim = Anim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnTalkingChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsTalking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnTalkingChanged(bool* IsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnTalkingChanged");

	UHUD_TeamDisplay_SmallItem_C_OnTalkingChanged_Params params;
	params.IsTalking = IsTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnOwningCharacterSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnOwningCharacterSpawned(class APlayerCharacter** PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnOwningCharacterSpawned");

	UHUD_TeamDisplay_SmallItem_C_OnOwningCharacterSpawned_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_TeamDisplay_SmallItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.Construct");

	UHUD_TeamDisplay_SmallItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnCharacterStateChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterState*               NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnCharacterStateChanged_Event(ECharacterState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnCharacterStateChanged_Event");

	UHUD_TeamDisplay_SmallItem_C_OnCharacterStateChanged_Event_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDownCameraTargetChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnDownCameraTargetChanged(class APlayerCharacter** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDownCameraTargetChanged");

	UHUD_TeamDisplay_SmallItem_C_OnDownCameraTargetChanged_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnLaserPointerReleased_Event
// (BlueprintCallable, BlueprintEvent)

void UHUD_TeamDisplay_SmallItem_C::OnLaserPointerReleased_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnLaserPointerReleased_Event");

	UHUD_TeamDisplay_SmallItem_C_OnLaserPointerReleased_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnLaserPointerPressed_Event
// (BlueprintCallable, BlueprintEvent)

void UHUD_TeamDisplay_SmallItem_C::OnLaserPointerPressed_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnLaserPointerPressed_Event");

	UHUD_TeamDisplay_SmallItem_C_OnLaserPointerPressed_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.Show Ammo Bar
// (BlueprintCallable, BlueprintEvent)

void UHUD_TeamDisplay_SmallItem_C::Show_Ammo_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.Show Ammo Bar");

	UHUD_TeamDisplay_SmallItem_C_Show_Ammo_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnEndHoveringEvent_Event
// (BlueprintCallable, BlueprintEvent)

void UHUD_TeamDisplay_SmallItem_C::OnEndHoveringEvent_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnEndHoveringEvent_Event");

	UHUD_TeamDisplay_SmallItem_C_OnEndHoveringEvent_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnBeginHoveringEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUsableComponentBase**   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnBeginHoveringEvent(class UUsableComponentBase** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnBeginHoveringEvent");

	UHUD_TeamDisplay_SmallItem_C_OnBeginHoveringEvent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.PreConstruct");

	UHUD_TeamDisplay_SmallItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnSupplyStatusChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ammoStatus01                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         healthStatus01                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnSupplyStatusChangedEvent(float* ammoStatus01, float* healthStatus01)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnSupplyStatusChangedEvent");

	UHUD_TeamDisplay_SmallItem_C_OnSupplyStatusChangedEvent_Params params;
	params.ammoStatus01 = ammoStatus01;
	params.healthStatus01 = healthStatus01;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.ExecuteUbergraph_HUD_TeamDisplay_SmallItem
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::ExecuteUbergraph_HUD_TeamDisplay_SmallItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.ExecuteUbergraph_HUD_TeamDisplay_SmallItem");

	UHUD_TeamDisplay_SmallItem_C_ExecuteUbergraph_HUD_TeamDisplay_SmallItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
