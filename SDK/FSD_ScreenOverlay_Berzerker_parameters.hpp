#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ScreenOverlay_Berzerker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.Play Fade
struct UScreenOverlay_Berzerker_C_Play_Fade_Params
{
	TEnumAsByte<EUMGSequencePlayMode>*                 PlayMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.OnAnimFadingFinished
struct UScreenOverlay_Berzerker_C_OnAnimFadingFinished_Params
{
};

// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ReceiveBeginOverlay
struct UScreenOverlay_Berzerker_C_ReceiveBeginOverlay_Params
{
	class UTexture2D**                                 InTexture;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               InTint;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.Construct
struct UScreenOverlay_Berzerker_C_Construct_Params
{
};

// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ReceiveEndOverlay
struct UScreenOverlay_Berzerker_C_ReceiveEndOverlay_Params
{
};

// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ExecuteUbergraph_ScreenOverlay_Berzerker
struct UScreenOverlay_Berzerker_C_ExecuteUbergraph_ScreenOverlay_Berzerker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
