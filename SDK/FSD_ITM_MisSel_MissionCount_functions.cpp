// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_MissionCount_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.SetMissionCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UGeneratedMission*> missions                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FBlueprintSessionResult> SeachResults                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UITM_MisSel_MissionCount_C::SetMissionCount(TArray<class UGeneratedMission*>* missions, TArray<struct FBlueprintSessionResult>* SeachResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.SetMissionCount");

	UITM_MisSel_MissionCount_C_SetMissionCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (missions != nullptr)
		*missions = params.missions;
	if (SeachResults != nullptr)
		*SeachResults = params.SeachResults;
}


// Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionCount_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.PreConstruct");

	UITM_MisSel_MissionCount_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_MisSel_MissionCount_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.Construct");

	UITM_MisSel_MissionCount_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.ServerUpdate
// (BlueprintCallable, BlueprintEvent)

void UITM_MisSel_MissionCount_C::ServerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.ServerUpdate");

	UITM_MisSel_MissionCount_C_ServerUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.ExecuteUbergraph_ITM_MisSel_MissionCount
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionCount_C::ExecuteUbergraph_ITM_MisSel_MissionCount(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.ExecuteUbergraph_ITM_MisSel_MissionCount");

	UITM_MisSel_MissionCount_C_ExecuteUbergraph_ITM_MisSel_MissionCount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
