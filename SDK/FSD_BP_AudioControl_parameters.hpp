#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_AudioControl_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_AudioControl.BP_AudioControl_C.DoFadeIronWill
struct UBP_AudioControl_C_DoFadeIronWill_Params
{
	bool*                                              ShouldFade;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AudioControl.BP_AudioControl_C.DoFadeDownState
struct UBP_AudioControl_C_DoFadeDownState_Params
{
	bool*                                              DoFade;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AudioControl.BP_AudioControl_C.DoFadeLowHealth
struct UBP_AudioControl_C_DoFadeLowHealth_Params
{
	bool*                                              ShouldFade;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AudioControl.BP_AudioControl_C.HealthAudio
struct UBP_AudioControl_C_HealthAudio_Params
{
	class USubmixEffectSubmixEQPreset**                EQPreset;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HealthPercentage;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AudioControl.BP_AudioControl_C.ShouldSetTimestamp
struct UBP_AudioControl_C_ShouldSetTimestamp_Params
{
	bool*                                              IsActivate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AudioControl.BP_AudioControl_C.SubmixCompressor
struct UBP_AudioControl_C_SubmixCompressor_Params
{
	float*                                             Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix**                               Master_Listen_Submix;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Threshold;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Attack;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Release;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCompressorData>                     CompressorData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_AudioControl.BP_AudioControl_C.SubmixDucking
struct UBP_AudioControl_C_SubmixDucking_Params
{
	class USoundSubmix**                               ListenSubmix;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ListenAttack_Max_200;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ListenRelease_Max_1000;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ListenDuckMultiply;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USubmixEffectSubmixEQPreset**                TargetDuckingEQ;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Multiply_Value_Print;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat**                                DuckingCurve;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat**                                AttackCurve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat**                                ReleaseCurve;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ListenArrayElement;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AudioControl.BP_AudioControl_C.ReceiveTick
struct UBP_AudioControl_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AudioControl.BP_AudioControl_C.DamageTaken
struct UBP_AudioControl_C_DamageTaken_Params
{
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AudioControl.BP_AudioControl_C.ExplosionsEnvelopeFollower
struct UBP_AudioControl_C_ExplosionsEnvelopeFollower_Params
{
	TArray<float>*                                     Envelope;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_AudioControl.BP_AudioControl_C.ReceiveBeginPlay
struct UBP_AudioControl_C_ReceiveBeginPlay_Params
{
};

// Function BP_AudioControl.BP_AudioControl_C.CustomEvent_3
struct UBP_AudioControl_C_CustomEvent_3_Params
{
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AudioControl.BP_AudioControl_C.ExecuteUbergraph_BP_AudioControl
struct UBP_AudioControl_C_ExecuteUbergraph_BP_AudioControl_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
