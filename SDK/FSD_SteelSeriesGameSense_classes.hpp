#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_SteelSeriesGameSense_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SteelSeriesGameSense.SSGS_ClientBPLibrary
// 0x0000 (0x0028 - 0x0028)
class USSGS_ClientBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteelSeriesGameSense.SSGS_ClientBPLibrary");
		return ptr;
	}


	void STATIC_Stop();
	bool STATIC_Start();
	void STATIC_SendEvent(class FString* GameName, class FString* EventName, struct FSSGS_EventData* Data);
	void STATIC_RemoveGame(class FString* GameName);
	void STATIC_RemoveEvent(class FString* GameName, class FString* EventName);
	void STATIC_RegisterGame(class FString* GameName, class FString* gameDisplayName);
	void STATIC_RegisterEvent(class FString* GameName, class FString* EventName, int* MinValue, int* MaxValue, ESSGS_EventIconId* iconId);
	void STATIC_BindEvent(class FString* GameName, class FString* EventName, int* MinValue, int* MaxValue, ESSGS_EventIconId* iconId, class USSGS_HandlerCollection** handlers);
};


// Class SteelSeriesGameSense.SSGS_ColorEffectSpecification
// 0x0008 (0x0030 - 0x0028)
class USSGS_ColorEffectSpecification : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteelSeriesGameSense.SSGS_ColorEffectSpecification");
		return ptr;
	}

};


// Class SteelSeriesGameSense.SSGS_ColorEffectSpecificationGradient
// 0x0008 (0x0038 - 0x0030)
class USSGS_ColorEffectSpecificationGradient : public USSGS_ColorEffectSpecification
{
public:
	struct FSSGS_ColorGradient                         Gradient;                                                 // 0x0030(0x0006) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteelSeriesGameSense.SSGS_ColorEffectSpecificationGradient");
		return ptr;
	}


	class USSGS_ColorEffectSpecificationGradient* STATIC_MakeGradientColorEffect(struct FSSGS_RGB* Zero, struct FSSGS_RGB* hundred);
};


// Class SteelSeriesGameSense.SSGS_ColorEffectSpecificationRanges
// 0x0010 (0x0040 - 0x0030)
class USSGS_ColorEffectSpecificationRanges : public USSGS_ColorEffectSpecification
{
public:
	TArray<struct FSSGS_ColorRange>                    Ranges;                                                   // 0x0030(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteelSeriesGameSense.SSGS_ColorEffectSpecificationRanges");
		return ptr;
	}


	struct FSSGS_ColorRange STATIC_MakeStaticColorRange(int* Low, int* High, struct FSSGS_RGB* Color);
	class USSGS_ColorEffectSpecificationRanges* STATIC_MakeRangeColorEffect(TArray<struct FSSGS_ColorRange>* V);
	struct FSSGS_ColorRange STATIC_MakeGradientColorRange(int* Low, int* High, struct FSSGS_RGB* Zero, struct FSSGS_RGB* hundred);
};


// Class SteelSeriesGameSense.SSGS_ColorEffectSpecificationStatic
// 0x0008 (0x0038 - 0x0030)
class USSGS_ColorEffectSpecificationStatic : public USSGS_ColorEffectSpecification
{
public:
	struct FSSGS_RGB                                   Color;                                                    // 0x0030(0x0003) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0033(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteelSeriesGameSense.SSGS_ColorEffectSpecificationStatic");
		return ptr;
	}


	class USSGS_ColorEffectSpecificationStatic* STATIC_MakeStaticColorEffect(struct FSSGS_RGB* Color);
};


// Class SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory
// 0x0000 (0x0028 - 0x0028)
class USSGS_IlluminationDeviceZoneFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteelSeriesGameSense.SSGS_IlluminationDeviceZoneFactory");
		return ptr;
	}


	struct FSSGS_IlluminationDeviceZone STATIC_make_rgbperkeyzones_z_row();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgbperkeyzones_q_row();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgbperkeyzones_number_keys();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgbperkeyzones_nav_cluster();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgbperkeyzones_main_keyboard();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgbperkeyzones_macro_keys();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgbperkeyzones_keypad_nums();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgbperkeyzones_keypad();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgbperkeyzones_function_keys();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgbperkeyzones_custom(TArray<unsigned char>* V);
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgbperkeyzones_arrows();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgbperkeyzones_all();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgbperkeyzones_a_row();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgb5zone_two();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgb5zone_three();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgb5zone_one();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgb5zone_four();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgb5zone_five();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgb4zone_two();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgb4zone_three();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgb4zone_one();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgb4zone_four();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgb3zone_two();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgb3zone_three();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgb3zone_one();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgb2zone_two();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgb2zone_one();
	struct FSSGS_IlluminationDeviceZone STATIC_make_rgb1zone_one();
	struct FSSGS_IlluminationDeviceZone STATIC_make_mouse_wheel();
	struct FSSGS_IlluminationDeviceZone STATIC_make_mouse_logo();
	struct FSSGS_IlluminationDeviceZone STATIC_make_keyboad_number_keys();
	struct FSSGS_IlluminationDeviceZone STATIC_make_keyboad_main_keyboard();
	struct FSSGS_IlluminationDeviceZone STATIC_make_keyboad_macro_keys();
	struct FSSGS_IlluminationDeviceZone STATIC_make_keyboad_keypad();
	struct FSSGS_IlluminationDeviceZone STATIC_make_keyboad_function_keys();
	struct FSSGS_IlluminationDeviceZone STATIC_make_indicator_one();
	struct FSSGS_IlluminationDeviceZone STATIC_make_headset_earcups();
};


// Class SteelSeriesGameSense.SSGS_TactileDeviceZoneFactory
// 0x0000 (0x0028 - 0x0028)
class USSGS_TactileDeviceZoneFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteelSeriesGameSense.SSGS_TactileDeviceZoneFactory");
		return ptr;
	}


	struct FSSGS_TactileDeviceZone STATIC_make_tactile_one();
};


// Class SteelSeriesGameSense.SSGS_HandlerCollection
// 0x0028 (0x0050 - 0x0028)
class USSGS_HandlerCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteelSeriesGameSense.SSGS_HandlerCollection");
		return ptr;
	}


	class USSGS_HandlerCollection* STATIC_MakeHandlerCollection();
	void AddTactileHandler(struct FSSGS_TactileDeviceZone* deviceZone, class USSGS_RateSpecification** Rate, class USSGS_TactilePatternSpecification** pattern);
	void AddColorHandler(struct FSSGS_IlluminationDeviceZone* deviceZone, ESSGS_IlluminationMode* Mode, class USSGS_RateSpecification** rateSpec, class USSGS_ColorEffectSpecification** colorSpec);
};


// Class SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory
// 0x0000 (0x0028 - 0x0028)
class USSGS_PredefinedTactilePatternFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteelSeriesGameSense.SSGS_PredefinedTactilePatternFactory");
		return ptr;
	}


	struct FSSGS_PredefinedTactilePattern STATIC_pattern_tripleclick_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampupshortsmooth2_0to50();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampupshortsmooth2_0to100();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampupshortsmooth1_0to50();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampupshortsmooth1_0to100();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampupshortsharp2_0to50();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampupshortsharp2_0to100();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampupshortsharp1_0to50();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampupshortsharp1_0to100();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampupmediumsmooth2_0to50();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampupmediumsmooth2_0to100();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampupmediumsmooth1_0to50();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampupmediumsmooth1_0to100();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampupmediumsharp2_0to50();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampupmediumsharp2_0to100();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampupmediumsharp1_0to50();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampupmediumsharp1_0to100();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampuplongsmooth2_0to50();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampuplongsmooth2_0to100();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampuplongsmooth1_0to50();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampuplongsmooth1_0to100();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampuplongsharp2_0to50();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampuplongsharp2_0to100();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampuplongsharp1_0to50();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampuplongsharp1_0to100();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownshortsmooth2_50to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownshortsmooth2_100to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownshortsmooth1_50to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownshortsmooth1_100to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownshortsharp2_50to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownshortsharp2_100to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownshortsharp1_50to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownshortsharp1_100to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownmediumsmooth2_50to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownmediumsmooth2_100to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownmediumsmooth1_50to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownmediumsmooth1_100to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownmediumsharp2_50to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownmediumsharp2_100to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownmediumsharp1_50to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownmediumsharp1_100to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownlongsmooth2_50to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownlongsmooth2_100to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownlongsmooth1_50to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownlongsmooth1_100to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownlongsharp2_50to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownlongsharp2_100to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownlongsharp1_50to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionrampdownlongsharp1_100to0();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionhum6_11();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionhum5_21();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionhum4_41();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionhum3_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionhum2_81();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionhum1_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionclick6_11();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionclick5_21();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionclick4_41();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionclick3_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionclick2_81();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_transitionclick1_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_strongclick_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_strongclick_31();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_strongclick_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_strongclick4_31();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_strongclick3_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_strongclick2_81();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_strongclick1_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_strongbuzz_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_softfuzz_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_softbump_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_softbump_31();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_softbump_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_smoothhum5nokickorbrakepulse_11();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_smoothhum4nokickorbrakepulse_21();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_smoothhum3nokickorbrakepulse_31();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_smoothhum2nokickorbrakepulse_41();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_smoothhum1nokickorbrakepulse_51();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_shortdoublesharptick3_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_shortdoublesharptick2_81();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_shortdoublesharptick1_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_shortdoubleclickstrong4_31();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_shortdoubleclickstrong3_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_shortdoubleclickstrong2_81();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_shortdoubleclickstrong1_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_shortdoubleclickmedium3_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_shortdoubleclickmedium2_81();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_shortdoubleclickmedium1_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_sharptick3_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_sharptick2_81();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_sharptick1_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_sharpclick_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_sharpclick_31();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_sharpclick_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_pulsingstrong2_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_pulsingstrong1_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_pulsingsharp2_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_pulsingsharp1_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_pulsingmedium2_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_pulsingmedium1_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_mediumclick3_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_mediumclick2_81();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_mediumclick1_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_longdoublesharptick3_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_longdoublesharptick2_81();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_longdoublesharptick1_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_longdoublesharpclickstrong4_31();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_longdoublesharpclickstrong3_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_longdoublesharpclickstrong2_81();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_longdoublesharpclickstrong1_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_longdoublesharpclickmedium3_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_longdoublesharpclickmedium2_81();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_longdoublesharpclickmedium1_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_longbuzzforprogrammaticstopping_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_doubleclick_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_doubleclick_101();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_buzzalert750ms();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_buzzalert1000ms();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_buzz5_21();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_buzz4_41();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_buzz3_61();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_buzz2_81();
	struct FSSGS_PredefinedTactilePattern STATIC_pattern_buzz1_101();
};


// Class SteelSeriesGameSense.SSGS_RateSpecification
// 0x0038 (0x0060 - 0x0028)
class USSGS_RateSpecification : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteelSeriesGameSense.SSGS_RateSpecification");
		return ptr;
	}


	class USSGS_RateSpecification* STATIC_MakeStaticRate(int* Frequency, int* repeat_limit);
	class USSGS_RateSpecification* STATIC_MakeRangedRate(TArray<struct FSSGS_FrequencyRepeatLimitPair>* V);
};


// Class SteelSeriesGameSense.SSGS_TactilePatternSpecification
// 0x0008 (0x0030 - 0x0028)
class USSGS_TactilePatternSpecification : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteelSeriesGameSense.SSGS_TactilePatternSpecification");
		return ptr;
	}

};


// Class SteelSeriesGameSense.SSGS_TactilePatternSpecificationRanges
// 0x0010 (0x0040 - 0x0030)
class USSGS_TactilePatternSpecificationRanges : public USSGS_TactilePatternSpecification
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteelSeriesGameSense.SSGS_TactilePatternSpecificationRanges");
		return ptr;
	}


	class USSGS_TactilePatternSpecificationRanges* STATIC_MakeRangedTactilePattern(TArray<struct FSSGS_TactilePatternRange>* Ranges);
};


// Class SteelSeriesGameSense.SSGS_TactilePatternSpecificationStatic
// 0x0010 (0x0040 - 0x0030)
class USSGS_TactilePatternSpecificationStatic : public USSGS_TactilePatternSpecification
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteelSeriesGameSense.SSGS_TactilePatternSpecificationStatic");
		return ptr;
	}


	struct FSSGS_TactilePatternStatic STATIC_MakeStaticWithPredefinedEffect(struct FSSGS_PredefinedTactilePattern* Type, int* delay_ms);
	struct FSSGS_TactilePatternStatic STATIC_MakeStaticWithCustomEffect(int* length_ms, int* delay_ms);
	class USSGS_TactilePatternSpecificationStatic* STATIC_MakeStaticTactilePattern(TArray<struct FSSGS_TactilePatternStatic>* pattern);
	TArray<struct FSSGS_TactilePatternStatic> STATIC_MakeStaticEmptyPattern();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
