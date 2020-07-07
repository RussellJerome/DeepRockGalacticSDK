// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SentryGun_Moveable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetStateDescription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   Description                    (Parm, OutParm)

void ABP_SentryGun_Moveable_C::GetStateDescription(struct FText* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetStateDescription");

	ABP_SentryGun_Moveable_C_GetStateDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Description != nullptr)
		*Description = params.Description;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.SpawnAudioOnPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase**             Audio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_Moveable_C::SpawnAudioOnPlayer(class USoundBase** Audio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.SpawnAudioOnPlayer");

	ABP_SentryGun_Moveable_C_SpawnAudioOnPlayer_Params params;
	params.Audio = Audio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGunClass
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ABP_SentryGun_Moveable_C::GetSentryGunClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGunClass");

	ABP_SentryGun_Moveable_C_GetSentryGunClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryOwner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerCharacter*        AsPlayer_Character             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_Moveable_C::GetSentryOwner(class APlayerCharacter** AsPlayer_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryOwner");

	ABP_SentryGun_Moveable_C_GetSentryOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsPlayer_Character != nullptr)
		*AsPlayer_Character = params.AsPlayer_Character;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGun
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASentryGun*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASentryGun* ABP_SentryGun_Moveable_C::GetSentryGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGun");

	ABP_SentryGun_Moveable_C_GetSentryGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_Moveable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveBeginPlay");

	ABP_SentryGun_Moveable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveRequested
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_Moveable_C::OnMoveRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveRequested");

	ABP_SentryGun_Moveable_C_OnMoveRequested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnStateChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARedeployableSentryGun** Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ERedeployableSentryGunState*   NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_Moveable_C::OnStateChanged_Event(class ARedeployableSentryGun** Sender, ERedeployableSentryGunState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnStateChanged_Event");

	ABP_SentryGun_Moveable_C_OnStateChanged_Event_Params params;
	params.Sender = Sender;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnSentryReady
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASentryGun**             SentryGun                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerCharacter**       PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_Moveable_C::ReceiveOnSentryReady(class ASentryGun** SentryGun, class APlayerCharacter** PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnSentryReady");

	ABP_SentryGun_Moveable_C_ReceiveOnSentryReady_Params params;
	params.SentryGun = SentryGun;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnAmmoCountChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AmmoCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Change                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_Moveable_C::OnAmmoCountChanged_Event_1(int* AmmoCount, int* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnAmmoCountChanged_Event_1");

	ABP_SentryGun_Moveable_C_OnAmmoCountChanged_Event_1_Params params;
	params.AmmoCount = AmmoCount;
	params.Change = Change;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReadyToBuild
// (BlueprintCallable, BlueprintEvent)

void ABP_SentryGun_Moveable_C::AudioReadyToBuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReadyToBuild");

	ABP_SentryGun_Moveable_C_AudioReadyToBuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoving
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_Moveable_C::OnMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoving");

	ABP_SentryGun_Moveable_C_OnMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          returnedHome                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_Moveable_C::OnMoveFinished(bool* returnedHome)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveFinished");

	ABP_SentryGun_Moveable_C_OnMoveFinished_Params params;
	params.returnedHome = returnedHome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioBeginMove
// (BlueprintCallable, BlueprintEvent)

void ABP_SentryGun_Moveable_C::AudioBeginMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioBeginMove");

	ABP_SentryGun_Moveable_C_AudioBeginMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioMoveFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_SentryGun_Moveable_C::AudioMoveFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioMoveFinished");

	ABP_SentryGun_Moveable_C_AudioMoveFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReturnedHome
// (BlueprintCallable, BlueprintEvent)

void ABP_SentryGun_Moveable_C::AudioReturnedHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReturnedHome");

	ABP_SentryGun_Moveable_C_AudioReturnedHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnStateChanged
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_Moveable_C::ReceiveOnStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnStateChanged");

	ABP_SentryGun_Moveable_C_ReceiveOnStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.Update Outline And Icon
// (BlueprintCallable, BlueprintEvent)

void ABP_SentryGun_Moveable_C::Update_Outline_And_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.Update Outline And Icon");

	ABP_SentryGun_Moveable_C_Update_Outline_And_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSentryStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARedeployableSentryGun** Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ERedeployableSentryGunState*   NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_Moveable_C::OnSentryStateChanged(class ARedeployableSentryGun** Sender, ERedeployableSentryGunState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSentryStateChanged");

	ABP_SentryGun_Moveable_C_OnSentryStateChanged_Params params;
	params.Sender = Sender;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnToggleOutline_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_Moveable_C::OnToggleOutline_Event(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnToggleOutline_Event");

	ABP_SentryGun_Moveable_C_OnToggleOutline_Event_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnItemEquipped_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_Moveable_C::OnItemEquipped_Event(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnItemEquipped_Event");

	ABP_SentryGun_Moveable_C_OnItemEquipped_Event_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSelectedItemChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARecallableSentryGun**   SentryGun                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_Moveable_C::OnSelectedItemChanged(class ARecallableSentryGun** SentryGun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSelectedItemChanged");

	ABP_SentryGun_Moveable_C_OnSelectedItemChanged_Params params;
	params.SentryGun = SentryGun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ExecuteUbergraph_BP_SentryGun_Moveable
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_Moveable_C::ExecuteUbergraph_BP_SentryGun_Moveable(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ExecuteUbergraph_BP_SentryGun_Moveable");

	ABP_SentryGun_Moveable_C_ExecuteUbergraph_BP_SentryGun_Moveable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
