// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoalRecruitment_ConsoleScreenV1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.SetResultFactionID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_CommunityGoalResult_ConsoleScreenV1_C** ResultUI                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           FactionID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalRecruitment_ConsoleScreenV1_C::SetResultFactionID(class UITM_CommunityGoalResult_ConsoleScreenV1_C** ResultUI, int* FactionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.SetResultFactionID");

	UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_SetResultFactionID_Params params;
	params.ResultUI = ResultUI;
	params.FactionID = FactionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.BuildRecruitmentUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalRecruitment_ConsoleScreenV1_C::BuildRecruitmentUI(class UCommunityGoalFaction** Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.BuildRecruitmentUI");

	UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_BuildRecruitmentUI_Params params;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_CommunityGoalRecruitment_ConsoleScreenV1_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.Construct");

	UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.ResetFactionCheckState
// (BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalRecruitment_ConsoleScreenV1_C::ResetFactionCheckState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.ResetFactionCheckState");

	UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_ResetFactionCheckState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalRecruitment_ConsoleScreenV1_C::ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1");

	UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.CheckState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalRecruitment_ConsoleScreenV1_C::CheckState__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.CheckState__DelegateSignature");

	UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_CheckState__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
