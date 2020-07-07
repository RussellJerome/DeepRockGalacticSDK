// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_GameState_SpaceRig_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.AreDeepDiveRequirementsMet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_GameState_SpaceRig_C::AreDeepDiveRequirementsMet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.AreDeepDiveRequirementsMet");

	ABP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.HandleActiveCountdown
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::HandleActiveCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.HandleActiveCountdown");

	ABP_GameState_SpaceRig_C_HandleActiveCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_HostCountdown
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::OnRep_HostCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_HostCountdown");

	ABP_GameState_SpaceRig_C_OnRep_HostCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_HostCountdownActive
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::OnRep_HostCountdownActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_HostCountdownActive");

	ABP_GameState_SpaceRig_C_OnRep_HostCountdownActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_MissionTimerActive
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::OnRep_MissionTimerActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_MissionTimerActive");

	ABP_GameState_SpaceRig_C_OnRep_MissionTimerActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_MissionCountdown
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::OnRep_MissionCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_MissionCountdown");

	ABP_GameState_SpaceRig_C_OnRep_MissionCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRefresh_3EF307534AC5AC56C0D60384C554CF10
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>* Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GameState_SpaceRig_C::OnRefresh_3EF307534AC5AC56C0D60384C554CF10(TArray<struct FBlueprintSessionResult>* Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRefresh_3EF307534AC5AC56C0D60384C554CF10");

	ABP_GameState_SpaceRig_C_OnRefresh_3EF307534AC5AC56C0D60384C554CF10_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnFailure_3EF307534AC5AC56C0D60384C554CF10
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>* Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GameState_SpaceRig_C::OnFailure_3EF307534AC5AC56C0D60384C554CF10(TArray<struct FBlueprintSessionResult>* Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnFailure_3EF307534AC5AC56C0D60384C554CF10");

	ABP_GameState_SpaceRig_C_OnFailure_3EF307534AC5AC56C0D60384C554CF10_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnSuccess_3EF307534AC5AC56C0D60384C554CF10
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>* Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GameState_SpaceRig_C::OnSuccess_3EF307534AC5AC56C0D60384C554CF10(TArray<struct FBlueprintSessionResult>* Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnSuccess_3EF307534AC5AC56C0D60384C554CF10");

	ABP_GameState_SpaceRig_C_OnSuccess_3EF307534AC5AC56C0D60384C554CF10_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameState_SpaceRig_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveTick");

	ABP_GameState_SpaceRig_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StartMissionTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::StartMissionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StartMissionTimer");

	ABP_GameState_SpaceRig_C_StartMissionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StopMissionTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::StopMissionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StopMissionTimer");

	ABP_GameState_SpaceRig_C_StopMissionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StartHostTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::StartHostTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StartHostTimer");

	ABP_GameState_SpaceRig_C_StartHostTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StopHostTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::StopHostTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StopHostTimer");

	ABP_GameState_SpaceRig_C_StopHostTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.CountDownCompleted
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::CountDownCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.CountDownCompleted");

	ABP_GameState_SpaceRig_C_CountDownCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GameState_SpaceRig_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveBeginPlay");

	ABP_GameState_SpaceRig_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.Search
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::Search()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.Search");

	ABP_GameState_SpaceRig_C_Search_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveGeneratedMissionReplicated
// (Event, Protected, BlueprintEvent)

void ABP_GameState_SpaceRig_C::ReceiveGeneratedMissionReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveGeneratedMissionReplicated");

	ABP_GameState_SpaceRig_C_ReceiveGeneratedMissionReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ManualRefreshServerList
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::ManualRefreshServerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ManualRefreshServerList");

	ABP_GameState_SpaceRig_C_ManualRefreshServerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.Shout_Cooldown_Started
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::Shout_Cooldown_Started()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.Shout_Cooldown_Started");

	ABP_GameState_SpaceRig_C_Shout_Cooldown_Started_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ExecuteUbergraph_BP_GameState_SpaceRig
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameState_SpaceRig_C::ExecuteUbergraph_BP_GameState_SpaceRig(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ExecuteUbergraph_BP_GameState_SpaceRig");

	ABP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnCountdownChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameState_SpaceRig_C::OnCountdownChanged__DelegateSignature(bool* active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnCountdownChanged__DelegateSignature");

	ABP_GameState_SpaceRig_C_OnCountdownChanged__DelegateSignature_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnServerListChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::OnServerListChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnServerListChanged__DelegateSignature");

	ABP_GameState_SpaceRig_C_OnServerListChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMissionTimerChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         newTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameState_SpaceRig_C::OnMissionTimerChanged__DelegateSignature(float* newTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMissionTimerChanged__DelegateSignature");

	ABP_GameState_SpaceRig_C_OnMissionTimerChanged__DelegateSignature_Params params;
	params.newTime = newTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnHostTimerChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         newTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameState_SpaceRig_C::OnHostTimerChanged__DelegateSignature(float* newTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnHostTimerChanged__DelegateSignature");

	ABP_GameState_SpaceRig_C_OnHostTimerChanged__DelegateSignature_Params params;
	params.newTime = newTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnCountdownCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::OnCountdownCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnCountdownCompleted__DelegateSignature");

	ABP_GameState_SpaceRig_C_OnCountdownCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnHostCountdownChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameState_SpaceRig_C::OnHostCountdownChanged__DelegateSignature(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnHostCountdownChanged__DelegateSignature");

	ABP_GameState_SpaceRig_C_OnHostCountdownChanged__DelegateSignature_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMissionCountdownChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameState_SpaceRig_C::OnMissionCountdownChanged__DelegateSignature(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMissionCountdownChanged__DelegateSignature");

	ABP_GameState_SpaceRig_C_OnMissionCountdownChanged__DelegateSignature_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMisionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameState_SpaceRig_C::OnMisionSelected__DelegateSignature(class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMisionSelected__DelegateSignature");

	ABP_GameState_SpaceRig_C_OnMisionSelected__DelegateSignature_Params params;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
