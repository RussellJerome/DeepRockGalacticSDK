// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_TabPlayerListEntry_InteractableV2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.SetPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerListEntry_InteractableV2_C::SetPlayer(class AFSDPlayerState** State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.SetPlayer");

	UHUD_TabPlayerListEntry_InteractableV2_C_SetPlayer_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.OnPlayerSet
// (BlueprintCallable, BlueprintEvent)

void UHUD_TabPlayerListEntry_InteractableV2_C::OnPlayerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.OnPlayerSet");

	UHUD_TabPlayerListEntry_InteractableV2_C_OnPlayerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.OnPlayerCharacterSpawned_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerListEntry_InteractableV2_C::OnPlayerCharacterSpawned_Event(class APlayerCharacter** PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.OnPlayerCharacterSpawned_Event");

	UHUD_TabPlayerListEntry_InteractableV2_C_OnPlayerCharacterSpawned_Event_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.Update Mute Button
// (BlueprintCallable, BlueprintEvent)

void UHUD_TabPlayerListEntry_InteractableV2_C::Update_Mute_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.Update Mute Button");

	UHUD_TabPlayerListEntry_InteractableV2_C_Update_Mute_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerListEntry_InteractableV2_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.PreConstruct");

	UHUD_TabPlayerListEntry_InteractableV2_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHUD_TabPlayerListEntry_InteractableV2_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UHUD_TabPlayerListEntry_InteractableV2_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHUD_TabPlayerListEntry_InteractableV2_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UHUD_TabPlayerListEntry_InteractableV2_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.CheckHover
// (BlueprintCallable, BlueprintEvent)

void UHUD_TabPlayerListEntry_InteractableV2_C::CheckHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.CheckHover");

	UHUD_TabPlayerListEntry_InteractableV2_C_CheckHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.BndEvt__BTN_mute_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBasic_ButtonCutCorner_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_TabPlayerListEntry_InteractableV2_C::BndEvt__BTN_mute_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.BndEvt__BTN_mute_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UHUD_TabPlayerListEntry_InteractableV2_C_BndEvt__BTN_mute_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.BndEvt__BTN_unmute_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBasic_ButtonCutCorner_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_TabPlayerListEntry_InteractableV2_C::BndEvt__BTN_unmute_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.BndEvt__BTN_unmute_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UHUD_TabPlayerListEntry_InteractableV2_C_BndEvt__BTN_unmute_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.BndEvt__BTN_Gamercard_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBasic_ButtonCutCorner_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_TabPlayerListEntry_InteractableV2_C::BndEvt__BTN_Gamercard_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.BndEvt__BTN_Gamercard_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UHUD_TabPlayerListEntry_InteractableV2_C_BndEvt__BTN_Gamercard_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBasic_ButtonCutCorner_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_TabPlayerListEntry_InteractableV2_C::BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	UHUD_TabPlayerListEntry_InteractableV2_C_BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.BndEvt__BTN_Respawn_Spacerig_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBasic_ButtonCutCorner_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_TabPlayerListEntry_InteractableV2_C::BndEvt__BTN_Respawn_Spacerig_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.BndEvt__BTN_Respawn_Spacerig_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");

	UHUD_TabPlayerListEntry_InteractableV2_C_BndEvt__BTN_Respawn_Spacerig_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.OnFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_TabPlayerListEntry_InteractableV2_C::OnFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.OnFinished");

	UHUD_TabPlayerListEntry_InteractableV2_C_OnFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.ExecuteUbergraph_HUD_TabPlayerListEntry_InteractableV2
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerListEntry_InteractableV2_C::ExecuteUbergraph_HUD_TabPlayerListEntry_InteractableV2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C.ExecuteUbergraph_HUD_TabPlayerListEntry_InteractableV2");

	UHUD_TabPlayerListEntry_InteractableV2_C_ExecuteUbergraph_HUD_TabPlayerListEntry_InteractableV2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
