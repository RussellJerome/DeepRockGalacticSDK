// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Countdown_Extraction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.FormatTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UHUD_Countdown_Extraction_C::FormatTime(int* Time, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.FormatTime");

	UHUD_Countdown_Extraction_C_FormatTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.CountdownStarted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  countdownText                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUD_Countdown_Extraction_C::CountdownStarted(struct FText* countdownText)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.CountdownStarted");

	UHUD_Countdown_Extraction_C_CountdownStarted_Params params;
	params.countdownText = countdownText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownTimeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SecondsLeft                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Countdown_Extraction_C::OnCountdownTimeChanged(int* SecondsLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownTimeChanged");

	UHUD_Countdown_Extraction_C_OnCountdownTimeChanged_Params params;
	params.SecondsLeft = SecondsLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_Countdown_Extraction_C::OnCountdownFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownFinished");

	UHUD_Countdown_Extraction_C_OnCountdownFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Countdown_Extraction_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.Construct");

	UHUD_Countdown_Extraction_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Countdown_Extraction_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.PreConstruct");

	UHUD_Countdown_Extraction_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.ExecuteUbergraph_HUD_Countdown_Extraction
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Countdown_Extraction_C::ExecuteUbergraph_HUD_Countdown_Extraction(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.ExecuteUbergraph_HUD_Countdown_Extraction");

	UHUD_Countdown_Extraction_C_ExecuteUbergraph_HUD_Countdown_Extraction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
