// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_GameMode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GameMode.BP_GameMode_C.TryPreloadCheatMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GameMode_C::TryPreloadCheatMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.TryPreloadCheatMenu");

	ABP_GameMode_C_TryPreloadCheatMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.GetEscapepodLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              Location                       (Parm, OutParm, IsPlainOldData)

void ABP_GameMode_C::GetEscapepodLocation(struct FTransform* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.GetEscapepodLocation");

	ABP_GameMode_C_GetEscapepodLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_GameMode.BP_GameMode_C.EnableMuleButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GameMode_C::EnableMuleButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.EnableMuleButton");

	ABP_GameMode_C_EnableMuleButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.DestroyNetworkedActors
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GameMode_C::DestroyNetworkedActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.DestroyNetworkedActors");

	ABP_GameMode_C_DestroyNetworkedActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.LoadToMission
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionTemplate**       mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameMode_C::LoadToMission(class UMissionTemplate** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.LoadToMission");

	ABP_GameMode_C_LoadToMission_Params params;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.GetDefaultPawnClassForController
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            InController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ABP_GameMode_C::GetDefaultPawnClassForController(class AController** InController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.GetDefaultPawnClassForController");

	ABP_GameMode_C_GetDefaultPawnClassForController_Params params;
	params.InController = InController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameMode.BP_GameMode_C.SetDesiredDifficulty
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GameMode_C::SetDesiredDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.SetDesiredDifficulty");

	ABP_GameMode_C_SetDesiredDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.ChoosePlayerStart
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ABP_GameMode_C::ChoosePlayerStart(class AController** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.ChoosePlayerStart");

	ABP_GameMode_C_ChoosePlayerStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameMode.BP_GameMode_C.RecieveEndLevel
// (Event, Public, BlueprintEvent)

void ABP_GameMode_C::RecieveEndLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.RecieveEndLevel");

	ABP_GameMode_C_RecieveEndLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.ReceiveBeginPlay");

	ABP_GameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.WaitForGeneration
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_C::WaitForGeneration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.WaitForGeneration");

	ABP_GameMode_C_WaitForGeneration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.Recieve_ContinueTimerEnded
// (Event, Protected, BlueprintEvent)

void ABP_GameMode_C::Recieve_ContinueTimerEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.Recieve_ContinueTimerEnded");

	ABP_GameMode_C_Recieve_ContinueTimerEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.Call DropPod
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_C::Call_DropPod()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.Call DropPod");

	ABP_GameMode_C_Call_DropPod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.Trigger End Wave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          cancelAllWaves                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameMode_C::Trigger_End_Wave(bool* cancelAllWaves)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.Trigger End Wave");

	ABP_GameMode_C_Trigger_End_Wave_Params params;
	params.cancelAllWaves = cancelAllWaves;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.SpawnBosco
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_GameMode_C::SpawnBosco(struct FTransform* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.SpawnBosco");

	ABP_GameMode_C_SpawnBosco_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.RemoveBosco
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_C::RemoveBosco()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.RemoveBosco");

	ABP_GameMode_C_RemoveBosco_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.Handle Bosco Respawn
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_C::Handle_Bosco_Respawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.Handle Bosco Respawn");

	ABP_GameMode_C_Handle_Bosco_Respawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.OnPlayerLeave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameMode_C::OnPlayerLeave(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.OnPlayerLeave");

	ABP_GameMode_C_OnPlayerLeave_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.SpawnAtLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_GameMode_C::SpawnAtLocation(struct FTransform* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.SpawnAtLocation");

	ABP_GameMode_C_SpawnAtLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.Loaded
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_C::Loaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.Loaded");

	ABP_GameMode_C_Loaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.DonkeyButtonPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GameMode_C::DonkeyButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.DonkeyButtonPressed");

	ABP_GameMode_C_DonkeyButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.LoadSpaceRig
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GameMode_C::LoadSpaceRig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.LoadSpaceRig");

	ABP_GameMode_C_LoadSpaceRig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMode.BP_GameMode_C.ExecuteUbergraph_BP_GameMode
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameMode_C::ExecuteUbergraph_BP_GameMode(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.ExecuteUbergraph_BP_GameMode");

	ABP_GameMode_C_ExecuteUbergraph_BP_GameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
