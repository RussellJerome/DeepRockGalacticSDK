// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MissionBarDropPod_Objective_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.SetShowReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MissionBarDropPod_Objective_C::SetShowReward(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.SetShowReward");

	UITM_MissionBarDropPod_Objective_C_SetShowReward_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.SetObjective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ObjectiveType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MissionBarDropPod_Objective_C::SetObjective(class UGeneratedMission** mission, class UClass** ObjectiveType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.SetObjective");

	UITM_MissionBarDropPod_Objective_C_SetObjective_Params params;
	params.mission = mission;
	params.ObjectiveType = ObjectiveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MissionBarDropPod_Objective_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.PreConstruct");

	UITM_MissionBarDropPod_Objective_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.ExecuteUbergraph_ITM_MissionBarDropPod_Objective
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MissionBarDropPod_Objective_C::ExecuteUbergraph_ITM_MissionBarDropPod_Objective(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.ExecuteUbergraph_ITM_MissionBarDropPod_Objective");

	UITM_MissionBarDropPod_Objective_C_ExecuteUbergraph_ITM_MissionBarDropPod_Objective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
