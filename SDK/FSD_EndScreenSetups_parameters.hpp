#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EndScreenSetups_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndScreenSetups.EndScreenSetups_C.GetRandomWalkAnim
struct UEndScreenSetups_C_GetRandomWalkAnim_Params
{
	class UVictoryPose**                               VicPose;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandStream;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TSoftObjectPtr<class UAnimSequence>                Walk;                                                     // (Parm, OutParm)
};

// Function EndScreenSetups.EndScreenSetups_C.LoadVictoryAnims
struct UEndScreenSetups_C_LoadVictoryAnims_Params
{
	class UVictoryPose**                               InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandStream;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FEndScreenMove                              EndScreenMove;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function EndScreenSetups.EndScreenSetups_C.LoadActorClass
struct UEndScreenSetups_C_LoadActorClass_Params
{
	TSoftObjectPtr<class UClass>*                      Soft;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass*                                      Hard;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndScreenSetups.EndScreenSetups_C.LoadAnimSeqArray
struct UEndScreenSetups_C_LoadAnimSeqArray_Params
{
	TArray<TSoftObjectPtr<class UAnimSequence>>        Soft;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAnimSequence*>                       Hard;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function EndScreenSetups.EndScreenSetups_C.LoadAnimSeq
struct UEndScreenSetups_C_LoadAnimSeq_Params
{
	TSoftObjectPtr<class UAnimSequence>*               Soft;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UAnimSequence*                               Hard;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndScreenSetups.EndScreenSetups_C.SplitMoveSetAnims
struct UEndScreenSetups_C_SplitMoveSetAnims_Params
{
	TArray<TSoftObjectPtr<class UAnimSequence>>*       TargetArray;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UAnimSequence*                               Selected1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<TSoftObjectPtr<class UAnimSequence>>        Rest1;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function EndScreenSetups.EndScreenSetups_C.ResetMovesets
struct UEndScreenSetups_C_ResetMovesets_Params
{
	int*                                               NewSeed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndScreenSetups.EndScreenSetups_C.RandomWeightedMoveSet
struct UEndScreenSetups_C_RandomWeightedMoveSet_Params
{
	TArray<struct FEndScreenMoveSet>                   Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FEndScreenMove                              Selected;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function EndScreenSetups.EndScreenSetups_C.GetEndScreenMoveSet
struct UEndScreenSetups_C_GetEndScreenMoveSet_Params
{
	bool*                                              Survived;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UVictoryPose**                               VictPose;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandStream;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FEndScreenMove                              Selected;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function EndScreenSetups.EndScreenSetups_C.RandomAnimElement
struct UEndScreenSetups_C_RandomAnimElement_Params
{
	TArray<class UAnimSequence*>                       Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UAnimSequence*                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
