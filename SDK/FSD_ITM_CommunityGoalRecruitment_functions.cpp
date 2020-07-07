// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoalRecruitment_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.SetResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_CommunityGoalResult_C** ResultUI                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           FactionID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalRecruitment_C::SetResult(class UITM_CommunityGoalResult_C** ResultUI, int* FactionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.SetResult");

	UITM_CommunityGoalRecruitment_C_SetResult_Params params;
	params.ResultUI = ResultUI;
	params.FactionID = FactionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.BuildRecruitmentUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalRecruitment_C::BuildRecruitmentUI(class UCommunityGoalFaction** Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.BuildRecruitmentUI");

	UITM_CommunityGoalRecruitment_C_BuildRecruitmentUI_Params params;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.SetTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalRecruitment_C::SetTime(float* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.SetTime");

	UITM_CommunityGoalRecruitment_C_SetTime_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_CommunityGoalRecruitment_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.Construct");

	UITM_CommunityGoalRecruitment_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.ResetFactionCheckState
// (BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalRecruitment_C::ResetFactionCheckState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.ResetFactionCheckState");

	UITM_CommunityGoalRecruitment_C_ResetFactionCheckState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.ExecuteUbergraph_ITM_CommunityGoalRecruitment
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalRecruitment_C::ExecuteUbergraph_ITM_CommunityGoalRecruitment(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.ExecuteUbergraph_ITM_CommunityGoalRecruitment");

	UITM_CommunityGoalRecruitment_C_ExecuteUbergraph_ITM_CommunityGoalRecruitment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.CheckState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalRecruitment_C::CheckState__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.CheckState__DelegateSignature");

	UITM_CommunityGoalRecruitment_C_CheckState__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
