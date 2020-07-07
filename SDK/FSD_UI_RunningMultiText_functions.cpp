// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_RunningMultiText_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_RunningMultiText.UI_RunningMultiText_C.PlayCue
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundCue**              InSound                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RunningMultiText_C::PlayCue(class USoundCue** InSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.PlayCue");

	UUI_RunningMultiText_C_PlayCue_Params params;
	params.InSound = InSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RunningMultiText.UI_RunningMultiText_C.InitRun
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_RunningMultiText_C::InitRun()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.InitRun");

	UUI_RunningMultiText_C_InitRun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RunningMultiText.UI_RunningMultiText_C.SetNextLine
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_RunningMultiText_C::SetNextLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.SetNextLine");

	UUI_RunningMultiText_C_SetNextLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RunningMultiText.UI_RunningMultiText_C.SetRunnerProgress
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InProgress                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Finished                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_RunningMultiText_C::SetRunnerProgress(float* InProgress, bool* Finished)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.SetRunnerProgress");

	UUI_RunningMultiText_C_SetRunnerProgress_Params params;
	params.InProgress = InProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Finished != nullptr)
		*Finished = params.Finished;
}


// Function UI_RunningMultiText.UI_RunningMultiText_C.SetTextRunnerActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Inactive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RunningMultiText_C::SetTextRunnerActive(bool* Inactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.SetTextRunnerActive");

	UUI_RunningMultiText_C_SetTextRunnerActive_Params params;
	params.Inactive = Inactive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RunningMultiText.UI_RunningMultiText_C.SetTexts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           InTexts                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_RunningMultiText_C::SetTexts(TArray<struct FText>* InTexts)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.SetTexts");

	UUI_RunningMultiText_C_SetTexts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTexts != nullptr)
		*InTexts = params.InTexts;
}


// Function UI_RunningMultiText.UI_RunningMultiText_C.OnTick_B06C42A944ABEA2C4BF8E7AF24421023
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NormalizedTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RunningMultiText_C::OnTick_B06C42A944ABEA2C4BF8E7AF24421023(float* DeltaTime, float* NormalizedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.OnTick_B06C42A944ABEA2C4BF8E7AF24421023");

	UUI_RunningMultiText_C_OnTick_B06C42A944ABEA2C4BF8E7AF24421023_Params params;
	params.DeltaTime = DeltaTime;
	params.NormalizedTime = NormalizedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RunningMultiText.UI_RunningMultiText_C.Completed_B06C42A944ABEA2C4BF8E7AF24421023
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NormalizedTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RunningMultiText_C::Completed_B06C42A944ABEA2C4BF8E7AF24421023(float* DeltaTime, float* NormalizedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.Completed_B06C42A944ABEA2C4BF8E7AF24421023");

	UUI_RunningMultiText_C_Completed_B06C42A944ABEA2C4BF8E7AF24421023_Params params;
	params.DeltaTime = DeltaTime;
	params.NormalizedTime = NormalizedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RunningMultiText.UI_RunningMultiText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RunningMultiText_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.PreConstruct");

	UUI_RunningMultiText_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RunningMultiText.UI_RunningMultiText_C.DoRun
// (BlueprintCallable, BlueprintEvent)

void UUI_RunningMultiText_C::DoRun()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.DoRun");

	UUI_RunningMultiText_C_DoRun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RunningMultiText.UI_RunningMultiText_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_RunningMultiText_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.Destruct");

	UUI_RunningMultiText_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RunningMultiText.UI_RunningMultiText_C.ExecuteUbergraph_UI_RunningMultiText
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RunningMultiText_C::ExecuteUbergraph_UI_RunningMultiText(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RunningMultiText.UI_RunningMultiText_C.ExecuteUbergraph_UI_RunningMultiText");

	UUI_RunningMultiText_C_ExecuteUbergraph_UI_RunningMultiText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
