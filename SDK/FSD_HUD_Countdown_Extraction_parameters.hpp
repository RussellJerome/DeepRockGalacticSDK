#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Countdown_Extraction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.FormatTime
struct UHUD_Countdown_Extraction_C_FormatTime_Params
{
	int*                                               Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.CountdownStarted
struct UHUD_Countdown_Extraction_C_CountdownStarted_Params
{
	struct FText*                                      countdownText;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownTimeChanged
struct UHUD_Countdown_Extraction_C_OnCountdownTimeChanged_Params
{
	int*                                               SecondsLeft;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownFinished
struct UHUD_Countdown_Extraction_C_OnCountdownFinished_Params
{
};

// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.Construct
struct UHUD_Countdown_Extraction_C_Construct_Params
{
};

// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.PreConstruct
struct UHUD_Countdown_Extraction_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.ExecuteUbergraph_HUD_Countdown_Extraction
struct UHUD_Countdown_Extraction_C_ExecuteUbergraph_HUD_Countdown_Extraction_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
