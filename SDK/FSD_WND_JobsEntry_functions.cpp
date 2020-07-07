// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_JobsEntry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_JobsEntry.WND_JobsEntry_C.CreateValidSeedRequirement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValidWeeklySeedCampaignRequirement** Requirement                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCampaign**              Campaign                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_JobsEntry_C::CreateValidSeedRequirement(class UValidWeeklySeedCampaignRequirement** Requirement, class UCampaign** Campaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.CreateValidSeedRequirement");

	UWND_JobsEntry_C_CreateValidSeedRequirement_Params params;
	params.Requirement = Requirement;
	params.Campaign = Campaign;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.CreateCampaignCompletedRequirement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCamapaignCompletedRequirement** Requirement                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCampaign**              Campaign                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_JobsEntry_C::CreateCampaignCompletedRequirement(class UCamapaignCompletedRequirement** Requirement, class UCampaign** Campaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.CreateCampaignCompletedRequirement");

	UWND_JobsEntry_C_CreateCampaignCompletedRequirement_Params params;
	params.Requirement = Requirement;
	params.Campaign = Campaign;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.CreateAnyRequirement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnyRetiredCampaignRequirement** Requirement                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCampaign**              Campaign                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_JobsEntry_C::CreateAnyRequirement(class UAnyRetiredCampaignRequirement** Requirement, class UCampaign** Campaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.CreateAnyRequirement");

	UWND_JobsEntry_C_CreateAnyRequirement_Params params;
	params.Requirement = Requirement;
	params.Campaign = Campaign;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.CanStartCampaign
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCampaign**              InCampaign                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWND_JobsEntry_C::CanStartCampaign(class UCampaign** InCampaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.CanStartCampaign");

	UWND_JobsEntry_C_CanStartCampaign_Params params;
	params.InCampaign = InCampaign;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WND_JobsEntry.WND_JobsEntry_C.CreateWeeklyRequirement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeeklyTimerCampaignRequirement** Requirement                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCampaign**              Campaign                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_JobsEntry_C::CreateWeeklyRequirement(class UWeeklyTimerCampaignRequirement** Requirement, class UCampaign** Campaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.CreateWeeklyRequirement");

	UWND_JobsEntry_C_CreateWeeklyRequirement_Params params;
	params.Requirement = Requirement;
	params.Campaign = Campaign;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.CreatePlayerRankBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           RequiredRank                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_JobsEntry_C::CreatePlayerRankBox(int* RequiredRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.CreatePlayerRankBox");

	UWND_JobsEntry_C_CreatePlayerRankBox_Params params;
	params.RequiredRank = RequiredRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.VisibleAndEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWND_JobsEntry_C::VisibleAndEnabled(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.VisibleAndEnabled");

	UWND_JobsEntry_C_VisibleAndEnabled_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WND_JobsEntry.WND_JobsEntry_C.CreateLevelRequirementBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           RequiredLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerCharacterID**     ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_JobsEntry_C::CreateLevelRequirementBox(int* RequiredLevel, class UPlayerCharacterID** ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.CreateLevelRequirementBox");

	UWND_JobsEntry_C_CreateLevelRequirementBox_Params params;
	params.RequiredLevel = RequiredLevel;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.HandleAbortMissionButton
// (Public, BlueprintCallable, BlueprintEvent)

void UWND_JobsEntry_C::HandleAbortMissionButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.HandleAbortMissionButton");

	UWND_JobsEntry_C_HandleAbortMissionButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWND_JobsEntry_C::SetInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.SetInfo");

	UWND_JobsEntry_C_SetInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.IsActiveCampaign
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWND_JobsEntry_C::IsActiveCampaign()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.IsActiveCampaign");

	UWND_JobsEntry_C_IsActiveCampaign_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WND_JobsEntry.WND_JobsEntry_C.CreateRequirements
// (Public, BlueprintCallable, BlueprintEvent)

void UWND_JobsEntry_C::CreateRequirements()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.CreateRequirements");

	UWND_JobsEntry_C_CreateRequirements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.SetActiveLook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWND_JobsEntry_C::SetActiveLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.SetActiveLook");

	UWND_JobsEntry_C_SetActiveLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.SetInactiveLook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWND_JobsEntry_C::SetInactiveLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.SetInactiveLook");

	UWND_JobsEntry_C_SetInactiveLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_JobsEntry_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.PreConstruct");

	UWND_JobsEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWND_JobsEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWND_JobsEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWND_JobsEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWND_JobsEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWND_JobsEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWND_JobsEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__BTN_Accept_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_JobsEntry_C::BndEvt__BTN_Accept_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__BTN_Accept_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWND_JobsEntry_C_BndEvt__BTN_Accept_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__BTN_Abort_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_JobsEntry_C::BndEvt__BTN_Abort_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__BTN_Abort_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWND_JobsEntry_C_BndEvt__BTN_Abort_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.Fold
// (BlueprintCallable, BlueprintEvent)

void UWND_JobsEntry_C::Fold()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.Fold");

	UWND_JobsEntry_C_Fold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.Answer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_JobsEntry_C::Answer(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.Answer");

	UWND_JobsEntry_C_Answer_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.SkipAnswer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_JobsEntry_C::SkipAnswer(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.SkipAnswer");

	UWND_JobsEntry_C_SkipAnswer_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCampaign**              Campaign                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_JobsEntry_C::SetData(class UCampaign** Campaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.SetData");

	UWND_JobsEntry_C_SetData_Params params;
	params.Campaign = Campaign;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UWND_JobsEntry_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.Refresh");

	UWND_JobsEntry_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.SetFolded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFolded                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_JobsEntry_C::SetFolded(bool* IsFolded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.SetFolded");

	UWND_JobsEntry_C_SetFolded_Params params;
	params.IsFolded = IsFolded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.Unfold
// (BlueprintCallable, BlueprintEvent)

void UWND_JobsEntry_C::Unfold()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.Unfold");

	UWND_JobsEntry_C_Unfold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.ExecuteUbergraph_WND_JobsEntry
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_JobsEntry_C::ExecuteUbergraph_WND_JobsEntry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.ExecuteUbergraph_WND_JobsEntry");

	UWND_JobsEntry_C_ExecuteUbergraph_WND_JobsEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JobsEntry.WND_JobsEntry_C.OnBeginUnfolding__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWND_JobsEntry_C**       entry                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWND_JobsEntry_C::OnBeginUnfolding__DelegateSignature(class UWND_JobsEntry_C** entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.OnBeginUnfolding__DelegateSignature");

	UWND_JobsEntry_C_OnBeginUnfolding__DelegateSignature_Params params;
	params.entry = entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
