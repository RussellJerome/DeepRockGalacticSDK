// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoalProgress_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetInfoToCurrentFaction
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalProgress_C::SetInfoToCurrentFaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetInfoToCurrentFaction");

	UITM_CommunityGoalProgress_C_SetInfoToCurrentFaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetGoals
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>          Goals                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Values                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Members                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float*                         Miners_Union_Tier              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceRefresh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalProgress_C::SetGoals(float* Miners_Union_Tier, bool* ForceRefresh, TArray<class FString>* Goals, TArray<float>* Values, TArray<int>* Members)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetGoals");

	UITM_CommunityGoalProgress_C_SetGoals_Params params;
	params.Miners_Union_Tier = Miners_Union_Tier;
	params.ForceRefresh = ForceRefresh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Goals != nullptr)
		*Goals = params.Goals;
	if (Values != nullptr)
		*Values = params.Values;
	if (Members != nullptr)
		*Members = params.Members;
}


// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TestCommunityGoal
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalProgress_C::TestCommunityGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TestCommunityGoal");

	UITM_CommunityGoalProgress_C_TestCommunityGoal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalProgress_C::SetTime(float* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetTime");

	UITM_CommunityGoalProgress_C_SetTime_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_CommunityGoalProgress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.Construct");

	UITM_CommunityGoalProgress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.CHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommunityGoal**         Goal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalProgress_C::CHover(class UCommunityGoalFaction** Faction, class UCommunityGoal** Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.CHover");

	UITM_CommunityGoalProgress_C_CHover_Params params;
	params.Faction = Faction;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F1Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommunityGoal**         Goal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalProgress_C::F1Hover(class UCommunityGoalFaction** Faction, class UCommunityGoal** Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F1Hover");

	UITM_CommunityGoalProgress_C_F1Hover_Params params;
	params.Faction = Faction;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F2Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommunityGoal**         Goal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalProgress_C::F2Hover(class UCommunityGoalFaction** Faction, class UCommunityGoal** Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F2Hover");

	UITM_CommunityGoalProgress_C_F2Hover_Params params;
	params.Faction = Faction;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.CHEnd
// (BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalProgress_C::CHEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.CHEnd");

	UITM_CommunityGoalProgress_C_CHEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F1End
// (BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalProgress_C::F1End()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F1End");

	UITM_CommunityGoalProgress_C_F1End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F2End
// (BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalProgress_C::F2End()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F2End");

	UITM_CommunityGoalProgress_C_F2End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TotalHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommunityGoal**         Goal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalProgress_C::TotalHover(class UCommunityGoalFaction** Faction, class UCommunityGoal** Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TotalHover");

	UITM_CommunityGoalProgress_C_TotalHover_Params params;
	params.Faction = Faction;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TotalEnd
// (BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalProgress_C::TotalEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TotalEnd");

	UITM_CommunityGoalProgress_C_TotalEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.ExecuteUbergraph_ITM_CommunityGoalProgress
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalProgress_C::ExecuteUbergraph_ITM_CommunityGoalProgress(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.ExecuteUbergraph_ITM_CommunityGoalProgress");

	UITM_CommunityGoalProgress_C_ExecuteUbergraph_ITM_CommunityGoalProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
