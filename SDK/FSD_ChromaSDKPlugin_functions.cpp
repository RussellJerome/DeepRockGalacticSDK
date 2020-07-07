// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ChromaSDKPlugin_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Unload
// (Final, Native, Public, BlueprintCallable)

void UChromaSDKPluginAnimation1DObject::Unload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Unload");

	UChromaSDKPluginAnimation1DObject_Unload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Stop
// (Final, Native, Public, BlueprintCallable)

void UChromaSDKPluginAnimation1DObject::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Stop");

	UChromaSDKPluginAnimation1DObject_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.PlayWithOnComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        OnComplete                     (Parm, ZeroConstructor)

void UChromaSDKPluginAnimation1DObject::PlayWithOnComplete(struct FScriptDelegate* OnComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.PlayWithOnComplete");

	UChromaSDKPluginAnimation1DObject_PlayWithOnComplete_Params params;
	params.OnComplete = OnComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Play
// (Final, Native, Public, BlueprintCallable)

void UChromaSDKPluginAnimation1DObject::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Play");

	UChromaSDKPluginAnimation1DObject_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Load
// (Final, Native, Public, BlueprintCallable)

void UChromaSDKPluginAnimation1DObject::Load()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Load");

	UChromaSDKPluginAnimation1DObject_Load_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UChromaSDKPluginAnimation1DObject::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsPlaying");

	UChromaSDKPluginAnimation1DObject_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsLoaded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UChromaSDKPluginAnimation1DObject::IsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsLoaded");

	UChromaSDKPluginAnimation1DObject_IsLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.GetFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FChromaSDKColorFrame1D> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FChromaSDKColorFrame1D> UChromaSDKPluginAnimation1DObject::GetFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.GetFrames");

	UChromaSDKPluginAnimation1DObject_GetFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Unload
// (Final, Native, Public, BlueprintCallable)

void UChromaSDKPluginAnimation2DObject::Unload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Unload");

	UChromaSDKPluginAnimation2DObject_Unload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Stop
// (Final, Native, Public, BlueprintCallable)

void UChromaSDKPluginAnimation2DObject::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Stop");

	UChromaSDKPluginAnimation2DObject_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.PlayWithOnComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        OnComplete                     (Parm, ZeroConstructor)

void UChromaSDKPluginAnimation2DObject::PlayWithOnComplete(struct FScriptDelegate* OnComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.PlayWithOnComplete");

	UChromaSDKPluginAnimation2DObject_PlayWithOnComplete_Params params;
	params.OnComplete = OnComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Play
// (Final, Native, Public, BlueprintCallable)

void UChromaSDKPluginAnimation2DObject::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Play");

	UChromaSDKPluginAnimation2DObject_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Load
// (Final, Native, Public, BlueprintCallable)

void UChromaSDKPluginAnimation2DObject::Load()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Load");

	UChromaSDKPluginAnimation2DObject_Load_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UChromaSDKPluginAnimation2DObject::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsPlaying");

	UChromaSDKPluginAnimation2DObject_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsLoaded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UChromaSDKPluginAnimation2DObject::IsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsLoaded");

	UChromaSDKPluginAnimation2DObject_IsLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.GetFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FChromaSDKColorFrame2D> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FChromaSDKColorFrame2D> UChromaSDKPluginAnimation2DObject::GetFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.GetFrames");

	UChromaSDKPluginAnimation2DObject_GetFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetMouseLedColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// EChromaSDKMouseLed*            led                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor*           Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FChromaSDKColors> Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FChromaSDKColors> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::STATIC_SetMouseLedColor(EChromaSDKMouseLed* led, struct FLinearColor* Color, TArray<struct FChromaSDKColors>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetMouseLedColor");

	UChromaSDKPluginBPLibrary_SetMouseLedColor_Params params;
	params.led = led;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyboardKeyColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// EChromaSDKKeyboardKey*         Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor*           Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FChromaSDKColors> Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FChromaSDKColors> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::STATIC_SetKeyboardKeyColor(EChromaSDKKeyboardKey* Key, struct FLinearColor* Color, TArray<struct FChromaSDKColors>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyboardKeyColor");

	UChromaSDKPluginBPLibrary_SetKeyboardKeyColor_Params params;
	params.Key = Key;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsPlatformWindows
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UChromaSDKPluginBPLibrary::STATIC_IsPlatformWindows()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsPlatformWindows");

	UChromaSDKPluginBPLibrary_IsPlatformWindows_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsInitialized
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UChromaSDKPluginBPLibrary::STATIC_IsInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsInitialized");

	UChromaSDKPluginBPLibrary_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxRow
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EChromaSDKDevice2DEnum*        Device                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UChromaSDKPluginBPLibrary::STATIC_GetMaxRow(EChromaSDKDevice2DEnum* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxRow");

	UChromaSDKPluginBPLibrary_GetMaxRow_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxLeds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EChromaSDKDevice1DEnum*        Device                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UChromaSDKPluginBPLibrary::STATIC_GetMaxLeds(EChromaSDKDevice1DEnum* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxLeds");

	UChromaSDKPluginBPLibrary_GetMaxLeds_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxColumn
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EChromaSDKDevice2DEnum*        Device                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UChromaSDKPluginBPLibrary::STATIC_GetMaxColumn(EChromaSDKDevice2DEnum* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxColumn");

	UChromaSDKPluginBPLibrary_GetMaxColumn_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DebugToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FChromaSDKGuid*         EffectId                       (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UChromaSDKPluginBPLibrary::STATIC_DebugToString(struct FChromaSDKGuid* EffectId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DebugToString");

	UChromaSDKPluginBPLibrary_DebugToString_Params params;
	params.EffectId = EffectId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors2D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EChromaSDKDevice2DEnum*        Device                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FChromaSDKColors> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::STATIC_CreateRandomColors2D(EChromaSDKDevice2DEnum* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors2D");

	UChromaSDKPluginBPLibrary_CreateRandomColors2D_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors1D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EChromaSDKDevice1DEnum*        Device                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FLinearColor>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FLinearColor> UChromaSDKPluginBPLibrary::STATIC_CreateRandomColors1D(EChromaSDKDevice1DEnum* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors1D");

	UChromaSDKPluginBPLibrary_CreateRandomColors1D_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors2D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EChromaSDKDevice2DEnum*        Device                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FChromaSDKColors> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::STATIC_CreateColors2D(EChromaSDKDevice2DEnum* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors2D");

	UChromaSDKPluginBPLibrary_CreateColors2D_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors1D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EChromaSDKDevice1DEnum*        Device                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FLinearColor>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FLinearColor> UChromaSDKPluginBPLibrary::STATIC_CreateColors1D(EChromaSDKDevice1DEnum* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors1D");

	UChromaSDKPluginBPLibrary_CreateColors1D_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKUnInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UChromaSDKPluginBPLibrary::STATIC_ChromaSDKUnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKUnInit");

	UChromaSDKPluginBPLibrary_ChromaSDKUnInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKSetEffect
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FChromaSDKGuid*         EffectId                       (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UChromaSDKPluginBPLibrary::STATIC_ChromaSDKSetEffect(struct FChromaSDKGuid* EffectId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKSetEffect");

	UChromaSDKPluginBPLibrary_ChromaSDKSetEffect_Params params;
	params.EffectId = EffectId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UChromaSDKPluginBPLibrary::STATIC_ChromaSDKInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInit");

	UChromaSDKPluginBPLibrary_ChromaSDKInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKDeleteEffect
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FChromaSDKGuid*         EffectId                       (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UChromaSDKPluginBPLibrary::STATIC_ChromaSDKDeleteEffect(struct FChromaSDKGuid* EffectId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKDeleteEffect");

	UChromaSDKPluginBPLibrary_ChromaSDKDeleteEffect_Params params;
	params.EffectId = EffectId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectStatic
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// EChromaSDKDeviceEnum*          Device                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor*           Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FChromaSDKEffectResult  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectStatic(EChromaSDKDeviceEnum* Device, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectStatic");

	UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectStatic_Params params;
	params.Device = Device;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectNone
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EChromaSDKDeviceEnum*          Device                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FChromaSDKEffectResult  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectNone(EChromaSDKDeviceEnum* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectNone");

	UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectNone_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom2D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EChromaSDKDevice2DEnum*        Device                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FChromaSDKColors>* Colors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FChromaSDKEffectResult  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectCustom2D(EChromaSDKDevice2DEnum* Device, TArray<struct FChromaSDKColors>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom2D");

	UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom2D_Params params;
	params.Device = Device;
	params.Colors = Colors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom1D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EChromaSDKDevice1DEnum*        Device                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FLinearColor>*   Colors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FChromaSDKEffectResult  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectCustom1D(EChromaSDKDevice1DEnum* Device, TArray<struct FLinearColor>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom1D");

	UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom1D_Params params;
	params.Device = Device;
	params.Colors = Colors;

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
