// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_PlayerInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.SetElementVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Name,_Class___Icon             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Health___Shield                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerInfo_C::SetElementVisibility(bool* Name,_Class___Icon, bool* Health___Shield)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.SetElementVisibility");

	UHUD_PlayerInfo_C_SetElementVisibility_Params params;
	params.Name,_Class___Icon = Name,_Class___Icon;
	params.Health___Shield = Health___Shield;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerInfo.HUD_PlayerInfo_C.ShowDynamically
// (BlueprintCallable, BlueprintEvent)

void UHUD_PlayerInfo_C::ShowDynamically()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.ShowDynamically");

	UHUD_PlayerInfo_C_ShowDynamically_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnCharacterStateChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterState*               NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerInfo_C::OnCharacterStateChanged_Event(ECharacterState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnCharacterStateChanged_Event");

	UHUD_PlayerInfo_C_OnCharacterStateChanged_Event_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnHealthChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerInfo_C::OnHealthChanged_Event(float* Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnHealthChanged_Event");

	UHUD_PlayerInfo_C_OnHealthChanged_Event_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnLaserPointerPressed_Event
// (BlueprintCallable, BlueprintEvent)

void UHUD_PlayerInfo_C::OnLaserPointerPressed_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnLaserPointerPressed_Event");

	UHUD_PlayerInfo_C_OnLaserPointerPressed_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnLaserPointerReleased_Event
// (BlueprintCallable, BlueprintEvent)

void UHUD_PlayerInfo_C::OnLaserPointerReleased_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnLaserPointerReleased_Event");

	UHUD_PlayerInfo_C_OnLaserPointerReleased_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerInfo.HUD_PlayerInfo_C.VisibilityModeChanged
// (BlueprintCallable, BlueprintEvent)

void UHUD_PlayerInfo_C::VisibilityModeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.VisibilityModeChanged");

	UHUD_PlayerInfo_C_VisibilityModeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerInfo.HUD_PlayerInfo_C.BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHUDVisibilityGroup**    Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerInfo_C::BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup** Group, bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature");

	UHUD_PlayerInfo_C_BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature_Params params;
	params.Group = Group;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerInfo.HUD_PlayerInfo_C.BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHUDVisibilityGroup**    Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerInfo_C::BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup** Group, bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature");

	UHUD_PlayerInfo_C_BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature_Params params;
	params.Group = Group;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnFirePressed_Event
// (BlueprintCallable, BlueprintEvent)

void UHUD_PlayerInfo_C::OnFirePressed_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnFirePressed_Event");

	UHUD_PlayerInfo_C_OnFirePressed_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnFireReleased_Event
// (BlueprintCallable, BlueprintEvent)

void UHUD_PlayerInfo_C::OnFireReleased_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnFireReleased_Event");

	UHUD_PlayerInfo_C_OnFireReleased_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnSupplyStatusChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ammoStatus01                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         healthStatus01                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerInfo_C::OnSupplyStatusChangedEvent(float* ammoStatus01, float* healthStatus01)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnSupplyStatusChangedEvent");

	UHUD_PlayerInfo_C_OnSupplyStatusChangedEvent_Params params;
	params.ammoStatus01 = ammoStatus01;
	params.healthStatus01 = healthStatus01;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerInfo.HUD_PlayerInfo_C.ShowAmmoCounter
// (BlueprintCallable, BlueprintEvent)

void UHUD_PlayerInfo_C::ShowAmmoCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.ShowAmmoCounter");

	UHUD_PlayerInfo_C_ShowAmmoCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnBeginHoveringEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUsableComponentBase**   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_PlayerInfo_C::OnBeginHoveringEvent(class UUsableComponentBase** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnBeginHoveringEvent");

	UHUD_PlayerInfo_C_OnBeginHoveringEvent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnEndHoveringEvent_Event
// (BlueprintCallable, BlueprintEvent)

void UHUD_PlayerInfo_C::OnEndHoveringEvent_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnEndHoveringEvent_Event");

	UHUD_PlayerInfo_C_OnEndHoveringEvent_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerInfo.HUD_PlayerInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerInfo_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.PreConstruct");

	UHUD_PlayerInfo_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerInfo.HUD_PlayerInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_PlayerInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.Construct");

	UHUD_PlayerInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerInfo.HUD_PlayerInfo_C.ExecuteUbergraph_HUD_PlayerInfo
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerInfo_C::ExecuteUbergraph_HUD_PlayerInfo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfo.HUD_PlayerInfo_C.ExecuteUbergraph_HUD_PlayerInfo");

	UHUD_PlayerInfo_C_ExecuteUbergraph_HUD_PlayerInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
