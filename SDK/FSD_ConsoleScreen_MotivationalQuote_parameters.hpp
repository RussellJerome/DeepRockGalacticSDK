#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_MotivationalQuote_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.Construct
struct UConsoleScreen_MotivationalQuote_C_Construct_Params
{
};

// Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.Tick
struct UConsoleScreen_MotivationalQuote_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.ExecuteUbergraph_ConsoleScreen_MotivationalQuote
struct UConsoleScreen_MotivationalQuote_C_ExecuteUbergraph_ConsoleScreen_MotivationalQuote_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
