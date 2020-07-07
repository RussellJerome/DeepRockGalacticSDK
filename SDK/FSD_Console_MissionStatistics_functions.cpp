// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Console_MissionStatistics_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Console_MissionStatistics.Console_MissionStatistics_C.HasClaimablePerkPoints
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Claimable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UConsole_MissionStatistics_C::HasClaimablePerkPoints(bool* Claimable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.HasClaimablePerkPoints");

	UConsole_MissionStatistics_C_HasClaimablePerkPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Claimable != nullptr)
		*Claimable = params.Claimable;
}


// Function Console_MissionStatistics.Console_MissionStatistics_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsole_MissionStatistics_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.Construct");

	UConsole_MissionStatistics_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_MissionStatistics.Console_MissionStatistics_C.StartClaimable
// (BlueprintCallable, BlueprintEvent)

void UConsole_MissionStatistics_C::StartClaimable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.StartClaimable");

	UConsole_MissionStatistics_C_StartClaimable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_MissionStatistics.Console_MissionStatistics_C.StopClaimable
// (BlueprintCallable, BlueprintEvent)

void UConsole_MissionStatistics_C::StopClaimable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.StopClaimable");

	UConsole_MissionStatistics_C_StopClaimable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_MissionStatistics.Console_MissionStatistics_C.Update
// (BlueprintCallable, BlueprintEvent)

void UConsole_MissionStatistics_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.Update");

	UConsole_MissionStatistics_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_MissionStatistics.Console_MissionStatistics_C.OnCountChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionStat**           MissionStat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_MissionStatistics_C::OnCountChanged_Event(class UMissionStat** MissionStat, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.OnCountChanged_Event");

	UConsole_MissionStatistics_C_OnCountChanged_Event_Params params;
	params.MissionStat = MissionStat;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_MissionStatistics.Console_MissionStatistics_C.OnMilestoneClaimed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMilestoneAsset**        Milestone                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClaimedTier                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_MissionStatistics_C::OnMilestoneClaimed_Event(class UMilestoneAsset** Milestone, int* ClaimedTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.OnMilestoneClaimed_Event");

	UConsole_MissionStatistics_C_OnMilestoneClaimed_Event_Params params;
	params.Milestone = Milestone;
	params.ClaimedTier = ClaimedTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_MissionStatistics.Console_MissionStatistics_C.ExecuteUbergraph_Console_MissionStatistics
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_MissionStatistics_C::ExecuteUbergraph_Console_MissionStatistics(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.ExecuteUbergraph_Console_MissionStatistics");

	UConsole_MissionStatistics_C_ExecuteUbergraph_Console_MissionStatistics_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
