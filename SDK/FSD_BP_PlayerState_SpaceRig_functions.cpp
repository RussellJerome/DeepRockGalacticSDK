// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PlayerState_SpaceRig_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetMissionStatValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMissionStat**           MissionStat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   StatValue                      (Parm, OutParm)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_SpaceRig_C::GetMissionStatValue(class UMissionStat** MissionStat, struct FText* StatValue, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetMissionStatValue");

	ABP_PlayerState_SpaceRig_C_GetMissionStatValue_Params params;
	params.MissionStat = MissionStat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatValue != nullptr)
		*StatValue = params.StatValue;
	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.SendMissionStatData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionStat**           MissionStat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_SpaceRig_C::SendMissionStatData(class UMissionStat** MissionStat, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.SendMissionStatData");

	ABP_PlayerState_SpaceRig_C_SendMissionStatData_Params params;
	params.MissionStat = MissionStat;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UpdateMissionStat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionStat**           MissionStat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_SpaceRig_C::UpdateMissionStat(class UMissionStat** MissionStat, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UpdateMissionStat");

	ABP_PlayerState_SpaceRig_C_UpdateMissionStat_Params params;
	params.MissionStat = MissionStat;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.IsListeningToMissionStat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMissionStat**           MissionStat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasStat                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_SpaceRig_C::IsListeningToMissionStat(class UMissionStat** MissionStat, bool* HasStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.IsListeningToMissionStat");

	ABP_PlayerState_SpaceRig_C_IsListeningToMissionStat_Params params;
	params.MissionStat = MissionStat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasStat != nullptr)
		*HasStat = params.HasStat;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnRep_MissionStats
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_SpaceRig_C::OnRep_MissionStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnRep_MissionStats");

	ABP_PlayerState_SpaceRig_C_OnRep_MissionStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetHealthInsuranceStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            HealthInsuranceStatus          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_SpaceRig_C::GetHealthInsuranceStatus(int* HealthInsuranceStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetHealthInsuranceStatus");

	ABP_PlayerState_SpaceRig_C_GetHealthInsuranceStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthInsuranceStatus != nullptr)
		*HealthInsuranceStatus = params.HealthInsuranceStatus;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_SpaceRig_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UserConstructionScript");

	ABP_PlayerState_SpaceRig_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.WatchStat
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionStat**           MissionStat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_SpaceRig_C::WatchStat(class UMissionStat** MissionStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.WatchStat");

	ABP_PlayerState_SpaceRig_C_WatchStat_Params params;
	params.MissionStat = MissionStat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerState_SpaceRig_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ReceiveBeginPlay");

	ABP_PlayerState_SpaceRig_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CheckCampaign
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_SpaceRig_C::CheckCampaign()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CheckCampaign");

	ABP_PlayerState_SpaceRig_C_CheckCampaign_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnMissionStatChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionStat**           MissionStat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_SpaceRig_C::OnMissionStatChanged(class UMissionStat** MissionStat, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnMissionStatChanged");

	ABP_PlayerState_SpaceRig_C_OnMissionStatChanged_Params params;
	params.MissionStat = MissionStat;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.Server_UpdateStat
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionStat**           Mission_Stat                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Stat_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_SpaceRig_C::Server_UpdateStat(class UMissionStat** Mission_Stat, float* Stat_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.Server_UpdateStat");

	ABP_PlayerState_SpaceRig_C_Server_UpdateStat_Params params;
	params.Mission_Stat = Mission_Stat;
	params.Stat_Value = Stat_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ExecuteUbergraph_BP_PlayerState_SpaceRig
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_SpaceRig_C::ExecuteUbergraph_BP_PlayerState_SpaceRig(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ExecuteUbergraph_BP_PlayerState_SpaceRig");

	ABP_PlayerState_SpaceRig_C_ExecuteUbergraph_BP_PlayerState_SpaceRig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnStatChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionStat**           MissionStat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  StatValue                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerState_SpaceRig_C::OnStatChange__DelegateSignature(class UMissionStat** MissionStat, struct FText* StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnStatChange__DelegateSignature");

	ABP_PlayerState_SpaceRig_C_OnStatChange__DelegateSignature_Params params;
	params.MissionStat = MissionStat;
	params.StatValue = StatValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
