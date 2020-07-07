// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoalReward_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.TotalTiers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UITM_CommunityGoalReward_C::TotalTiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.TotalTiers");

	UITM_CommunityGoalReward_C_TotalTiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetGoalResultTier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommunityGoal**         Goal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalReward_C::SetGoalResultTier(int* Tier, class UCommunityGoal** Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetGoalResultTier");

	UITM_CommunityGoalReward_C_SetGoalResultTier_Params params;
	params.Tier = Tier;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.BuildResources
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalReward_C::BuildResources(int* Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.BuildResources");

	UITM_CommunityGoalReward_C_BuildResources_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetGoalResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Members                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommunityGoal**         Goal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalReward_C::SetGoalResult(float* Score, int* Members, class UCommunityGoal** Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetGoalResult");

	UITM_CommunityGoalReward_C_SetGoalResult_Params params;
	params.Score = Score;
	params.Members = Members;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.UpdateTitle
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalReward_C::UpdateTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.UpdateTitle");

	UITM_CommunityGoalReward_C_UpdateTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.UpdateIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalReward_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.UpdateIcon");

	UITM_CommunityGoalReward_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetFaction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalReward_C::SetFaction(class UCommunityGoalFaction** Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetFaction");

	UITM_CommunityGoalReward_C_SetFaction_Params params;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalReward_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.PreConstruct");

	UITM_CommunityGoalReward_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.ExecuteUbergraph_ITM_CommunityGoalReward
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalReward_C::ExecuteUbergraph_ITM_CommunityGoalReward(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.ExecuteUbergraph_ITM_CommunityGoalReward");

	UITM_CommunityGoalReward_C_ExecuteUbergraph_ITM_CommunityGoalReward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
