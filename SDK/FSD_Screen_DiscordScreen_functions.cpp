// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Screen_DiscordScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.BuildProgressUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ForceRefresh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreen_DiscordScreen_C::BuildProgressUI(bool* ForceRefresh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.BuildProgressUI");

	UScreen_DiscordScreen_C_BuildProgressUI_Params params;
	params.ForceRefresh = ForceRefresh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.RefreshCurrentState
// (Public, BlueprintCallable, BlueprintEvent)

void UScreen_DiscordScreen_C::RefreshCurrentState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.RefreshCurrentState");

	UScreen_DiscordScreen_C_RefreshCurrentState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_CommunityGoalResult_C** ResultUI                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           FactionID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreen_DiscordScreen_C::SetResult(class UITM_CommunityGoalResult_C** ResultUI, int* FactionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetResult");

	UScreen_DiscordScreen_C_SetResult_Params params;
	params.ResultUI = ResultUI;
	params.FactionID = FactionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.AwardRewards
// (Public, BlueprintCallable, BlueprintEvent)

void UScreen_DiscordScreen_C::AwardRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.AwardRewards");

	UScreen_DiscordScreen_C_AwardRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.MinersUnionTier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DSMUTier                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScreen_DiscordScreen_C::MinersUnionTier(float* DSMUTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.MinersUnionTier");

	UScreen_DiscordScreen_C_MinersUnionTier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DSMUTier != nullptr)
		*DSMUTier = params.DSMUTier;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.BuildRewardUI
// (Public, BlueprintCallable, BlueprintEvent)

void UScreen_DiscordScreen_C::BuildRewardUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.BuildRewardUI");

	UScreen_DiscordScreen_C_BuildRewardUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.CurrentPlayerFaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCommunityGoalFaction*   Current_Faction                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScreen_DiscordScreen_C::CurrentPlayerFaction(class UCommunityGoalFaction** Current_Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.CurrentPlayerFaction");

	UScreen_DiscordScreen_C_CurrentPlayerFaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current_Faction != nullptr)
		*Current_Faction = params.Current_Faction;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetGoalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          isGoal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isRecruitment                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreen_DiscordScreen_C::SetGoalState(bool* isGoal, bool* isRecruitment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetGoalState");

	UScreen_DiscordScreen_C_SetGoalState_Params params;
	params.isGoal = isGoal;
	params.isRecruitment = isRecruitment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetGoals
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>          Goals                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Values                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Members                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UScreen_DiscordScreen_C::SetGoals(TArray<class FString>* Goals, TArray<float>* Values, TArray<int>* Members)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetGoals");

	UScreen_DiscordScreen_C_SetGoals_Params params;

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


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.TestCommunityGoals
// (Public, BlueprintCallable, BlueprintEvent)

void UScreen_DiscordScreen_C::TestCommunityGoals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.TestCommunityGoals");

	UScreen_DiscordScreen_C_TestCommunityGoals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScreen_DiscordScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.Construct");

	UScreen_DiscordScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.Do Running Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock**             Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScreen_DiscordScreen_C::Do_Running_Text(struct FText* Text, int* Index, class UTextBlock** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.Do Running Text");

	UScreen_DiscordScreen_C_Do_Running_Text_Params params;
	params.Text = Text;
	params.Index = Index;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreen_DiscordScreen_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.PreConstruct");

	UScreen_DiscordScreen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.CheckState
// (BlueprintCallable, BlueprintEvent)

void UScreen_DiscordScreen_C::CheckState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.CheckState");

	UScreen_DiscordScreen_C_CheckState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.RegisterEvents
// (BlueprintCallable, BlueprintEvent)

void UScreen_DiscordScreen_C::RegisterEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.RegisterEvents");

	UScreen_DiscordScreen_C_RegisterEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnFactionsDataRecievedEvent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>*         Goals                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>*                 Values                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>*                   Members                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UScreen_DiscordScreen_C::OnFactionsDataRecievedEvent(TArray<class FString>* Goals, TArray<float>* Values, TArray<int>* Members)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnFactionsDataRecievedEvent");

	UScreen_DiscordScreen_C_OnFactionsDataRecievedEvent_Params params;
	params.Goals = Goals;
	params.Values = Values;
	params.Members = Members;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnCGSDataReceivedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          stateReceived                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreen_DiscordScreen_C::OnCGSDataReceivedEvent(bool* stateReceived)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnCGSDataReceivedEvent");

	UScreen_DiscordScreen_C_OnCGSDataReceivedEvent_Params params;
	params.stateReceived = stateReceived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.RequestData
// (BlueprintCallable, BlueprintEvent)

void UScreen_DiscordScreen_C::RequestData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.RequestData");

	UScreen_DiscordScreen_C_RequestData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScreen_DiscordScreen_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.Destruct");

	UScreen_DiscordScreen_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.ResetFactionCheckState
// (BlueprintCallable, BlueprintEvent)

void UScreen_DiscordScreen_C::ResetFactionCheckState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.ResetFactionCheckState");

	UScreen_DiscordScreen_C_ResetFactionCheckState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
// (BlueprintEvent)

void UScreen_DiscordScreen_C::BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");

	UScreen_DiscordScreen_C_BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnFactionChangedEvent
// (BlueprintCallable, BlueprintEvent)

void UScreen_DiscordScreen_C::OnFactionChangedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnFactionChangedEvent");

	UScreen_DiscordScreen_C_OnFactionChangedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.Refresh Ui
// (BlueprintCallable, BlueprintEvent)

void UScreen_DiscordScreen_C::Refresh_Ui()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.Refresh Ui");

	UScreen_DiscordScreen_C_Refresh_Ui_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnGoalInitialized
// (BlueprintCallable, BlueprintEvent)

void UScreen_DiscordScreen_C::OnGoalInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnGoalInitialized");

	UScreen_DiscordScreen_C_OnGoalInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.ExecuteUbergraph_Screen_DiscordScreen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreen_DiscordScreen_C::ExecuteUbergraph_Screen_DiscordScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.ExecuteUbergraph_Screen_DiscordScreen");

	UScreen_DiscordScreen_C_ExecuteUbergraph_Screen_DiscordScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_DiscordScreen.Screen_DiscordScreen_C.ScreenChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommunityUIState*             CurrentState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECommunityUIState*             PreviousState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreen_DiscordScreen_C::ScreenChanged__DelegateSignature(ECommunityUIState* CurrentState, ECommunityUIState* PreviousState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_DiscordScreen.Screen_DiscordScreen_C.ScreenChanged__DelegateSignature");

	UScreen_DiscordScreen_C_ScreenChanged__DelegateSignature_Params params;
	params.CurrentState = CurrentState;
	params.PreviousState = PreviousState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
