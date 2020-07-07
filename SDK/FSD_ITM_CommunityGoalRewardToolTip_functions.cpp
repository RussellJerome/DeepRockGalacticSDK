// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoalRewardToolTip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.SetGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoal**         Goal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalRewardToolTip_C::SetGoal(class UCommunityGoal** Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.SetGoal");

	UITM_CommunityGoalRewardToolTip_C_SetGoal_Params params;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.TotalTiers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UITM_CommunityGoalRewardToolTip_C::TotalTiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.TotalTiers");

	UITM_CommunityGoalRewardToolTip_C_TotalTiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.SetGoalResultTier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommunityGoal**         Goal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalRewardToolTip_C::SetGoalResultTier(int* Tier, class UCommunityGoal** Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.SetGoalResultTier");

	UITM_CommunityGoalRewardToolTip_C_SetGoalResultTier_Params params;
	params.Tier = Tier;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.BuildResources
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalRewardToolTip_C::BuildResources(int* Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.BuildResources");

	UITM_CommunityGoalRewardToolTip_C_BuildResources_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.SetFaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalRewardToolTip_C::SetFaction(class UCommunityGoalFaction** Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.SetFaction");

	UITM_CommunityGoalRewardToolTip_C_SetFaction_Params params;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalRewardToolTip_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.PreConstruct");

	UITM_CommunityGoalRewardToolTip_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.ExecuteUbergraph_ITM_CommunityGoalRewardToolTip
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalRewardToolTip_C::ExecuteUbergraph_ITM_CommunityGoalRewardToolTip(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.ExecuteUbergraph_ITM_CommunityGoalRewardToolTip");

	UITM_CommunityGoalRewardToolTip_C_ExecuteUbergraph_ITM_CommunityGoalRewardToolTip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
