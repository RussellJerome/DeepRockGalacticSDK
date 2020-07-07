// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_AudioControl_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AudioControl.BP_AudioControl_C.DoFadeIronWill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShouldFade                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AudioControl_C::DoFadeIronWill(bool* ShouldFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioControl.BP_AudioControl_C.DoFadeIronWill");

	UBP_AudioControl_C_DoFadeIronWill_Params params;
	params.ShouldFade = ShouldFade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AudioControl.BP_AudioControl_C.DoFadeDownState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          DoFade                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AudioControl_C::DoFadeDownState(bool* DoFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioControl.BP_AudioControl_C.DoFadeDownState");

	UBP_AudioControl_C_DoFadeDownState_Params params;
	params.DoFade = DoFade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AudioControl.BP_AudioControl_C.DoFadeLowHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShouldFade                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AudioControl_C::DoFadeLowHealth(bool* ShouldFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioControl.BP_AudioControl_C.DoFadeLowHealth");

	UBP_AudioControl_C_DoFadeLowHealth_Params params;
	params.ShouldFade = ShouldFade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AudioControl.BP_AudioControl_C.HealthAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USubmixEffectSubmixEQPreset** EQPreset                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HealthPercentage               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AudioControl_C::HealthAudio(class USubmixEffectSubmixEQPreset** EQPreset, float* HealthPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioControl.BP_AudioControl_C.HealthAudio");

	UBP_AudioControl_C_HealthAudio_Params params;
	params.EQPreset = EQPreset;
	params.HealthPercentage = HealthPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AudioControl.BP_AudioControl_C.ShouldSetTimestamp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          IsActivate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AudioControl_C::ShouldSetTimestamp(bool* IsActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioControl.BP_AudioControl_C.ShouldSetTimestamp");

	UBP_AudioControl_C_ShouldSetTimestamp_Params params;
	params.IsActivate = IsActivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AudioControl.BP_AudioControl_C.SubmixCompressor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix**           Master_Listen_Submix           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Threshold                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Attack                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Release                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FCompressorData> CompressorData                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_AudioControl_C::SubmixCompressor(float* Volume, class USoundSubmix** Master_Listen_Submix, float* Threshold, float* Attack, float* Release, TArray<struct FCompressorData>* CompressorData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioControl.BP_AudioControl_C.SubmixCompressor");

	UBP_AudioControl_C_SubmixCompressor_Params params;
	params.Volume = Volume;
	params.Master_Listen_Submix = Master_Listen_Submix;
	params.Threshold = Threshold;
	params.Attack = Attack;
	params.Release = Release;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CompressorData != nullptr)
		*CompressorData = params.CompressorData;
}


// Function BP_AudioControl.BP_AudioControl_C.SubmixDucking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundSubmix**           ListenSubmix                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ListenAttack_Max_200           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ListenRelease_Max_1000         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ListenDuckMultiply             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USubmixEffectSubmixEQPreset** TargetDuckingEQ                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Multiply_Value_Print           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat**            DuckingCurve                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat**            AttackCurve                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat**            ReleaseCurve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ListenArrayElement             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AudioControl_C::SubmixDucking(class USoundSubmix** ListenSubmix, int* ListenAttack_Max_200, int* ListenRelease_Max_1000, float* ListenDuckMultiply, class USubmixEffectSubmixEQPreset** TargetDuckingEQ, bool* Multiply_Value_Print, class UCurveFloat** DuckingCurve, class UCurveFloat** AttackCurve, class UCurveFloat** ReleaseCurve, float* ListenArrayElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioControl.BP_AudioControl_C.SubmixDucking");

	UBP_AudioControl_C_SubmixDucking_Params params;
	params.ListenSubmix = ListenSubmix;
	params.ListenAttack_Max_200 = ListenAttack_Max_200;
	params.ListenRelease_Max_1000 = ListenRelease_Max_1000;
	params.ListenDuckMultiply = ListenDuckMultiply;
	params.TargetDuckingEQ = TargetDuckingEQ;
	params.Multiply_Value_Print = Multiply_Value_Print;
	params.DuckingCurve = DuckingCurve;
	params.AttackCurve = AttackCurve;
	params.ReleaseCurve = ReleaseCurve;
	params.ListenArrayElement = ListenArrayElement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AudioControl.BP_AudioControl_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AudioControl_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioControl.BP_AudioControl_C.ReceiveTick");

	UBP_AudioControl_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AudioControl.BP_AudioControl_C.DamageTaken
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AudioControl_C::DamageTaken(float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioControl.BP_AudioControl_C.DamageTaken");

	UBP_AudioControl_C_DamageTaken_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AudioControl.BP_AudioControl_C.ExplosionsEnvelopeFollower
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>*                 Envelope                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_AudioControl_C::ExplosionsEnvelopeFollower(TArray<float>* Envelope)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioControl.BP_AudioControl_C.ExplosionsEnvelopeFollower");

	UBP_AudioControl_C_ExplosionsEnvelopeFollower_Params params;
	params.Envelope = Envelope;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AudioControl.BP_AudioControl_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_AudioControl_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioControl.BP_AudioControl_C.ReceiveBeginPlay");

	UBP_AudioControl_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AudioControl.BP_AudioControl_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AudioControl_C::CustomEvent_3(float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioControl.BP_AudioControl_C.CustomEvent_3");

	UBP_AudioControl_C_CustomEvent_3_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AudioControl.BP_AudioControl_C.ExecuteUbergraph_BP_AudioControl
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AudioControl_C::ExecuteUbergraph_BP_AudioControl(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioControl.BP_AudioControl_C.ExecuteUbergraph_BP_AudioControl");

	UBP_AudioControl_C_ExecuteUbergraph_BP_AudioControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
