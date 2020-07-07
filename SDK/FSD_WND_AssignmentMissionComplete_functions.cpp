// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_AssignmentMissionComplete_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CheckMinersManualNotifications
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWND_AssignmentMissionComplete_C::CheckMinersManualNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CheckMinersManualNotifications");

	UWND_AssignmentMissionComplete_C_CheckMinersManualNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.UpdateGoogleAnalytics
// (Public, BlueprintCallable, BlueprintEvent)

void UWND_AssignmentMissionComplete_C::UpdateGoogleAnalytics()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.UpdateGoogleAnalytics");

	UWND_AssignmentMissionComplete_C_UpdateGoogleAnalytics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.UpdateCampaignProgressBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowLastMission                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_AssignmentMissionComplete_C::UpdateCampaignProgressBar(bool* ShowLastMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.UpdateCampaignProgressBar");

	UWND_AssignmentMissionComplete_C_UpdateCampaignProgressBar_Params params;
	params.ShowLastMission = ShowLastMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.IsWindowOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWND_AssignmentMissionComplete_C::IsWindowOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.IsWindowOpen");

	UWND_AssignmentMissionComplete_C_IsWindowOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWND_AssignmentMissionComplete_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnKeyUp");

	UWND_AssignmentMissionComplete_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.SetFrameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_AssignmentMissionComplete_C::SetFrameColor(TEnumAsByte<ENUM_MenuColors>* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.SetFrameColor");

	UWND_AssignmentMissionComplete_C_SetFrameColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.GetMissionCompleteShout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDialogDataAsset*        MissionCompleteShout           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWND_AssignmentMissionComplete_C::GetMissionCompleteShout(class UDialogDataAsset** MissionCompleteShout)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.GetMissionCompleteShout");

	UWND_AssignmentMissionComplete_C_GetMissionCompleteShout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissionCompleteShout != nullptr)
		*MissionCompleteShout = params.MissionCompleteShout;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CreateRewardWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UReward**                Reward                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URewardWidget*           Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWND_AssignmentMissionComplete_C::CreateRewardWidget(class UReward** Reward, class URewardWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CreateRewardWidget");

	UWND_AssignmentMissionComplete_C_CreateRewardWidget_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Add Reward List
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UReward*>*        List                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWND_AssignmentMissionComplete_C::Add_Reward_List(TArray<class UReward*>* List)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Add Reward List");

	UWND_AssignmentMissionComplete_C_Add_Reward_List_Params params;
	params.List = List;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Add Reward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UReward**                Reward                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_AssignmentMissionComplete_C::Add_Reward(class UReward** Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Add Reward");

	UWND_AssignmentMissionComplete_C_Add_Reward_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_AssignmentMissionComplete_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.PreConstruct");

	UWND_AssignmentMissionComplete_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_AssignmentMissionComplete_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWND_AssignmentMissionComplete_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnShown
// (Event, Public, BlueprintEvent)

void UWND_AssignmentMissionComplete_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnShown");

	UWND_AssignmentMissionComplete_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnClosed
// (Event, Public, BlueprintEvent)

void UWND_AssignmentMissionComplete_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnClosed");

	UWND_AssignmentMissionComplete_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.SetMissionControlPaused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsPaused                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_AssignmentMissionComplete_C::SetMissionControlPaused(bool* IsPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.SetMissionControlPaused");

	UWND_AssignmentMissionComplete_C_SetMissionControlPaused_Params params;
	params.IsPaused = IsPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Continue
// (BlueprintCallable, BlueprintEvent)

void UWND_AssignmentMissionComplete_C::Continue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Continue");

	UWND_AssignmentMissionComplete_C_Continue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CursorInputHack
// (BlueprintCallable, BlueprintEvent)

void UWND_AssignmentMissionComplete_C::CursorInputHack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CursorInputHack");

	UWND_AssignmentMissionComplete_C_CursorInputHack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Init Window
// (BlueprintCallable, BlueprintEvent)

void UWND_AssignmentMissionComplete_C::Init_Window()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Init Window");

	UWND_AssignmentMissionComplete_C_Init_Window_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Start Mission Control Speak
// (BlueprintCallable, BlueprintEvent)

void UWND_AssignmentMissionComplete_C::Start_Mission_Control_Speak()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Start Mission Control Speak");

	UWND_AssignmentMissionComplete_C_Start_Mission_Control_Speak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnAppearFinished
// (BlueprintCallable, BlueprintEvent)

void UWND_AssignmentMissionComplete_C::OnAppearFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnAppearFinished");

	UWND_AssignmentMissionComplete_C_OnAppearFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.On Mission Control Finished
// (BlueprintCallable, BlueprintEvent)

void UWND_AssignmentMissionComplete_C::On_Mission_Control_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.On Mission Control Finished");

	UWND_AssignmentMissionComplete_C_On_Mission_Control_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Count Down
// (BlueprintCallable, BlueprintEvent)

void UWND_AssignmentMissionComplete_C::Count_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Count Down");

	UWND_AssignmentMissionComplete_C_Count_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Reward Claimed
// (BlueprintCallable, BlueprintEvent)

void UWND_AssignmentMissionComplete_C::Reward_Claimed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Reward Claimed");

	UWND_AssignmentMissionComplete_C_Reward_Claimed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnNewTopWindow
// (Event, Public, BlueprintEvent)

void UWND_AssignmentMissionComplete_C::OnNewTopWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnNewTopWindow");

	UWND_AssignmentMissionComplete_C_OnNewTopWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnProgressBarMoveFinished
// (BlueprintCallable, BlueprintEvent)

void UWND_AssignmentMissionComplete_C::OnProgressBarMoveFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnProgressBarMoveFinished");

	UWND_AssignmentMissionComplete_C_OnProgressBarMoveFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnUpdateProgressBarFinished
// (BlueprintCallable, BlueprintEvent)

void UWND_AssignmentMissionComplete_C::OnUpdateProgressBarFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnUpdateProgressBarFinished");

	UWND_AssignmentMissionComplete_C_OnUpdateProgressBarFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnProgressBarUpdateStep
// (BlueprintCallable, BlueprintEvent)

void UWND_AssignmentMissionComplete_C::OnProgressBarUpdateStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnProgressBarUpdateStep");

	UWND_AssignmentMissionComplete_C_OnProgressBarUpdateStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.ExecuteUbergraph_WND_AssignmentMissionComplete
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_AssignmentMissionComplete_C::ExecuteUbergraph_WND_AssignmentMissionComplete(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.ExecuteUbergraph_WND_AssignmentMissionComplete");

	UWND_AssignmentMissionComplete_C_ExecuteUbergraph_WND_AssignmentMissionComplete_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
