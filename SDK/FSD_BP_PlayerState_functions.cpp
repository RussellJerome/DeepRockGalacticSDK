// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PlayerState_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerState.BP_PlayerState_C.GetDeepDiveCreditsReward
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           StagesCompleted                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           goldCollected                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FCreditsReward>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FCreditsReward> ABP_PlayerState_C::GetDeepDiveCreditsReward(int* StagesCompleted, int* goldCollected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.GetDeepDiveCreditsReward");

	ABP_PlayerState_C_GetDeepDiveCreditsReward_Params params;
	params.StagesCompleted = StagesCompleted;
	params.goldCollected = goldCollected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerState.BP_PlayerState_C.GetXPRewardDeepDive
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           StagesCompleted                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FXPReward>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FXPReward> ABP_PlayerState_C::GetXPRewardDeepDive(int* StagesCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.GetXPRewardDeepDive");

	ABP_PlayerState_C_GetXPRewardDeepDive_Params params;
	params.StagesCompleted = StagesCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerState.BP_PlayerState_C.GetRessupyBeaconClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  PodSpawnClass                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::GetRessupyBeaconClass(class UClass** PodSpawnClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.GetRessupyBeaconClass");

	ABP_PlayerState_C_GetRessupyBeaconClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PodSpawnClass != nullptr)
		*PodSpawnClass = params.PodSpawnClass;
}


// Function BP_PlayerState.BP_PlayerState_C.GetRessuplySpawnClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  PodSpawnClass                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::GetRessuplySpawnClass(class UClass** PodSpawnClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.GetRessuplySpawnClass");

	ABP_PlayerState_C_GetRessuplySpawnClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PodSpawnClass != nullptr)
		*PodSpawnClass = params.PodSpawnClass;
}


// Function BP_PlayerState.BP_PlayerState_C.SpawnPlayerInPod
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerController**   Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::SpawnPlayerInPod(class AFSDPlayerController** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.SpawnPlayerInPod");

	ABP_PlayerState_C_SpawnPlayerInPod_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.SpawnPlayerDirectly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::SpawnPlayerDirectly(class AController** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.SpawnPlayerDirectly");

	ABP_PlayerState_C_SpawnPlayerDirectly_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.GetXPRewardsCustom
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<class UResourceData*, float>* Resources                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           EnemiesKilled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FailPrimaryObjectiveCompleted  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FailSecondaryObjectiveCompleted (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FXPReward>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FXPReward> ABP_PlayerState_C::GetXPRewardsCustom(TMap<class UResourceData*, float>* Resources, int* EnemiesKilled, bool* FailPrimaryObjectiveCompleted, bool* FailSecondaryObjectiveCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.GetXPRewardsCustom");

	ABP_PlayerState_C_GetXPRewardsCustom_Params params;
	params.Resources = Resources;
	params.EnemiesKilled = EnemiesKilled;
	params.FailPrimaryObjectiveCompleted = FailPrimaryObjectiveCompleted;
	params.FailSecondaryObjectiveCompleted = FailSecondaryObjectiveCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerState.BP_PlayerState_C.OnLoaded_E2B28351414D5B2A20966496F0955946
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::OnLoaded_E2B28351414D5B2A20966496F0955946(class UClass** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.OnLoaded_E2B28351414D5B2A20966496F0955946");

	ABP_PlayerState_C_OnLoaded_E2B28351414D5B2A20966496F0955946_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.OnLoaded_97A4F0694E71C770F24EA6A654B14857
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::OnLoaded_97A4F0694E71C770F24EA6A654B14857(class UClass** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.OnLoaded_97A4F0694E71C770F24EA6A654B14857");

	ABP_PlayerState_C_OnLoaded_97A4F0694E71C770F24EA6A654B14857_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.OnLateJoinFinished
// (Event, Public, BlueprintEvent)

void ABP_PlayerState_C::OnLateJoinFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.OnLateJoinFinished");

	ABP_PlayerState_C_OnLateJoinFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.ReceiveBeginPlay");

	ABP_PlayerState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.LogState
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_C::LogState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.LogState");

	ABP_PlayerState_C_LogState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.CharacterSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_C::CharacterSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.CharacterSelected");

	ABP_PlayerState_C_CharacterSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.TestLatjoin
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_C::TestLatjoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.TestLatjoin");

	ABP_PlayerState_C_TestLatjoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.RespawnPlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_C::RespawnPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.RespawnPlayer");

	ABP_PlayerState_C_RespawnPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.ExecuteUbergraph_BP_PlayerState
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::ExecuteUbergraph_BP_PlayerState(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.ExecuteUbergraph_BP_PlayerState");

	ABP_PlayerState_C_ExecuteUbergraph_BP_PlayerState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
