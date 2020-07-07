// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MissionControl_MainDialogue_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SetPreview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogDataAsset**       PreviewShout                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionControl_MainDialogue_C::SetPreview(class UDialogDataAsset** PreviewShout)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SetPreview");

	UMissionControl_MainDialogue_C_SetPreview_Params params;
	params.PreviewShout = PreviewShout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionControl_MainDialogue_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Reset");

	UMissionControl_MainDialogue_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SetProgress
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Finished                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionControl_MainDialogue_C::SetProgress(float* Progress, bool* Finished)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SetProgress");

	UMissionControl_MainDialogue_C_SetProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Finished != nullptr)
		*Finished = params.Finished;
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.TickRunningText
// (Private, BlueprintCallable, BlueprintEvent)

void UMissionControl_MainDialogue_C::TickRunningText()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.TickRunningText");

	UMissionControl_MainDialogue_C_TickRunningText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.StopRunningText
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionControl_MainDialogue_C::StopRunningText()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.StopRunningText");

	UMissionControl_MainDialogue_C_StopRunningText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakEntryManually
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDialogStruct*          entry                          (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         AudioComponent                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMissionControl_MainDialogue_C::SpeakEntryManually(struct FDialogStruct* entry, float* Duration, class UAudioComponent** AudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakEntryManually");

	UMissionControl_MainDialogue_C_SpeakEntryManually_Params params;
	params.entry = entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
	if (AudioComponent != nullptr)
		*AudioComponent = params.AudioComponent;
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakManually
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogDataAsset**       MissionShout                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         AudioComponent                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMissionControl_MainDialogue_C::SpeakManually(class UDialogDataAsset** MissionShout, float* Duration, class UAudioComponent** AudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakManually");

	UMissionControl_MainDialogue_C_SpeakManually_Params params;
	params.MissionShout = MissionShout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
	if (AudioComponent != nullptr)
		*AudioComponent = params.AudioComponent;
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Start Running Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionControl_MainDialogue_C::Start_Running_Text(struct FText* Text, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Start Running Text");

	UMissionControl_MainDialogue_C_Start_Running_Text_Params params;
	params.Text = Text;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShout
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionControl_MainDialogue_C::OnMissionShout(struct FText* Text, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShout");

	UMissionControl_MainDialogue_C_OnMissionShout_Params params;
	params.Text = Text;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionControl_MainDialogue_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Construct");

	UMissionControl_MainDialogue_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionControl_MainDialogue_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.PreConstruct");

	UMissionControl_MainDialogue_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShoutEnd
// (BlueprintCallable, BlueprintEvent)

void UMissionControl_MainDialogue_C::OnMissionShoutEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShoutEnd");

	UMissionControl_MainDialogue_C_OnMissionShoutEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.ExecuteUbergraph_MissionControl_MainDialogue
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionControl_MainDialogue_C::ExecuteUbergraph_MissionControl_MainDialogue(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.ExecuteUbergraph_MissionControl_MainDialogue");

	UMissionControl_MainDialogue_C_ExecuteUbergraph_MissionControl_MainDialogue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
