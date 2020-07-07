// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SpaceRig_GamemOde_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.PlayerCanRestart
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SpaceRig_Gamemode_C::PlayerCanRestart(class APlayerController** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.PlayerCanRestart");

	ABP_SpaceRig_Gamemode_C_PlayerCanRestart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SendMissionStartAnalytics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Gamemode_C::SendMissionStartAnalytics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SendMissionStartAnalytics");

	ABP_SpaceRig_Gamemode_C_SendMissionStartAnalytics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FindOwnedCabin
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_CabinController_C*   Cabin                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::FindOwnedCabin(class AController** Player, class ABP_CabinController_C** Cabin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FindOwnedCabin");

	ABP_SpaceRig_Gamemode_C_FindOwnedCabin_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cabin != nullptr)
		*Cabin = params.Cabin;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FreeCabin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_SpaceRig_C** Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::FreeCabin(class ABP_PlayerController_SpaceRig_C** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FreeCabin");

	ABP_SpaceRig_Gamemode_C_FreeCabin_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.AssignCabin
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_CabinController_C*   Cabin                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::AssignCabin(class AController** Player, class ABP_CabinController_C** Cabin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.AssignCabin");

	ABP_SpaceRig_Gamemode_C_AssignCabin_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cabin != nullptr)
		*Cabin = params.Cabin;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FindCabins
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Gamemode_C::FindCabins()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FindCabins");

	ABP_SpaceRig_Gamemode_C_FindCabins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SelectRandomAvailableClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::SelectRandomAvailableClass(class AFSDPlayerState** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SelectRandomAvailableClass");

	ABP_SpaceRig_Gamemode_C_SelectRandomAvailableClass_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ChoosePlayerStart
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ABP_SpaceRig_Gamemode_C::ChoosePlayerStart(class AController** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ChoosePlayerStart");

	ABP_SpaceRig_Gamemode_C_ChoosePlayerStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetGameState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_GameState_SpaceRig_C* GameState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::GetGameState(class ABP_GameState_SpaceRig_C** GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetGameState");

	ABP_SpaceRig_Gamemode_C_GetGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameState != nullptr)
		*GameState = params.GameState;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetDefaultPawnClassForController
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            InController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ABP_SpaceRig_Gamemode_C::GetDefaultPawnClassForController(class AController** InController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetDefaultPawnClassForController");

	ABP_SpaceRig_Gamemode_C_GetDefaultPawnClassForController_Params params;
	params.InController = InController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55
// (BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Gamemode_C::OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55");

	ABP_SpaceRig_Gamemode_C_OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55
// (BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Gamemode_C::OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55");

	ABP_SpaceRig_Gamemode_C_OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpaceRig_Gamemode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ReceiveBeginPlay");

	ABP_SpaceRig_Gamemode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnCountdownComplete
// (BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Gamemode_C::OnCountdownComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnCountdownComplete");

	ABP_SpaceRig_Gamemode_C_OnCountdownComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            ExitingController              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::K2_OnLogout(class AController** ExitingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnLogout");

	ABP_SpaceRig_Gamemode_C_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnRestartPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::K2_OnRestartPlayer(class AController** NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnRestartPlayer");

	ABP_SpaceRig_Gamemode_C_K2_OnRestartPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ControllerReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerController**   Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::ControllerReady(class AFSDPlayerController** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ControllerReady");

	ABP_SpaceRig_Gamemode_C_ControllerReady_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.InstantlyStartMission
// (BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Gamemode_C::InstantlyStartMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.InstantlyStartMission");

	ABP_SpaceRig_Gamemode_C_InstantlyStartMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ExecuteUbergraph_BP_SpaceRig_Gamemode
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::ExecuteUbergraph_BP_SpaceRig_Gamemode(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ExecuteUbergraph_BP_SpaceRig_Gamemode");

	ABP_SpaceRig_Gamemode_C_ExecuteUbergraph_BP_SpaceRig_Gamemode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
