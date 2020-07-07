#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_RunningMultiText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_RunningMultiText.UI_RunningMultiText_C.PlayCue
struct UUI_RunningMultiText_C_PlayCue_Params
{
	class USoundCue**                                  InSound;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RunningMultiText.UI_RunningMultiText_C.InitRun
struct UUI_RunningMultiText_C_InitRun_Params
{
};

// Function UI_RunningMultiText.UI_RunningMultiText_C.SetNextLine
struct UUI_RunningMultiText_C_SetNextLine_Params
{
};

// Function UI_RunningMultiText.UI_RunningMultiText_C.SetRunnerProgress
struct UUI_RunningMultiText_C_SetRunnerProgress_Params
{
	float*                                             InProgress;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Finished;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RunningMultiText.UI_RunningMultiText_C.SetTextRunnerActive
struct UUI_RunningMultiText_C_SetTextRunnerActive_Params
{
	bool*                                              Inactive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RunningMultiText.UI_RunningMultiText_C.SetTexts
struct UUI_RunningMultiText_C_SetTexts_Params
{
	TArray<struct FText>                               InTexts;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_RunningMultiText.UI_RunningMultiText_C.OnTick_B06C42A944ABEA2C4BF8E7AF24421023
struct UUI_RunningMultiText_C_OnTick_B06C42A944ABEA2C4BF8E7AF24421023_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NormalizedTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RunningMultiText.UI_RunningMultiText_C.Completed_B06C42A944ABEA2C4BF8E7AF24421023
struct UUI_RunningMultiText_C_Completed_B06C42A944ABEA2C4BF8E7AF24421023_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NormalizedTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RunningMultiText.UI_RunningMultiText_C.PreConstruct
struct UUI_RunningMultiText_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RunningMultiText.UI_RunningMultiText_C.DoRun
struct UUI_RunningMultiText_C_DoRun_Params
{
};

// Function UI_RunningMultiText.UI_RunningMultiText_C.Destruct
struct UUI_RunningMultiText_C_Destruct_Params
{
};

// Function UI_RunningMultiText.UI_RunningMultiText_C.ExecuteUbergraph_UI_RunningMultiText
struct UUI_RunningMultiText_C_ExecuteUbergraph_UI_RunningMultiText_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
