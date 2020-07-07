#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic.hpp"
#include "FSD_Engine_classes.hpp"
#include "FSD_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SteelSeriesGameSense.ESSGS_IlluminationMode
enum class ESSGS_IlluminationMode : uint8_t
{
	Color                          = 0,
	Percent                        = 1,
	Count                          = 2,
	ESSGS_MAX                      = 3
};


// Enum SteelSeriesGameSense.ESSGS_ColorEffect
enum class ESSGS_ColorEffect : uint8_t
{
	Static                         = 0,
	Gradient                       = 1,
	Ranges                         = 2,
	ESSGS_MAX                      = 3
};


// Enum SteelSeriesGameSense.ESSGS_EventIconId
enum class ESSGS_EventIconId : uint8_t
{
	Default                        = 0,
	Health                         = 1,
	Armor                          = 2,
	Ammo                           = 3,
	Money                          = 4,
	Flashbang                      = 5,
	Kills                          = 6,
	Headshot                       = 7,
	Helmet                         = 8,
	Hunger                         = 9,
	Air                            = 10,
	Compass                        = 11,
	Tool                           = 12,
	Mana                           = 13,
	Clock                          = 14,
	Lightning                      = 15,
	Item                           = 16,
	AtSymbol                       = 17,
	Muted                          = 18,
	Talking                        = 19,
	Connect                        = 20,
	Disconnect                     = 21,
	Music                          = 22,
	Play                           = 23,
	Pause                          = 24,
	ESSGS_MAX                      = 25
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SteelSeriesGameSense.SSGS_EventData
// 0x0004
struct FSSGS_EventData
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SteelSeriesGameSense.SSGS_RGB
// 0x0003
struct FSSGS_RGB
{
	unsigned char                                      red;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      green;                                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      blue;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SteelSeriesGameSense.SSGS_Gradient
// 0x0006
struct FSSGS_Gradient
{
	struct FSSGS_RGB                                   Zero;                                                     // 0x0000(0x0003) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSSGS_RGB                                   hundred;                                                  // 0x0003(0x0003) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SteelSeriesGameSense.SSGS_ColorGradient
// 0x0006
struct FSSGS_ColorGradient
{
	struct FSSGS_Gradient                              Gradient;                                                 // 0x0000(0x0006) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SteelSeriesGameSense.SSGS_JsonConvertable
// 0x0008
struct FSSGS_JsonConvertable
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SteelSeriesGameSense.SSGS_ColorRange
// 0x0018 (0x0020 - 0x0008)
struct FSSGS_ColorRange : public FSSGS_JsonConvertable
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct SteelSeriesGameSense.SSGS_IlluminationDeviceZone
// 0x0038
struct FSSGS_IlluminationDeviceZone
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct SteelSeriesGameSense.SSGS_TactileDeviceZone
// 0x0020
struct FSSGS_TactileDeviceZone
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct SteelSeriesGameSense.SSGS_PredefinedTactilePattern
// 0x0010
struct FSSGS_PredefinedTactilePattern
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct SteelSeriesGameSense.SSGS_FrequencyRepeatLimitPair
// 0x0010
struct FSSGS_FrequencyRepeatLimitPair
{
	int                                                Low;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                High;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Frequency;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                repeat_limit;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SteelSeriesGameSense.SSGS_TactilePatternStatic
// 0x0030 (0x0038 - 0x0008)
struct FSSGS_TactilePatternStatic : public FSSGS_JsonConvertable
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct SteelSeriesGameSense.SSGS_TactilePatternRange
// 0x0018 (0x0020 - 0x0008)
struct FSSGS_TactilePatternRange : public FSSGS_JsonConvertable
{
	int                                                Low;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                High;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FSSGS_TactilePatternStatic>          pattern;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct SteelSeriesGameSense.SSGS_ColorRangeGradient
// 0x0010
struct FSSGS_ColorRangeGradient
{
	int                                                Low;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                High;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSSGS_ColorGradient                         Color;                                                    // 0x0008(0x0006) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct SteelSeriesGameSense.SSGS_ColorRangeStatic
// 0x000C
struct FSSGS_ColorRangeStatic
{
	int                                                Low;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                High;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSSGS_RGB                                   Color;                                                    // 0x0008(0x0003) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
};

// ScriptStruct SteelSeriesGameSense.SSGS_Frequency
// 0x000C
struct FSSGS_Frequency
{
	int                                                Low;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                High;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Frequency;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SteelSeriesGameSense.SSGS_HandlerColor
// 0x0050 (0x0058 - 0x0008)
struct FSSGS_HandlerColor : public FSSGS_JsonConvertable
{
	struct FSSGS_IlluminationDeviceZone                deviceZone;                                               // 0x0008(0x0038) (Edit, BlueprintVisible)
	ESSGS_IlluminationMode                             Mode;                                                     // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class USSGS_ColorEffectSpecification*              Color;                                                    // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USSGS_RateSpecification*                     Rate;                                                     // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SteelSeriesGameSense.SSGS_HandlerTactile
// 0x0040 (0x0048 - 0x0008)
struct FSSGS_HandlerTactile : public FSSGS_JsonConvertable
{
	struct FSSGS_TactileDeviceZone                     deviceZone;                                               // 0x0008(0x0020) (Edit, BlueprintVisible)
	class FString                                      Mode;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class USSGS_TactilePatternSpecification*           pattern;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USSGS_RateSpecification*                     Rate;                                                     // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SteelSeriesGameSense.ServerProps
// 0x0010
struct FServerProps
{
	class FString                                      address;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct SteelSeriesGameSense.SSGS_Game
// 0x0010 (0x0018 - 0x0008)
struct FSSGS_Game : public FSSGS_JsonConvertable
{
	class FString                                      Game;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct SteelSeriesGameSense.SSGS_Event
// 0x0020 (0x0028 - 0x0008)
struct FSSGS_Event : public FSSGS_JsonConvertable
{
	class FString                                      Game;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      EventName;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct SteelSeriesGameSense.SSGS_EventUpdate
// 0x0028 (0x0030 - 0x0008)
struct FSSGS_EventUpdate : public FSSGS_JsonConvertable
{
	class FString                                      Game;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      EventName;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FSSGS_EventData                             Data;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct SteelSeriesGameSense.SSGS_EventBinding
// 0x0038 (0x0040 - 0x0008)
struct FSSGS_EventBinding : public FSSGS_JsonConvertable
{
	class FString                                      Game;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      EventName;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MinValue;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxValue;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESSGS_EventIconId                                  iconId;                                                   // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class USSGS_HandlerCollection*                     handlers;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SteelSeriesGameSense.SSGS_EventInfo
// 0x0030 (0x0038 - 0x0008)
struct FSSGS_EventInfo : public FSSGS_JsonConvertable
{
	class FString                                      Game;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      EventName;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MinValue;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxValue;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESSGS_EventIconId                                  iconId;                                                   // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct SteelSeriesGameSense.SSGS_GameInfo
// 0x0020 (0x0028 - 0x0008)
struct FSSGS_GameInfo : public FSSGS_JsonConvertable
{
	class FString                                      Game;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      gameDisplayName;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct SteelSeriesGameSense.SSGS_RepeatLimit
// 0x000C
struct FSSGS_RepeatLimit
{
	int                                                Low;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                High;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                repeat_limit;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SteelSeriesGameSense.SSGS_RateRange
// 0x0020
struct FSSGS_RateRange
{
	TArray<struct FSSGS_Frequency>                     Frequency;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSSGS_RepeatLimit>                   repeat_limit;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct SteelSeriesGameSense.SSGS_RateStatic
// 0x0008
struct FSSGS_RateStatic
{
	int                                                Frequency;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                repeat_limit;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SteelSeriesGameSense.SSGS_TactileEffectCustom
// 0x0018 (0x0020 - 0x0008)
struct FSSGS_TactileEffectCustom : public FSSGS_JsonConvertable
{
	int                                                length_ms;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                delay_ms;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct SteelSeriesGameSense.SSGS_TactileEffectPredefined
// 0x0018 (0x0020 - 0x0008)
struct FSSGS_TactileEffectPredefined : public FSSGS_JsonConvertable
{
	struct FSSGS_PredefinedTactilePattern              Type;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible)
	int                                                delay_ms;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
