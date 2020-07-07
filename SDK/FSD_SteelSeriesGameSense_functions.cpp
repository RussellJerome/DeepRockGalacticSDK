// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_SteelSeriesGameSense_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SteelSeriesGameSense.SSGS_ClientBPLibrary.Stop
// (Final, Native, Static, Public, BlueprintCallable)

void USSGS_ClientBPLibrary::STATIC_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_ClientBPLibrary.Stop");

	USSGS_ClientBPLibrary_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteelSeriesGameSense.SSGS_ClientBPLibrary.Start
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USSGS_ClientBPLibrary::STATIC_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_ClientBPLibrary.Start");

	USSGS_ClientBPLibrary_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_ClientBPLibrary.SendEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString*                 GameName                       (Parm, ZeroConstructor)
// class FString*                 EventName                      (Parm, ZeroConstructor)
// struct FSSGS_EventData*        Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void USSGS_ClientBPLibrary::STATIC_SendEvent(class FString* GameName, class FString* EventName, struct FSSGS_EventData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_ClientBPLibrary.SendEvent");

	USSGS_ClientBPLibrary_SendEvent_Params params;
	params.GameName = GameName;
	params.EventName = EventName;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteelSeriesGameSense.SSGS_ClientBPLibrary.RemoveGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 GameName                       (Parm, ZeroConstructor)

void USSGS_ClientBPLibrary::STATIC_RemoveGame(class FString* GameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_ClientBPLibrary.RemoveGame");

	USSGS_ClientBPLibrary_RemoveGame_Params params;
	params.GameName = GameName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteelSeriesGameSense.SSGS_ClientBPLibrary.RemoveEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 GameName                       (Parm, ZeroConstructor)
// class FString*                 EventName                      (Parm, ZeroConstructor)

void USSGS_ClientBPLibrary::STATIC_RemoveEvent(class FString* GameName, class FString* EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_ClientBPLibrary.RemoveEvent");

	USSGS_ClientBPLibrary_RemoveEvent_Params params;
	params.GameName = GameName;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteelSeriesGameSense.SSGS_ClientBPLibrary.RegisterGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 GameName                       (Parm, ZeroConstructor)
// class FString*                 gameDisplayName                (Parm, ZeroConstructor)

void USSGS_ClientBPLibrary::STATIC_RegisterGame(class FString* GameName, class FString* gameDisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_ClientBPLibrary.RegisterGame");

	USSGS_ClientBPLibrary_RegisterGame_Params params;
	params.GameName = GameName;
	params.gameDisplayName = gameDisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteelSeriesGameSense.SSGS_ClientBPLibrary.RegisterEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 GameName                       (Parm, ZeroConstructor)
// class FString*                 EventName                      (Parm, ZeroConstructor)
// int*                           MinValue                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxValue                       (Parm, ZeroConstructor, IsPlainOldData)
// ESSGS_EventIconId*             iconId                         (Parm, ZeroConstructor, IsPlainOldData)

void USSGS_ClientBPLibrary::STATIC_RegisterEvent(class FString* GameName, class FString* EventName, int* MinValue, int* MaxValue, ESSGS_EventIconId* iconId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_ClientBPLibrary.RegisterEvent");

	USSGS_ClientBPLibrary_RegisterEvent_Params params;
	params.GameName = GameName;
	params.EventName = EventName;
	params.MinValue = MinValue;
	params.MaxValue = MaxValue;
	params.iconId = iconId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteelSeriesGameSense.SSGS_ClientBPLibrary.BindEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString*                 GameName                       (Parm, ZeroConstructor)
// class FString*                 EventName                      (Parm, ZeroConstructor)
// int*                           MinValue                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxValue                       (Parm, ZeroConstructor, IsPlainOldData)
// ESSGS_EventIconId*             iconId                         (Parm, ZeroConstructor, IsPlainOldData)
// class USSGS_HandlerCollection* handlers                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void USSGS_ClientBPLibrary::STATIC_BindEvent(class FString* GameName, class FString* EventName, int* MinValue, int* MaxValue, ESSGS_EventIconId* iconId, class USSGS_HandlerCollection** handlers)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_ClientBPLibrary.BindEvent");

	USSGS_ClientBPLibrary_BindEvent_Params params;
	params.GameName = GameName;
	params.EventName = EventName;
	params.MinValue = MinValue;
	params.MaxValue = MaxValue;
	params.iconId = iconId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (handlers != nullptr)
		*handlers = params.handlers;
}


// Function SteelSeriesGameSense.SSGS_ColorEffectSpecificationGradient.MakeGradientColorEffect
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_RGB*              Zero                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSSGS_RGB*              hundred                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USSGS_ColorEffectSpecificationGradient* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USSGS_ColorEffectSpecificationGradient* USSGS_ColorEffectSpecificationGradient::STATIC_MakeGradientColorEffect(struct FSSGS_RGB* Zero, struct FSSGS_RGB* hundred)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_ColorEffectSpecificationGradient.MakeGradientColorEffect");

	USSGS_ColorEffectSpecificationGradient_MakeGradientColorEffect_Params params;
	params.Zero = Zero;
	params.hundred = hundred;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_ColorEffectSpecificationRanges.MakeStaticColorRange
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           Low                            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           High                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FSSGS_RGB*              Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSSGS_ColorRange        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSSGS_ColorRange USSGS_ColorEffectSpecificationRanges::STATIC_MakeStaticColorRange(int* Low, int* High, struct FSSGS_RGB* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_ColorEffectSpecificationRanges.MakeStaticColorRange");

	USSGS_ColorEffectSpecificationRanges_MakeStaticColorRange_Params params;
	params.Low = Low;
	params.High = High;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_ColorEffectSpecificationRanges.MakeRangeColorEffect
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FSSGS_ColorRange>* V                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USSGS_ColorEffectSpecificationRanges* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USSGS_ColorEffectSpecificationRanges* USSGS_ColorEffectSpecificationRanges::STATIC_MakeRangeColorEffect(TArray<struct FSSGS_ColorRange>* V)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_ColorEffectSpecificationRanges.MakeRangeColorEffect");

	USSGS_ColorEffectSpecificationRanges_MakeRangeColorEffect_Params params;
	params.V = V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_ColorEffectSpecificationRanges.MakeGradientColorRange
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           Low                            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           High                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FSSGS_RGB*              Zero                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSSGS_RGB*              hundred                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSSGS_ColorRange        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSSGS_ColorRange USSGS_ColorEffectSpecificationRanges::STATIC_MakeGradientColorRange(int* Low, int* High, struct FSSGS_RGB* Zero, struct FSSGS_RGB* hundred)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_ColorEffectSpecificationRanges.MakeGradientColorRange");

	USSGS_ColorEffectSpecificationRanges_MakeGradientColorRange_Params params;
	params.Low = Low;
	params.High = High;
	params.Zero = Zero;
	params.hundred = hundred;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_ColorEffectSpecificationStatic.MakeStaticColorEffect
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_RGB*              Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USSGS_ColorEffectSpecificationStatic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USSGS_ColorEffectSpecificationStatic* USSGS_ColorEffectSpecificationStatic::STATIC_MakeStaticColorEffect(struct FSSGS_RGB* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_ColorEffectSpecificationStatic.MakeStaticColorEffect");

	USSGS_ColorEffectSpecificationStatic_MakeStaticColorEffect_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_z_row
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgbperkeyzones_z_row()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_z_row");

	USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_z_row_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_q_row
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgbperkeyzones_q_row()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_q_row");

	USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_q_row_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_number_keys
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgbperkeyzones_number_keys()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_number_keys");

	USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_number_keys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_nav_cluster
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgbperkeyzones_nav_cluster()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_nav_cluster");

	USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_nav_cluster_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_main_keyboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgbperkeyzones_main_keyboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_main_keyboard");

	USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_main_keyboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_macro_keys
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgbperkeyzones_macro_keys()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_macro_keys");

	USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_macro_keys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_keypad_nums
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgbperkeyzones_keypad_nums()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_keypad_nums");

	USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_keypad_nums_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_keypad
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgbperkeyzones_keypad()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_keypad");

	USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_keypad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_function_keys
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgbperkeyzones_function_keys()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_function_keys");

	USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_function_keys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_custom
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<unsigned char>*         V                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgbperkeyzones_custom(TArray<unsigned char>* V)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_custom");

	USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_custom_Params params;
	params.V = V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_arrows
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgbperkeyzones_arrows()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_arrows");

	USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_arrows_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_all
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgbperkeyzones_all()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_all");

	USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_all_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_a_row
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgbperkeyzones_a_row()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_a_row");

	USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_a_row_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb5zone_two
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgb5zone_two()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb5zone_two");

	USSGS_IlluminationDeviceZoneFactory_make_rgb5zone_two_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb5zone_three
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgb5zone_three()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb5zone_three");

	USSGS_IlluminationDeviceZoneFactory_make_rgb5zone_three_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb5zone_one
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgb5zone_one()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb5zone_one");

	USSGS_IlluminationDeviceZoneFactory_make_rgb5zone_one_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb5zone_four
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgb5zone_four()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb5zone_four");

	USSGS_IlluminationDeviceZoneFactory_make_rgb5zone_four_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb5zone_five
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgb5zone_five()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb5zone_five");

	USSGS_IlluminationDeviceZoneFactory_make_rgb5zone_five_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb4zone_two
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgb4zone_two()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb4zone_two");

	USSGS_IlluminationDeviceZoneFactory_make_rgb4zone_two_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb4zone_three
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgb4zone_three()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb4zone_three");

	USSGS_IlluminationDeviceZoneFactory_make_rgb4zone_three_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb4zone_one
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgb4zone_one()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb4zone_one");

	USSGS_IlluminationDeviceZoneFactory_make_rgb4zone_one_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb4zone_four
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgb4zone_four()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb4zone_four");

	USSGS_IlluminationDeviceZoneFactory_make_rgb4zone_four_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb3zone_two
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgb3zone_two()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb3zone_two");

	USSGS_IlluminationDeviceZoneFactory_make_rgb3zone_two_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb3zone_three
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgb3zone_three()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb3zone_three");

	USSGS_IlluminationDeviceZoneFactory_make_rgb3zone_three_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb3zone_one
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgb3zone_one()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb3zone_one");

	USSGS_IlluminationDeviceZoneFactory_make_rgb3zone_one_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb2zone_two
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgb2zone_two()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb2zone_two");

	USSGS_IlluminationDeviceZoneFactory_make_rgb2zone_two_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb2zone_one
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgb2zone_one()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb2zone_one");

	USSGS_IlluminationDeviceZoneFactory_make_rgb2zone_one_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb1zone_one
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_rgb1zone_one()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb1zone_one");

	USSGS_IlluminationDeviceZoneFactory_make_rgb1zone_one_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_mouse_wheel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_mouse_wheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_mouse_wheel");

	USSGS_IlluminationDeviceZoneFactory_make_mouse_wheel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_mouse_logo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_mouse_logo()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_mouse_logo");

	USSGS_IlluminationDeviceZoneFactory_make_mouse_logo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_keyboad_number_keys
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_keyboad_number_keys()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_keyboad_number_keys");

	USSGS_IlluminationDeviceZoneFactory_make_keyboad_number_keys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_keyboad_main_keyboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_keyboad_main_keyboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_keyboad_main_keyboard");

	USSGS_IlluminationDeviceZoneFactory_make_keyboad_main_keyboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_keyboad_macro_keys
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_keyboad_macro_keys()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_keyboad_macro_keys");

	USSGS_IlluminationDeviceZoneFactory_make_keyboad_macro_keys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_keyboad_keypad
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_keyboad_keypad()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_keyboad_keypad");

	USSGS_IlluminationDeviceZoneFactory_make_keyboad_keypad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_keyboad_function_keys
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_keyboad_function_keys()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_keyboad_function_keys");

	USSGS_IlluminationDeviceZoneFactory_make_keyboad_function_keys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_indicator_one
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_indicator_one()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_indicator_one");

	USSGS_IlluminationDeviceZoneFactory_make_indicator_one_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_headset_earcups
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_IlluminationDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_IlluminationDeviceZone USSGS_IlluminationDeviceZoneFactory::STATIC_make_headset_earcups()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_headset_earcups");

	USSGS_IlluminationDeviceZoneFactory_make_headset_earcups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_TactileDeviceZoneFactory.make_tactile_one
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_TactileDeviceZone ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_TactileDeviceZone USSGS_TactileDeviceZoneFactory::STATIC_make_tactile_one()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_TactileDeviceZoneFactory.make_tactile_one");

	USSGS_TactileDeviceZoneFactory_make_tactile_one_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_HandlerCollection.MakeHandlerCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USSGS_HandlerCollection* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USSGS_HandlerCollection* USSGS_HandlerCollection::STATIC_MakeHandlerCollection()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_HandlerCollection.MakeHandlerCollection");

	USSGS_HandlerCollection_MakeHandlerCollection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_HandlerCollection.AddTactileHandler
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSSGS_TactileDeviceZone* deviceZone                     (ConstParm, Parm, OutParm, ReferenceParm)
// class USSGS_TactilePatternSpecification* pattern                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USSGS_RateSpecification** Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void USSGS_HandlerCollection::AddTactileHandler(struct FSSGS_TactileDeviceZone* deviceZone, class USSGS_RateSpecification** Rate, class USSGS_TactilePatternSpecification** pattern)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_HandlerCollection.AddTactileHandler");

	USSGS_HandlerCollection_AddTactileHandler_Params params;
	params.deviceZone = deviceZone;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pattern != nullptr)
		*pattern = params.pattern;
}


// Function SteelSeriesGameSense.SSGS_HandlerCollection.AddColorHandler
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSSGS_IlluminationDeviceZone* deviceZone                     (ConstParm, Parm, OutParm, ReferenceParm)
// ESSGS_IlluminationMode*        Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// class USSGS_ColorEffectSpecification* colorSpec                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USSGS_RateSpecification** rateSpec                       (Parm, ZeroConstructor, IsPlainOldData)

void USSGS_HandlerCollection::AddColorHandler(struct FSSGS_IlluminationDeviceZone* deviceZone, ESSGS_IlluminationMode* Mode, class USSGS_RateSpecification** rateSpec, class USSGS_ColorEffectSpecification** colorSpec)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_HandlerCollection.AddColorHandler");

	USSGS_HandlerCollection_AddColorHandler_Params params;
	params.deviceZone = deviceZone;
	params.Mode = Mode;
	params.rateSpec = rateSpec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (colorSpec != nullptr)
		*colorSpec = params.colorSpec;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_tripleclick_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_tripleclick_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_tripleclick_101");

	USSGS_PredefinedTactilePatternFactory_pattern_tripleclick_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsmooth2_0to50
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampupshortsmooth2_0to50()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsmooth2_0to50");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupshortsmooth2_0to50_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsmooth2_0to100
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampupshortsmooth2_0to100()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsmooth2_0to100");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupshortsmooth2_0to100_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsmooth1_0to50
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampupshortsmooth1_0to50()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsmooth1_0to50");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupshortsmooth1_0to50_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsmooth1_0to100
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampupshortsmooth1_0to100()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsmooth1_0to100");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupshortsmooth1_0to100_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsharp2_0to50
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampupshortsharp2_0to50()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsharp2_0to50");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupshortsharp2_0to50_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsharp2_0to100
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampupshortsharp2_0to100()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsharp2_0to100");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupshortsharp2_0to100_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsharp1_0to50
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampupshortsharp1_0to50()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsharp1_0to50");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupshortsharp1_0to50_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsharp1_0to100
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampupshortsharp1_0to100()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsharp1_0to100");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupshortsharp1_0to100_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsmooth2_0to50
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampupmediumsmooth2_0to50()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsmooth2_0to50");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupmediumsmooth2_0to50_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsmooth2_0to100
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampupmediumsmooth2_0to100()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsmooth2_0to100");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupmediumsmooth2_0to100_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsmooth1_0to50
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampupmediumsmooth1_0to50()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsmooth1_0to50");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupmediumsmooth1_0to50_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsmooth1_0to100
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampupmediumsmooth1_0to100()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsmooth1_0to100");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupmediumsmooth1_0to100_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsharp2_0to50
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampupmediumsharp2_0to50()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsharp2_0to50");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupmediumsharp2_0to50_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsharp2_0to100
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampupmediumsharp2_0to100()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsharp2_0to100");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupmediumsharp2_0to100_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsharp1_0to50
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampupmediumsharp1_0to50()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsharp1_0to50");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupmediumsharp1_0to50_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsharp1_0to100
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampupmediumsharp1_0to100()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsharp1_0to100");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupmediumsharp1_0to100_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsmooth2_0to50
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampuplongsmooth2_0to50()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsmooth2_0to50");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampuplongsmooth2_0to50_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsmooth2_0to100
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampuplongsmooth2_0to100()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsmooth2_0to100");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampuplongsmooth2_0to100_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsmooth1_0to50
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampuplongsmooth1_0to50()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsmooth1_0to50");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampuplongsmooth1_0to50_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsmooth1_0to100
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampuplongsmooth1_0to100()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsmooth1_0to100");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampuplongsmooth1_0to100_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsharp2_0to50
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampuplongsharp2_0to50()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsharp2_0to50");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampuplongsharp2_0to50_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsharp2_0to100
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampuplongsharp2_0to100()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsharp2_0to100");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampuplongsharp2_0to100_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsharp1_0to50
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampuplongsharp1_0to50()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsharp1_0to50");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampuplongsharp1_0to50_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsharp1_0to100
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampuplongsharp1_0to100()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsharp1_0to100");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampuplongsharp1_0to100_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsmooth2_50to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownshortsmooth2_50to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsmooth2_50to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownshortsmooth2_50to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsmooth2_100to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownshortsmooth2_100to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsmooth2_100to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownshortsmooth2_100to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsmooth1_50to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownshortsmooth1_50to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsmooth1_50to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownshortsmooth1_50to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsmooth1_100to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownshortsmooth1_100to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsmooth1_100to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownshortsmooth1_100to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsharp2_50to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownshortsharp2_50to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsharp2_50to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownshortsharp2_50to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsharp2_100to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownshortsharp2_100to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsharp2_100to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownshortsharp2_100to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsharp1_50to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownshortsharp1_50to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsharp1_50to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownshortsharp1_50to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsharp1_100to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownshortsharp1_100to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsharp1_100to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownshortsharp1_100to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsmooth2_50to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownmediumsmooth2_50to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsmooth2_50to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownmediumsmooth2_50to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsmooth2_100to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownmediumsmooth2_100to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsmooth2_100to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownmediumsmooth2_100to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsmooth1_50to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownmediumsmooth1_50to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsmooth1_50to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownmediumsmooth1_50to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsmooth1_100to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownmediumsmooth1_100to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsmooth1_100to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownmediumsmooth1_100to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsharp2_50to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownmediumsharp2_50to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsharp2_50to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownmediumsharp2_50to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsharp2_100to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownmediumsharp2_100to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsharp2_100to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownmediumsharp2_100to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsharp1_50to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownmediumsharp1_50to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsharp1_50to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownmediumsharp1_50to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsharp1_100to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownmediumsharp1_100to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsharp1_100to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownmediumsharp1_100to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsmooth2_50to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownlongsmooth2_50to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsmooth2_50to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownlongsmooth2_50to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsmooth2_100to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownlongsmooth2_100to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsmooth2_100to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownlongsmooth2_100to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsmooth1_50to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownlongsmooth1_50to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsmooth1_50to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownlongsmooth1_50to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsmooth1_100to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownlongsmooth1_100to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsmooth1_100to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownlongsmooth1_100to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsharp2_50to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownlongsharp2_50to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsharp2_50to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownlongsharp2_50to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsharp2_100to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownlongsharp2_100to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsharp2_100to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownlongsharp2_100to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsharp1_50to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownlongsharp1_50to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsharp1_50to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownlongsharp1_50to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsharp1_100to0
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionrampdownlongsharp1_100to0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsharp1_100to0");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownlongsharp1_100to0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum6_11
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionhum6_11()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum6_11");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionhum6_11_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum5_21
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionhum5_21()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum5_21");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionhum5_21_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum4_41
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionhum4_41()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum4_41");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionhum4_41_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum3_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionhum3_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum3_61");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionhum3_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum2_81
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionhum2_81()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum2_81");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionhum2_81_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum1_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionhum1_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum1_101");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionhum1_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick6_11
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionclick6_11()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick6_11");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionclick6_11_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick5_21
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionclick5_21()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick5_21");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionclick5_21_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick4_41
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionclick4_41()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick4_41");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionclick4_41_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick3_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionclick3_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick3_61");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionclick3_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick2_81
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionclick2_81()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick2_81");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionclick2_81_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick1_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_transitionclick1_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick1_101");

	USSGS_PredefinedTactilePatternFactory_pattern_transitionclick1_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_strongclick_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick_61");

	USSGS_PredefinedTactilePatternFactory_pattern_strongclick_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick_31
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_strongclick_31()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick_31");

	USSGS_PredefinedTactilePatternFactory_pattern_strongclick_31_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_strongclick_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick_101");

	USSGS_PredefinedTactilePatternFactory_pattern_strongclick_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick4_31
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_strongclick4_31()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick4_31");

	USSGS_PredefinedTactilePatternFactory_pattern_strongclick4_31_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick3_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_strongclick3_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick3_61");

	USSGS_PredefinedTactilePatternFactory_pattern_strongclick3_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick2_81
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_strongclick2_81()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick2_81");

	USSGS_PredefinedTactilePatternFactory_pattern_strongclick2_81_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick1_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_strongclick1_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick1_101");

	USSGS_PredefinedTactilePatternFactory_pattern_strongclick1_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongbuzz_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_strongbuzz_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongbuzz_101");

	USSGS_PredefinedTactilePatternFactory_pattern_strongbuzz_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_softfuzz_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_softfuzz_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_softfuzz_61");

	USSGS_PredefinedTactilePatternFactory_pattern_softfuzz_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_softbump_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_softbump_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_softbump_61");

	USSGS_PredefinedTactilePatternFactory_pattern_softbump_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_softbump_31
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_softbump_31()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_softbump_31");

	USSGS_PredefinedTactilePatternFactory_pattern_softbump_31_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_softbump_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_softbump_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_softbump_101");

	USSGS_PredefinedTactilePatternFactory_pattern_softbump_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_smoothhum5nokickorbrakepulse_11
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_smoothhum5nokickorbrakepulse_11()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_smoothhum5nokickorbrakepulse_11");

	USSGS_PredefinedTactilePatternFactory_pattern_smoothhum5nokickorbrakepulse_11_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_smoothhum4nokickorbrakepulse_21
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_smoothhum4nokickorbrakepulse_21()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_smoothhum4nokickorbrakepulse_21");

	USSGS_PredefinedTactilePatternFactory_pattern_smoothhum4nokickorbrakepulse_21_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_smoothhum3nokickorbrakepulse_31
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_smoothhum3nokickorbrakepulse_31()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_smoothhum3nokickorbrakepulse_31");

	USSGS_PredefinedTactilePatternFactory_pattern_smoothhum3nokickorbrakepulse_31_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_smoothhum2nokickorbrakepulse_41
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_smoothhum2nokickorbrakepulse_41()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_smoothhum2nokickorbrakepulse_41");

	USSGS_PredefinedTactilePatternFactory_pattern_smoothhum2nokickorbrakepulse_41_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_smoothhum1nokickorbrakepulse_51
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_smoothhum1nokickorbrakepulse_51()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_smoothhum1nokickorbrakepulse_51");

	USSGS_PredefinedTactilePatternFactory_pattern_smoothhum1nokickorbrakepulse_51_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoublesharptick3_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_shortdoublesharptick3_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoublesharptick3_61");

	USSGS_PredefinedTactilePatternFactory_pattern_shortdoublesharptick3_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoublesharptick2_81
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_shortdoublesharptick2_81()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoublesharptick2_81");

	USSGS_PredefinedTactilePatternFactory_pattern_shortdoublesharptick2_81_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoublesharptick1_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_shortdoublesharptick1_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoublesharptick1_101");

	USSGS_PredefinedTactilePatternFactory_pattern_shortdoublesharptick1_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickstrong4_31
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_shortdoubleclickstrong4_31()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickstrong4_31");

	USSGS_PredefinedTactilePatternFactory_pattern_shortdoubleclickstrong4_31_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickstrong3_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_shortdoubleclickstrong3_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickstrong3_61");

	USSGS_PredefinedTactilePatternFactory_pattern_shortdoubleclickstrong3_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickstrong2_81
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_shortdoubleclickstrong2_81()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickstrong2_81");

	USSGS_PredefinedTactilePatternFactory_pattern_shortdoubleclickstrong2_81_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickstrong1_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_shortdoubleclickstrong1_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickstrong1_101");

	USSGS_PredefinedTactilePatternFactory_pattern_shortdoubleclickstrong1_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickmedium3_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_shortdoubleclickmedium3_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickmedium3_61");

	USSGS_PredefinedTactilePatternFactory_pattern_shortdoubleclickmedium3_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickmedium2_81
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_shortdoubleclickmedium2_81()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickmedium2_81");

	USSGS_PredefinedTactilePatternFactory_pattern_shortdoubleclickmedium2_81_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickmedium1_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_shortdoubleclickmedium1_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickmedium1_101");

	USSGS_PredefinedTactilePatternFactory_pattern_shortdoubleclickmedium1_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharptick3_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_sharptick3_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharptick3_61");

	USSGS_PredefinedTactilePatternFactory_pattern_sharptick3_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharptick2_81
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_sharptick2_81()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharptick2_81");

	USSGS_PredefinedTactilePatternFactory_pattern_sharptick2_81_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharptick1_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_sharptick1_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharptick1_101");

	USSGS_PredefinedTactilePatternFactory_pattern_sharptick1_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharpclick_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_sharpclick_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharpclick_61");

	USSGS_PredefinedTactilePatternFactory_pattern_sharpclick_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharpclick_31
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_sharpclick_31()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharpclick_31");

	USSGS_PredefinedTactilePatternFactory_pattern_sharpclick_31_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharpclick_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_sharpclick_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharpclick_101");

	USSGS_PredefinedTactilePatternFactory_pattern_sharpclick_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingstrong2_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_pulsingstrong2_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingstrong2_61");

	USSGS_PredefinedTactilePatternFactory_pattern_pulsingstrong2_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingstrong1_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_pulsingstrong1_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingstrong1_101");

	USSGS_PredefinedTactilePatternFactory_pattern_pulsingstrong1_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingsharp2_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_pulsingsharp2_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingsharp2_61");

	USSGS_PredefinedTactilePatternFactory_pattern_pulsingsharp2_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingsharp1_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_pulsingsharp1_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingsharp1_101");

	USSGS_PredefinedTactilePatternFactory_pattern_pulsingsharp1_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingmedium2_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_pulsingmedium2_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingmedium2_61");

	USSGS_PredefinedTactilePatternFactory_pattern_pulsingmedium2_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingmedium1_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_pulsingmedium1_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingmedium1_101");

	USSGS_PredefinedTactilePatternFactory_pattern_pulsingmedium1_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_mediumclick3_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_mediumclick3_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_mediumclick3_61");

	USSGS_PredefinedTactilePatternFactory_pattern_mediumclick3_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_mediumclick2_81
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_mediumclick2_81()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_mediumclick2_81");

	USSGS_PredefinedTactilePatternFactory_pattern_mediumclick2_81_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_mediumclick1_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_mediumclick1_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_mediumclick1_101");

	USSGS_PredefinedTactilePatternFactory_pattern_mediumclick1_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharptick3_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_longdoublesharptick3_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharptick3_61");

	USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharptick3_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharptick2_81
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_longdoublesharptick2_81()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharptick2_81");

	USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharptick2_81_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharptick1_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_longdoublesharptick1_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharptick1_101");

	USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharptick1_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickstrong4_31
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_longdoublesharpclickstrong4_31()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickstrong4_31");

	USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharpclickstrong4_31_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickstrong3_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_longdoublesharpclickstrong3_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickstrong3_61");

	USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharpclickstrong3_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickstrong2_81
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_longdoublesharpclickstrong2_81()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickstrong2_81");

	USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharpclickstrong2_81_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickstrong1_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_longdoublesharpclickstrong1_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickstrong1_101");

	USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharpclickstrong1_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickmedium3_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_longdoublesharpclickmedium3_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickmedium3_61");

	USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharpclickmedium3_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickmedium2_81
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_longdoublesharpclickmedium2_81()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickmedium2_81");

	USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharpclickmedium2_81_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickmedium1_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_longdoublesharpclickmedium1_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickmedium1_101");

	USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharpclickmedium1_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longbuzzforprogrammaticstopping_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_longbuzzforprogrammaticstopping_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longbuzzforprogrammaticstopping_101");

	USSGS_PredefinedTactilePatternFactory_pattern_longbuzzforprogrammaticstopping_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_doubleclick_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_doubleclick_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_doubleclick_61");

	USSGS_PredefinedTactilePatternFactory_pattern_doubleclick_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_doubleclick_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_doubleclick_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_doubleclick_101");

	USSGS_PredefinedTactilePatternFactory_pattern_doubleclick_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzzalert750ms
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_buzzalert750ms()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzzalert750ms");

	USSGS_PredefinedTactilePatternFactory_pattern_buzzalert750ms_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzzalert1000ms
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_buzzalert1000ms()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzzalert1000ms");

	USSGS_PredefinedTactilePatternFactory_pattern_buzzalert1000ms_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzz5_21
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_buzz5_21()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzz5_21");

	USSGS_PredefinedTactilePatternFactory_pattern_buzz5_21_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzz4_41
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_buzz4_41()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzz4_41");

	USSGS_PredefinedTactilePatternFactory_pattern_buzz4_41_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzz3_61
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_buzz3_61()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzz3_61");

	USSGS_PredefinedTactilePatternFactory_pattern_buzz3_61_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzz2_81
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_buzz2_81()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzz2_81");

	USSGS_PredefinedTactilePatternFactory_pattern_buzz2_81_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzz1_101
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FSSGS_PredefinedTactilePattern USSGS_PredefinedTactilePatternFactory::STATIC_pattern_buzz1_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzz1_101");

	USSGS_PredefinedTactilePatternFactory_pattern_buzz1_101_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_RateSpecification.MakeStaticRate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           Frequency                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           repeat_limit                   (Parm, ZeroConstructor, IsPlainOldData)
// class USSGS_RateSpecification* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USSGS_RateSpecification* USSGS_RateSpecification::STATIC_MakeStaticRate(int* Frequency, int* repeat_limit)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_RateSpecification.MakeStaticRate");

	USSGS_RateSpecification_MakeStaticRate_Params params;
	params.Frequency = Frequency;
	params.repeat_limit = repeat_limit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_RateSpecification.MakeRangedRate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FSSGS_FrequencyRepeatLimitPair>* V                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USSGS_RateSpecification* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USSGS_RateSpecification* USSGS_RateSpecification::STATIC_MakeRangedRate(TArray<struct FSSGS_FrequencyRepeatLimitPair>* V)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_RateSpecification.MakeRangedRate");

	USSGS_RateSpecification_MakeRangedRate_Params params;
	params.V = V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_TactilePatternSpecificationRanges.MakeRangedTactilePattern
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FSSGS_TactilePatternRange>* Ranges                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USSGS_TactilePatternSpecificationRanges* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USSGS_TactilePatternSpecificationRanges* USSGS_TactilePatternSpecificationRanges::STATIC_MakeRangedTactilePattern(TArray<struct FSSGS_TactilePatternRange>* Ranges)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_TactilePatternSpecificationRanges.MakeRangedTactilePattern");

	USSGS_TactilePatternSpecificationRanges_MakeRangedTactilePattern_Params params;
	params.Ranges = Ranges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_TactilePatternSpecificationStatic.MakeStaticWithPredefinedEffect
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSSGS_PredefinedTactilePattern* Type                           (ConstParm, Parm, OutParm, ReferenceParm)
// int*                           delay_ms                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FSSGS_TactilePatternStatic ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSSGS_TactilePatternStatic USSGS_TactilePatternSpecificationStatic::STATIC_MakeStaticWithPredefinedEffect(struct FSSGS_PredefinedTactilePattern* Type, int* delay_ms)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_TactilePatternSpecificationStatic.MakeStaticWithPredefinedEffect");

	USSGS_TactilePatternSpecificationStatic_MakeStaticWithPredefinedEffect_Params params;
	params.Type = Type;
	params.delay_ms = delay_ms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_TactilePatternSpecificationStatic.MakeStaticWithCustomEffect
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           length_ms                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           delay_ms                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FSSGS_TactilePatternStatic ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSSGS_TactilePatternStatic USSGS_TactilePatternSpecificationStatic::STATIC_MakeStaticWithCustomEffect(int* length_ms, int* delay_ms)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_TactilePatternSpecificationStatic.MakeStaticWithCustomEffect");

	USSGS_TactilePatternSpecificationStatic_MakeStaticWithCustomEffect_Params params;
	params.length_ms = length_ms;
	params.delay_ms = delay_ms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_TactilePatternSpecificationStatic.MakeStaticTactilePattern
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FSSGS_TactilePatternStatic>* pattern                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USSGS_TactilePatternSpecificationStatic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USSGS_TactilePatternSpecificationStatic* USSGS_TactilePatternSpecificationStatic::STATIC_MakeStaticTactilePattern(TArray<struct FSSGS_TactilePatternStatic>* pattern)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_TactilePatternSpecificationStatic.MakeStaticTactilePattern");

	USSGS_TactilePatternSpecificationStatic_MakeStaticTactilePattern_Params params;
	params.pattern = pattern;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteelSeriesGameSense.SSGS_TactilePatternSpecificationStatic.MakeStaticEmptyPattern
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FSSGS_TactilePatternStatic> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSSGS_TactilePatternStatic> USSGS_TactilePatternSpecificationStatic::STATIC_MakeStaticEmptyPattern()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelSeriesGameSense.SSGS_TactilePatternSpecificationStatic.MakeStaticEmptyPattern");

	USSGS_TactilePatternSpecificationStatic_MakeStaticEmptyPattern_Params params;

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
