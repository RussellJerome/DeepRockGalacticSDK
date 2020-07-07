#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_SteelSeriesGameSense_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SteelSeriesGameSense.SSGS_ClientBPLibrary.Stop
struct USSGS_ClientBPLibrary_Stop_Params
{
};

// Function SteelSeriesGameSense.SSGS_ClientBPLibrary.Start
struct USSGS_ClientBPLibrary_Start_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteelSeriesGameSense.SSGS_ClientBPLibrary.SendEvent
struct USSGS_ClientBPLibrary_SendEvent_Params
{
	class FString*                                     GameName;                                                 // (Parm, ZeroConstructor)
	class FString*                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FSSGS_EventData*                            Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function SteelSeriesGameSense.SSGS_ClientBPLibrary.RemoveGame
struct USSGS_ClientBPLibrary_RemoveGame_Params
{
	class FString*                                     GameName;                                                 // (Parm, ZeroConstructor)
};

// Function SteelSeriesGameSense.SSGS_ClientBPLibrary.RemoveEvent
struct USSGS_ClientBPLibrary_RemoveEvent_Params
{
	class FString*                                     GameName;                                                 // (Parm, ZeroConstructor)
	class FString*                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function SteelSeriesGameSense.SSGS_ClientBPLibrary.RegisterGame
struct USSGS_ClientBPLibrary_RegisterGame_Params
{
	class FString*                                     GameName;                                                 // (Parm, ZeroConstructor)
	class FString*                                     gameDisplayName;                                          // (Parm, ZeroConstructor)
};

// Function SteelSeriesGameSense.SSGS_ClientBPLibrary.RegisterEvent
struct USSGS_ClientBPLibrary_RegisterEvent_Params
{
	class FString*                                     GameName;                                                 // (Parm, ZeroConstructor)
	class FString*                                     EventName;                                                // (Parm, ZeroConstructor)
	int*                                               MinValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESSGS_EventIconId*                                 iconId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SteelSeriesGameSense.SSGS_ClientBPLibrary.BindEvent
struct USSGS_ClientBPLibrary_BindEvent_Params
{
	class FString*                                     GameName;                                                 // (Parm, ZeroConstructor)
	class FString*                                     EventName;                                                // (Parm, ZeroConstructor)
	int*                                               MinValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESSGS_EventIconId*                                 iconId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class USSGS_HandlerCollection*                     handlers;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function SteelSeriesGameSense.SSGS_ColorEffectSpecificationGradient.MakeGradientColorEffect
struct USSGS_ColorEffectSpecificationGradient_MakeGradientColorEffect_Params
{
	struct FSSGS_RGB*                                  Zero;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSSGS_RGB*                                  hundred;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USSGS_ColorEffectSpecificationGradient*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteelSeriesGameSense.SSGS_ColorEffectSpecificationRanges.MakeStaticColorRange
struct USSGS_ColorEffectSpecificationRanges_MakeStaticColorRange_Params
{
	int*                                               Low;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               High;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSSGS_RGB*                                  Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSSGS_ColorRange                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_ColorEffectSpecificationRanges.MakeRangeColorEffect
struct USSGS_ColorEffectSpecificationRanges_MakeRangeColorEffect_Params
{
	TArray<struct FSSGS_ColorRange>*                   V;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USSGS_ColorEffectSpecificationRanges*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteelSeriesGameSense.SSGS_ColorEffectSpecificationRanges.MakeGradientColorRange
struct USSGS_ColorEffectSpecificationRanges_MakeGradientColorRange_Params
{
	int*                                               Low;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               High;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSSGS_RGB*                                  Zero;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSSGS_RGB*                                  hundred;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSSGS_ColorRange                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_ColorEffectSpecificationStatic.MakeStaticColorEffect
struct USSGS_ColorEffectSpecificationStatic_MakeStaticColorEffect_Params
{
	struct FSSGS_RGB*                                  Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USSGS_ColorEffectSpecificationStatic*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_z_row
struct USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_z_row_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_q_row
struct USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_q_row_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_number_keys
struct USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_number_keys_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_nav_cluster
struct USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_nav_cluster_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_main_keyboard
struct USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_main_keyboard_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_macro_keys
struct USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_macro_keys_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_keypad_nums
struct USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_keypad_nums_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_keypad
struct USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_keypad_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_function_keys
struct USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_function_keys_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_custom
struct USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_custom_Params
{
	TArray<unsigned char>*                             V;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_arrows
struct USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_arrows_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_all
struct USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_all_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgbperkeyzones_a_row
struct USSGS_IlluminationDeviceZoneFactory_make_rgbperkeyzones_a_row_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb5zone_two
struct USSGS_IlluminationDeviceZoneFactory_make_rgb5zone_two_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb5zone_three
struct USSGS_IlluminationDeviceZoneFactory_make_rgb5zone_three_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb5zone_one
struct USSGS_IlluminationDeviceZoneFactory_make_rgb5zone_one_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb5zone_four
struct USSGS_IlluminationDeviceZoneFactory_make_rgb5zone_four_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb5zone_five
struct USSGS_IlluminationDeviceZoneFactory_make_rgb5zone_five_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb4zone_two
struct USSGS_IlluminationDeviceZoneFactory_make_rgb4zone_two_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb4zone_three
struct USSGS_IlluminationDeviceZoneFactory_make_rgb4zone_three_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb4zone_one
struct USSGS_IlluminationDeviceZoneFactory_make_rgb4zone_one_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb4zone_four
struct USSGS_IlluminationDeviceZoneFactory_make_rgb4zone_four_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb3zone_two
struct USSGS_IlluminationDeviceZoneFactory_make_rgb3zone_two_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb3zone_three
struct USSGS_IlluminationDeviceZoneFactory_make_rgb3zone_three_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb3zone_one
struct USSGS_IlluminationDeviceZoneFactory_make_rgb3zone_one_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb2zone_two
struct USSGS_IlluminationDeviceZoneFactory_make_rgb2zone_two_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb2zone_one
struct USSGS_IlluminationDeviceZoneFactory_make_rgb2zone_one_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_rgb1zone_one
struct USSGS_IlluminationDeviceZoneFactory_make_rgb1zone_one_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_mouse_wheel
struct USSGS_IlluminationDeviceZoneFactory_make_mouse_wheel_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_mouse_logo
struct USSGS_IlluminationDeviceZoneFactory_make_mouse_logo_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_keyboad_number_keys
struct USSGS_IlluminationDeviceZoneFactory_make_keyboad_number_keys_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_keyboad_main_keyboard
struct USSGS_IlluminationDeviceZoneFactory_make_keyboad_main_keyboard_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_keyboad_macro_keys
struct USSGS_IlluminationDeviceZoneFactory_make_keyboad_macro_keys_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_keyboad_keypad
struct USSGS_IlluminationDeviceZoneFactory_make_keyboad_keypad_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_keyboad_function_keys
struct USSGS_IlluminationDeviceZoneFactory_make_keyboad_function_keys_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_indicator_one
struct USSGS_IlluminationDeviceZoneFactory_make_indicator_one_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory.make_headset_earcups
struct USSGS_IlluminationDeviceZoneFactory_make_headset_earcups_Params
{
	struct FSSGS_IlluminationDeviceZone                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_TactileDeviceZoneFactory.make_tactile_one
struct USSGS_TactileDeviceZoneFactory_make_tactile_one_Params
{
	struct FSSGS_TactileDeviceZone                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_HandlerCollection.MakeHandlerCollection
struct USSGS_HandlerCollection_MakeHandlerCollection_Params
{
	class USSGS_HandlerCollection*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteelSeriesGameSense.SSGS_HandlerCollection.AddTactileHandler
struct USSGS_HandlerCollection_AddTactileHandler_Params
{
	struct FSSGS_TactileDeviceZone*                    deviceZone;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class USSGS_TactilePatternSpecification*           pattern;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USSGS_RateSpecification**                    Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SteelSeriesGameSense.SSGS_HandlerCollection.AddColorHandler
struct USSGS_HandlerCollection_AddColorHandler_Params
{
	struct FSSGS_IlluminationDeviceZone*               deviceZone;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	ESSGS_IlluminationMode*                            Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USSGS_ColorEffectSpecification*              colorSpec;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USSGS_RateSpecification**                    rateSpec;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_tripleclick_101
struct USSGS_PredefinedTactilePatternFactory_pattern_tripleclick_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsmooth2_0to50
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupshortsmooth2_0to50_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsmooth2_0to100
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupshortsmooth2_0to100_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsmooth1_0to50
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupshortsmooth1_0to50_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsmooth1_0to100
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupshortsmooth1_0to100_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsharp2_0to50
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupshortsharp2_0to50_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsharp2_0to100
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupshortsharp2_0to100_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsharp1_0to50
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupshortsharp1_0to50_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupshortsharp1_0to100
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupshortsharp1_0to100_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsmooth2_0to50
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupmediumsmooth2_0to50_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsmooth2_0to100
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupmediumsmooth2_0to100_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsmooth1_0to50
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupmediumsmooth1_0to50_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsmooth1_0to100
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupmediumsmooth1_0to100_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsharp2_0to50
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupmediumsharp2_0to50_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsharp2_0to100
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupmediumsharp2_0to100_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsharp1_0to50
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupmediumsharp1_0to50_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampupmediumsharp1_0to100
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampupmediumsharp1_0to100_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsmooth2_0to50
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampuplongsmooth2_0to50_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsmooth2_0to100
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampuplongsmooth2_0to100_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsmooth1_0to50
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampuplongsmooth1_0to50_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsmooth1_0to100
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampuplongsmooth1_0to100_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsharp2_0to50
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampuplongsharp2_0to50_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsharp2_0to100
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampuplongsharp2_0to100_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsharp1_0to50
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampuplongsharp1_0to50_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampuplongsharp1_0to100
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampuplongsharp1_0to100_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsmooth2_50to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownshortsmooth2_50to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsmooth2_100to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownshortsmooth2_100to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsmooth1_50to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownshortsmooth1_50to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsmooth1_100to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownshortsmooth1_100to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsharp2_50to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownshortsharp2_50to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsharp2_100to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownshortsharp2_100to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsharp1_50to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownshortsharp1_50to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownshortsharp1_100to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownshortsharp1_100to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsmooth2_50to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownmediumsmooth2_50to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsmooth2_100to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownmediumsmooth2_100to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsmooth1_50to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownmediumsmooth1_50to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsmooth1_100to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownmediumsmooth1_100to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsharp2_50to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownmediumsharp2_50to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsharp2_100to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownmediumsharp2_100to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsharp1_50to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownmediumsharp1_50to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownmediumsharp1_100to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownmediumsharp1_100to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsmooth2_50to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownlongsmooth2_50to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsmooth2_100to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownlongsmooth2_100to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsmooth1_50to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownlongsmooth1_50to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsmooth1_100to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownlongsmooth1_100to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsharp2_50to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownlongsharp2_50to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsharp2_100to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownlongsharp2_100to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsharp1_50to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownlongsharp1_50to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionrampdownlongsharp1_100to0
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionrampdownlongsharp1_100to0_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum6_11
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionhum6_11_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum5_21
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionhum5_21_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum4_41
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionhum4_41_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum3_61
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionhum3_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum2_81
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionhum2_81_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionhum1_101
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionhum1_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick6_11
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionclick6_11_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick5_21
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionclick5_21_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick4_41
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionclick4_41_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick3_61
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionclick3_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick2_81
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionclick2_81_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_transitionclick1_101
struct USSGS_PredefinedTactilePatternFactory_pattern_transitionclick1_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick_61
struct USSGS_PredefinedTactilePatternFactory_pattern_strongclick_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick_31
struct USSGS_PredefinedTactilePatternFactory_pattern_strongclick_31_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick_101
struct USSGS_PredefinedTactilePatternFactory_pattern_strongclick_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick4_31
struct USSGS_PredefinedTactilePatternFactory_pattern_strongclick4_31_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick3_61
struct USSGS_PredefinedTactilePatternFactory_pattern_strongclick3_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick2_81
struct USSGS_PredefinedTactilePatternFactory_pattern_strongclick2_81_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongclick1_101
struct USSGS_PredefinedTactilePatternFactory_pattern_strongclick1_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_strongbuzz_101
struct USSGS_PredefinedTactilePatternFactory_pattern_strongbuzz_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_softfuzz_61
struct USSGS_PredefinedTactilePatternFactory_pattern_softfuzz_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_softbump_61
struct USSGS_PredefinedTactilePatternFactory_pattern_softbump_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_softbump_31
struct USSGS_PredefinedTactilePatternFactory_pattern_softbump_31_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_softbump_101
struct USSGS_PredefinedTactilePatternFactory_pattern_softbump_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_smoothhum5nokickorbrakepulse_11
struct USSGS_PredefinedTactilePatternFactory_pattern_smoothhum5nokickorbrakepulse_11_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_smoothhum4nokickorbrakepulse_21
struct USSGS_PredefinedTactilePatternFactory_pattern_smoothhum4nokickorbrakepulse_21_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_smoothhum3nokickorbrakepulse_31
struct USSGS_PredefinedTactilePatternFactory_pattern_smoothhum3nokickorbrakepulse_31_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_smoothhum2nokickorbrakepulse_41
struct USSGS_PredefinedTactilePatternFactory_pattern_smoothhum2nokickorbrakepulse_41_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_smoothhum1nokickorbrakepulse_51
struct USSGS_PredefinedTactilePatternFactory_pattern_smoothhum1nokickorbrakepulse_51_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoublesharptick3_61
struct USSGS_PredefinedTactilePatternFactory_pattern_shortdoublesharptick3_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoublesharptick2_81
struct USSGS_PredefinedTactilePatternFactory_pattern_shortdoublesharptick2_81_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoublesharptick1_101
struct USSGS_PredefinedTactilePatternFactory_pattern_shortdoublesharptick1_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickstrong4_31
struct USSGS_PredefinedTactilePatternFactory_pattern_shortdoubleclickstrong4_31_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickstrong3_61
struct USSGS_PredefinedTactilePatternFactory_pattern_shortdoubleclickstrong3_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickstrong2_81
struct USSGS_PredefinedTactilePatternFactory_pattern_shortdoubleclickstrong2_81_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickstrong1_101
struct USSGS_PredefinedTactilePatternFactory_pattern_shortdoubleclickstrong1_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickmedium3_61
struct USSGS_PredefinedTactilePatternFactory_pattern_shortdoubleclickmedium3_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickmedium2_81
struct USSGS_PredefinedTactilePatternFactory_pattern_shortdoubleclickmedium2_81_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_shortdoubleclickmedium1_101
struct USSGS_PredefinedTactilePatternFactory_pattern_shortdoubleclickmedium1_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharptick3_61
struct USSGS_PredefinedTactilePatternFactory_pattern_sharptick3_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharptick2_81
struct USSGS_PredefinedTactilePatternFactory_pattern_sharptick2_81_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharptick1_101
struct USSGS_PredefinedTactilePatternFactory_pattern_sharptick1_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharpclick_61
struct USSGS_PredefinedTactilePatternFactory_pattern_sharpclick_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharpclick_31
struct USSGS_PredefinedTactilePatternFactory_pattern_sharpclick_31_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_sharpclick_101
struct USSGS_PredefinedTactilePatternFactory_pattern_sharpclick_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingstrong2_61
struct USSGS_PredefinedTactilePatternFactory_pattern_pulsingstrong2_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingstrong1_101
struct USSGS_PredefinedTactilePatternFactory_pattern_pulsingstrong1_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingsharp2_61
struct USSGS_PredefinedTactilePatternFactory_pattern_pulsingsharp2_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingsharp1_101
struct USSGS_PredefinedTactilePatternFactory_pattern_pulsingsharp1_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingmedium2_61
struct USSGS_PredefinedTactilePatternFactory_pattern_pulsingmedium2_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_pulsingmedium1_101
struct USSGS_PredefinedTactilePatternFactory_pattern_pulsingmedium1_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_mediumclick3_61
struct USSGS_PredefinedTactilePatternFactory_pattern_mediumclick3_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_mediumclick2_81
struct USSGS_PredefinedTactilePatternFactory_pattern_mediumclick2_81_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_mediumclick1_101
struct USSGS_PredefinedTactilePatternFactory_pattern_mediumclick1_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharptick3_61
struct USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharptick3_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharptick2_81
struct USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharptick2_81_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharptick1_101
struct USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharptick1_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickstrong4_31
struct USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharpclickstrong4_31_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickstrong3_61
struct USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharpclickstrong3_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickstrong2_81
struct USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharpclickstrong2_81_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickstrong1_101
struct USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharpclickstrong1_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickmedium3_61
struct USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharpclickmedium3_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickmedium2_81
struct USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharpclickmedium2_81_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longdoublesharpclickmedium1_101
struct USSGS_PredefinedTactilePatternFactory_pattern_longdoublesharpclickmedium1_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_longbuzzforprogrammaticstopping_101
struct USSGS_PredefinedTactilePatternFactory_pattern_longbuzzforprogrammaticstopping_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_doubleclick_61
struct USSGS_PredefinedTactilePatternFactory_pattern_doubleclick_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_doubleclick_101
struct USSGS_PredefinedTactilePatternFactory_pattern_doubleclick_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzzalert750ms
struct USSGS_PredefinedTactilePatternFactory_pattern_buzzalert750ms_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzzalert1000ms
struct USSGS_PredefinedTactilePatternFactory_pattern_buzzalert1000ms_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzz5_21
struct USSGS_PredefinedTactilePatternFactory_pattern_buzz5_21_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzz4_41
struct USSGS_PredefinedTactilePatternFactory_pattern_buzz4_41_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzz3_61
struct USSGS_PredefinedTactilePatternFactory_pattern_buzz3_61_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzz2_81
struct USSGS_PredefinedTactilePatternFactory_pattern_buzz2_81_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory.pattern_buzz1_101
struct USSGS_PredefinedTactilePatternFactory_pattern_buzz1_101_Params
{
	struct FSSGS_PredefinedTactilePattern              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_RateSpecification.MakeStaticRate
struct USSGS_RateSpecification_MakeStaticRate_Params
{
	int*                                               Frequency;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               repeat_limit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USSGS_RateSpecification*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteelSeriesGameSense.SSGS_RateSpecification.MakeRangedRate
struct USSGS_RateSpecification_MakeRangedRate_Params
{
	TArray<struct FSSGS_FrequencyRepeatLimitPair>*     V;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USSGS_RateSpecification*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteelSeriesGameSense.SSGS_TactilePatternSpecificationRanges.MakeRangedTactilePattern
struct USSGS_TactilePatternSpecificationRanges_MakeRangedTactilePattern_Params
{
	TArray<struct FSSGS_TactilePatternRange>*          Ranges;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USSGS_TactilePatternSpecificationRanges*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteelSeriesGameSense.SSGS_TactilePatternSpecificationStatic.MakeStaticWithPredefinedEffect
struct USSGS_TactilePatternSpecificationStatic_MakeStaticWithPredefinedEffect_Params
{
	struct FSSGS_PredefinedTactilePattern*             Type;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int*                                               delay_ms;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSSGS_TactilePatternStatic                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_TactilePatternSpecificationStatic.MakeStaticWithCustomEffect
struct USSGS_TactilePatternSpecificationStatic_MakeStaticWithCustomEffect_Params
{
	int*                                               length_ms;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               delay_ms;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSSGS_TactilePatternStatic                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SteelSeriesGameSense.SSGS_TactilePatternSpecificationStatic.MakeStaticTactilePattern
struct USSGS_TactilePatternSpecificationStatic_MakeStaticTactilePattern_Params
{
	TArray<struct FSSGS_TactilePatternStatic>*         pattern;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USSGS_TactilePatternSpecificationStatic*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SteelSeriesGameSense.SSGS_TactilePatternSpecificationStatic.MakeStaticEmptyPattern
struct USSGS_TactilePatternSpecificationStatic_MakeStaticEmptyPattern_Params
{
	TArray<struct FSSGS_TactilePatternStatic>          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
