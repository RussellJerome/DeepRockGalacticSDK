#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ScreenOverlay_ShieldBoost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.ReceiveBeginOverlay
struct UScreenOverlay_ShieldBoost_C_ReceiveBeginOverlay_Params
{
	class UTexture2D**                                 InTexture;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               InTint;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.Construct
struct UScreenOverlay_ShieldBoost_C_Construct_Params
{
};

// Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.Play Fade
struct UScreenOverlay_ShieldBoost_C_Play_Fade_Params
{
	TEnumAsByte<EUMGSequencePlayMode>*                 PlayMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.OnAnimFadingFinished
struct UScreenOverlay_ShieldBoost_C_OnAnimFadingFinished_Params
{
};

// Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.ReceiveEndOverlay
struct UScreenOverlay_ShieldBoost_C_ReceiveEndOverlay_Params
{
};

// Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.ExecuteUbergraph_ScreenOverlay_ShieldBoost
struct UScreenOverlay_ShieldBoost_C_ExecuteUbergraph_ScreenOverlay_ShieldBoost_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
