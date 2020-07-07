// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoalResult_ConsoleScreenV1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.UpdateTitle
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalResult_ConsoleScreenV1_C::UpdateTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.UpdateTitle");

	UITM_CommunityGoalResult_ConsoleScreenV1_C_UpdateTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.UpdateIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalResult_ConsoleScreenV1_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.UpdateIcon");

	UITM_CommunityGoalResult_ConsoleScreenV1_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.SetFaction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalResult_ConsoleScreenV1_C::SetFaction(class UCommunityGoalFaction** Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.SetFaction");

	UITM_CommunityGoalResult_ConsoleScreenV1_C_SetFaction_Params params;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalResult_ConsoleScreenV1_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.PreConstruct");

	UITM_CommunityGoalResult_ConsoleScreenV1_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.SetResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalResult_ConsoleScreenV1_C::SetResult(int* Score, int* Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.SetResult");

	UITM_CommunityGoalResult_ConsoleScreenV1_C_SetResult_Params params;
	params.Score = Score;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.ExecuteUbergraph_ITM_CommunityGoalResult_ConsoleScreenV1
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalResult_ConsoleScreenV1_C::ExecuteUbergraph_ITM_CommunityGoalResult_ConsoleScreenV1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.ExecuteUbergraph_ITM_CommunityGoalResult_ConsoleScreenV1");

	UITM_CommunityGoalResult_ConsoleScreenV1_C_ExecuteUbergraph_ITM_CommunityGoalResult_ConsoleScreenV1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
