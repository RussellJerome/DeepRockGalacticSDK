// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Campaign_Icon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.IsAnyMissionCampaign
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UGeneratedMission*> missions                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOnMission                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_Campaign_Icon_C::IsAnyMissionCampaign(class AFSDPlayerState** Player, TArray<class UGeneratedMission*>* missions, bool* IsOnMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.IsAnyMissionCampaign");

	UITM_Campaign_Icon_C_IsAnyMissionCampaign_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (missions != nullptr)
		*missions = params.missions;
	if (IsOnMission != nullptr)
		*IsOnMission = params.IsOnMission;
}


// Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Campaign_Icon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.PreConstruct");

	UITM_Campaign_Icon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.SetCampaignIconData
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UGeneratedMission*>* missions                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UITM_Campaign_Icon_C::SetCampaignIconData(TArray<class UGeneratedMission*>* missions)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.SetCampaignIconData");

	UITM_Campaign_Icon_C_SetCampaignIconData_Params params;
	params.missions = missions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.ExecuteUbergraph_ITM_Campaign_Icon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Campaign_Icon_C::ExecuteUbergraph_ITM_Campaign_Icon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.ExecuteUbergraph_ITM_Campaign_Icon");

	UITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
