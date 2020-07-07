// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_NetworkPlayerController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Mixer Enemy Spawn Event
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           Cooldown                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TSoftObjectPtr<class UClass>*  Enemy_Type_To_Spawn            (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Amount_To_Spawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 MixerUser                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText*                  FormatableAnnounceText         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NetworkPlayerController_C::Mixer_Enemy_Spawn_Event(class FString* EventName, int* Cooldown, TSoftObjectPtr<class UClass>* Enemy_Type_To_Spawn, int* Amount_To_Spawn, class FString* MixerUser, struct FText* FormatableAnnounceText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Mixer Enemy Spawn Event");

	ABP_NetworkPlayerController_C_Mixer_Enemy_Spawn_Event_Params params;
	params.EventName = EventName;
	params.Cooldown = Cooldown;
	params.Enemy_Type_To_Spawn = Enemy_Type_To_Spawn;
	params.Amount_To_Spawn = Amount_To_Spawn;
	params.MixerUser = MixerUser;
	params.FormatableAnnounceText = FormatableAnnounceText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CollapseAndRemoveFromParent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_NetworkPlayerController_C::CollapseAndRemoveFromParent(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CollapseAndRemoveFromParent");

	ABP_NetworkPlayerController_C_CollapseAndRemoveFromParent_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.GetLoaderScreenUIClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ABP_NetworkPlayerController_C::GetLoaderScreenUIClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.GetLoaderScreenUIClass");

	ABP_NetworkPlayerController_C_GetLoaderScreenUIClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CleanupUI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_NetworkPlayerController_C::CleanupUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CleanupUI");

	ABP_NetworkPlayerController_C_CleanupUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CalcMixerName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ParticipantID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, OutParm, ZeroConstructor)

void ABP_NetworkPlayerController_C::CalcMixerName(int* ParticipantID, class FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CalcMixerName");

	ABP_NetworkPlayerController_C_CalcMixerName_Params params;
	params.ParticipantID = ParticipantID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.GetNonTakenHero
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  SelectedClass                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NetworkPlayerController_C::GetNonTakenHero(class UClass** SelectedClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.GetNonTakenHero");

	ABP_NetworkPlayerController_C_GetNonTakenHero_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedClass != nullptr)
		*SelectedClass = params.SelectedClass;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_giveHealth_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NetworkPlayerController_C::MixerButtonEvt_giveHealth_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_giveHealth_Pressed_ID0");

	ABP_NetworkPlayerController_C_MixerButtonEvt_giveHealth_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnDreadnought_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NetworkPlayerController_C::MixerButtonEvt_spawnDreadnought_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnDreadnought_Pressed_ID0");

	ABP_NetworkPlayerController_C_MixerButtonEvt_spawnDreadnought_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawn3Praetorians_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NetworkPlayerController_C::MixerButtonEvt_spawn3Praetorians_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawn3Praetorians_Pressed_ID0");

	ABP_NetworkPlayerController_C_MixerButtonEvt_spawn3Praetorians_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_giveNitra_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NetworkPlayerController_C::MixerButtonEvt_giveNitra_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_giveNitra_Pressed_ID0");

	ABP_NetworkPlayerController_C_MixerButtonEvt_giveNitra_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_giveAmmo_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NetworkPlayerController_C::MixerButtonEvt_giveAmmo_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_giveAmmo_Pressed_ID0");

	ABP_NetworkPlayerController_C_MixerButtonEvt_giveAmmo_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnLootBug_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NetworkPlayerController_C::MixerButtonEvt_spawnLootBug_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnLootBug_Pressed_ID0");

	ABP_NetworkPlayerController_C_MixerButtonEvt_spawnLootBug_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnAGrunt_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NetworkPlayerController_C::MixerButtonEvt_spawnAGrunt_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnAGrunt_Pressed_ID0");

	ABP_NetworkPlayerController_C_MixerButtonEvt_spawnAGrunt_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnMSpawn_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NetworkPlayerController_C::MixerButtonEvt_spawnMSpawn_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnMSpawn_Pressed_ID0");

	ABP_NetworkPlayerController_C_MixerButtonEvt_spawnMSpawn_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnMBomber_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NetworkPlayerController_C::MixerButtonEvt_spawnMBomber_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnMBomber_Pressed_ID0");

	ABP_NetworkPlayerController_C_MixerButtonEvt_spawnMBomber_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnMGrabber_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NetworkPlayerController_C::MixerButtonEvt_spawnMGrabber_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnMGrabber_Pressed_ID0");

	ABP_NetworkPlayerController_C_MixerButtonEvt_spawnMGrabber_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnAcidSpitter_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NetworkPlayerController_C::MixerButtonEvt_spawnAcidSpitter_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnAcidSpitter_Pressed_ID0");

	ABP_NetworkPlayerController_C_MixerButtonEvt_spawnAcidSpitter_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnWebSpitter_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NetworkPlayerController_C::MixerButtonEvt_spawnWebSpitter_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnWebSpitter_Pressed_ID0");

	ABP_NetworkPlayerController_C_MixerButtonEvt_spawnWebSpitter_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnShellback_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NetworkPlayerController_C::MixerButtonEvt_spawnShellback_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnShellback_Pressed_ID0");

	ABP_NetworkPlayerController_C_MixerButtonEvt_spawnShellback_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NetworkPlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ReceiveBeginPlay");

	ABP_NetworkPlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnBack
// (BlueprintCallable, BlueprintEvent)

void ABP_NetworkPlayerController_C::OnBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnBack");

	ABP_NetworkPlayerController_C_OnBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnPlayerCharacterPossesed_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_NetworkPlayerController_C::OnPlayerCharacterPossesed_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnPlayerCharacterPossesed_Event");

	ABP_NetworkPlayerController_C_OnPlayerCharacterPossesed_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_RequestNonTakenHero
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_NetworkPlayerController_C::Server_RequestNonTakenHero()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_RequestNonTakenHero");

	ABP_NetworkPlayerController_C_Server_RequestNonTakenHero_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Client_RecieveNonTakenHero
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 New_Character                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NetworkPlayerController_C::Client_RecieveNonTakenHero(class UClass** New_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Client_RecieveNonTakenHero");

	ABP_NetworkPlayerController_C_Client_RecieveNonTakenHero_Params params;
	params.New_Character = New_Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_Mixer_GiveHealth
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_NetworkPlayerController_C::Server_Mixer_GiveHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_Mixer_GiveHealth");

	ABP_NetworkPlayerController_C_Server_Mixer_GiveHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_SetCharacterSelected
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_NetworkPlayerController_C::Server_SetCharacterSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_SetCharacterSelected");

	ABP_NetworkPlayerController_C_Server_SetCharacterSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ResupplyServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_NetworkPlayerController_C::ResupplyServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ResupplyServer");

	ABP_NetworkPlayerController_C_ResupplyServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.RecievePreClientTravel
// (Event, Protected, BlueprintEvent)

void ABP_NetworkPlayerController_C::RecievePreClientTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.RecievePreClientTravel");

	ABP_NetworkPlayerController_C_RecievePreClientTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Set Mixer Button CoolDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           Cooldown                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NetworkPlayerController_C::Set_Mixer_Button_CoolDown(class FString* EventName, int* Cooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Set Mixer Button CoolDown");

	ABP_NetworkPlayerController_C_Set_Mixer_Button_CoolDown_Params params;
	params.EventName = EventName;
	params.Cooldown = Cooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_NetworkPlayerController_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ReceiveDestroyed");

	ABP_NetworkPlayerController_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ShowReconnect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NetworkPlayerController_C::ShowReconnect(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ShowReconnect");

	ABP_NetworkPlayerController_C_ShowReconnect_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ExecuteUbergraph_BP_NetworkPlayerController
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NetworkPlayerController_C::ExecuteUbergraph_BP_NetworkPlayerController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ExecuteUbergraph_BP_NetworkPlayerController");

	ABP_NetworkPlayerController_C_ExecuteUbergraph_BP_NetworkPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
