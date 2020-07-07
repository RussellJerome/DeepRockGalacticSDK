// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDives_Launcher_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetBestTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_Launcher_C::SetBestTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetBestTime");

	UITM_DeepDives_Launcher_C_SetBestTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetPersonalBest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TotalSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_Launcher_C::SetPersonalBest(int* TotalSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetPersonalBest");

	UITM_DeepDives_Launcher_C_SetPersonalBest_Params params;
	params.TotalSeconds = TotalSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.UpdateBiomeQuote
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDeepDive**              InDeepDive                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_Launcher_C::UpdateBiomeQuote(class UDeepDive** InDeepDive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.UpdateBiomeQuote");

	UITM_DeepDives_Launcher_C_UpdateBiomeQuote_Params params;
	params.InDeepDive = InDeepDive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetButtonsEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bInIsEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  DisabledExplanation            (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_DeepDives_Launcher_C::SetButtonsEnabled(bool* bInIsEnabled, struct FText* DisabledExplanation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetButtonsEnabled");

	UITM_DeepDives_Launcher_C_SetButtonsEnabled_Params params;
	params.bInIsEnabled = bInIsEnabled;
	params.DisabledExplanation = DisabledExplanation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_Launcher_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.Refresh");

	UITM_DeepDives_Launcher_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.GetDeepDive
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDeepDive*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDeepDive* UITM_DeepDives_Launcher_C::GetDeepDive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.GetDeepDive");

	UITM_DeepDives_Launcher_C_GetDeepDive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetMovie
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource**           InMovie                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_Launcher_C::SetMovie(class UMediaSource** InMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetMovie");

	UITM_DeepDives_Launcher_C_SetMovie_Params params;
	params.InMovie = InMovie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_Launcher_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.PreConstruct");

	UITM_DeepDives_Launcher_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_DeepDives_Launcher_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.Construct");

	UITM_DeepDives_Launcher_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__LaunchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_DeepDives_Launcher_C::BndEvt__LaunchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__LaunchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UITM_DeepDives_Launcher_C_BndEvt__LaunchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_DeepDives_Launcher_C::BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UITM_DeepDives_Launcher_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_DeepDives_Launcher_C::BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UITM_DeepDives_Launcher_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_Launcher_C::SetHovered(bool* InHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetHovered");

	UITM_DeepDives_Launcher_C_SetHovered_Params params;
	params.InHovered = InHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString*                 OpenedUrl                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UITM_DeepDives_Launcher_C::BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature(class FString* OpenedUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature");

	UITM_DeepDives_Launcher_C_BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature_Params params;
	params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_DeepDives_Launcher_C::BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UITM_DeepDives_Launcher_C_BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_DeepDives_Launcher_C::BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UITM_DeepDives_Launcher_C_BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.ExecuteUbergraph_ITM_DeepDives_Launcher
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_Launcher_C::ExecuteUbergraph_ITM_DeepDives_Launcher(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.ExecuteUbergraph_ITM_DeepDives_Launcher");

	UITM_DeepDives_Launcher_C_ExecuteUbergraph_ITM_DeepDives_Launcher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnJoinMission__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          EliteDeepDive                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_Launcher_C::OnJoinMission__DelegateSignature(bool* EliteDeepDive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnJoinMission__DelegateSignature");

	UITM_DeepDives_Launcher_C_OnJoinMission__DelegateSignature_Params params;
	params.EliteDeepDive = EliteDeepDive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnStartMission__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDeepDive**              DeepDive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_Launcher_C::OnStartMission__DelegateSignature(class UDeepDive** DeepDive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnStartMission__DelegateSignature");

	UITM_DeepDives_Launcher_C_OnStartMission__DelegateSignature_Params params;
	params.DeepDive = DeepDive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
