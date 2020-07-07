// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_FSDMixer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FSDMixer.FSDMixerBlueprintEventSource.OnButtonNativeEvent
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FMixerButtonInput*      Button                         (ConstParm, Parm, OutParm, ReferenceParm)

void UFSDMixerBlueprintEventSource::OnButtonNativeEvent(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDMixer.FSDMixerBlueprintEventSource.OnButtonNativeEvent");

	UFSDMixerBlueprintEventSource_OnButtonNativeEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FSDMixer.MixerWrapper.TriggerButtonCooldown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString*                 ControlID                      (Parm, ZeroConstructor)
// int*                           Seconds                        (Parm, ZeroConstructor, IsPlainOldData)

void UMixerWrapper::TriggerButtonCooldown(class FString* ControlID, int* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDMixer.MixerWrapper.TriggerButtonCooldown");

	UMixerWrapper_TriggerButtonCooldown_Params params;
	params.ControlID = ControlID;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FSDMixer.MixerWrapper.StopMixer
// (Final, Native, Public, BlueprintCallable)

void UMixerWrapper::StopMixer()
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDMixer.MixerWrapper.StopMixer");

	UMixerWrapper_StopMixer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FSDMixer.MixerWrapper.StartMixer
// (Final, Native, Public, BlueprintCallable)

void UMixerWrapper::StartMixer()
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDMixer.MixerWrapper.StartMixer");

	UMixerWrapper_StartMixer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FSDMixer.MixerWrapper.SetStartScene
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString*                 Scene                          (Parm, ZeroConstructor)

void UMixerWrapper::SetStartScene(class FString* Scene)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDMixer.MixerWrapper.SetStartScene");

	UMixerWrapper_SetStartScene_Params params;
	params.Scene = Scene;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FSDMixer.MixerWrapper.SetMixerReady
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          ready                          (Parm, ZeroConstructor, IsPlainOldData)

void UMixerWrapper::SetMixerReady(bool* ready)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDMixer.MixerWrapper.SetMixerReady");

	UMixerWrapper_SetMixerReady_Params params;
	params.ready = ready;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FSDMixer.MixerWrapper.ChangeScene
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString*                 Scene                          (Parm, ZeroConstructor)

void UMixerWrapper::ChangeScene(class FString* Scene)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDMixer.MixerWrapper.ChangeScene");

	UMixerWrapper_ChangeScene_Params params;
	params.Scene = Scene;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FSDMixer.MixerWrapper.CaptureTransaction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMixerButtonInput*      Input                          (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMixerWrapper::CaptureTransaction(struct FMixerButtonInput* Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDMixer.MixerWrapper.CaptureTransaction");

	UMixerWrapper_CaptureTransaction_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
