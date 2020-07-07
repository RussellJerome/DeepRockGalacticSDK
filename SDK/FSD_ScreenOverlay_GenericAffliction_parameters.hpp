#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ScreenOverlay_GenericAffliction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.Construct
struct UScreenOverlay_GenericAffliction_C_Construct_Params
{
};

// Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ReceiveBeginOverlay
struct UScreenOverlay_GenericAffliction_C_ReceiveBeginOverlay_Params
{
	class UTexture2D**                                 InTexture;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               InTint;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ReceiveEndOverlay
struct UScreenOverlay_GenericAffliction_C_ReceiveEndOverlay_Params
{
};

// Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.Play Fade
struct UScreenOverlay_GenericAffliction_C_Play_Fade_Params
{
	TEnumAsByte<EUMGSequencePlayMode>*                 PlayMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.OnAnimFadingFinished
struct UScreenOverlay_GenericAffliction_C_OnAnimFadingFinished_Params
{
};

// Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ExecuteUbergraph_ScreenOverlay_GenericAffliction
struct UScreenOverlay_GenericAffliction_C_ExecuteUbergraph_ScreenOverlay_GenericAffliction_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
