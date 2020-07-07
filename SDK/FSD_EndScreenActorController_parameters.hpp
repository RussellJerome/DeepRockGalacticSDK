#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EndScreenActorController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndScreenActorController.EndScreenActorController_C.Reset
struct UEndScreenActorController_C_Reset_Params
{
};

// Function EndScreenActorController.EndScreenActorController_C.SpawnAttachmentIfNeeded
struct UEndScreenActorController_C_SpawnAttachmentIfNeeded_Params
{
};

// Function EndScreenActorController.EndScreenActorController_C.Cleanup
struct UEndScreenActorController_C_Cleanup_Params
{
};

// Function EndScreenActorController.EndScreenActorController_C.InitFXLights
struct UEndScreenActorController_C_InitFXLights_Params
{
	struct FTransform*                                 SpawnTransform;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool*                                              Survived;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndScreenActorController.EndScreenActorController_C.RandomAnimElement
struct UEndScreenActorController_C_RandomAnimElement_Params
{
	TArray<class UAnimSequence*>                       Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UAnimSequence*                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndScreenActorController.EndScreenActorController_C.ReceiveBeginPlay
struct UEndScreenActorController_C_ReceiveBeginPlay_Params
{
};

// Function EndScreenActorController.EndScreenActorController_C.Play
struct UEndScreenActorController_C_Play_Params
{
	class APlayerCharacter**                           PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              SurvivedInPod;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FEndScreenMove*                             ESMoveSet;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               Seed;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndScreenActorController.EndScreenActorController_C.PoseFinished
struct UEndScreenActorController_C_PoseFinished_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndScreenActorController.EndScreenActorController_C.BreakFinished
struct UEndScreenActorController_C_BreakFinished_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndScreenActorController.EndScreenActorController_C.WalkFinished
struct UEndScreenActorController_C_WalkFinished_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndScreenActorController.EndScreenActorController_C.PropPoseDone
struct UEndScreenActorController_C_PropPoseDone_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndScreenActorController.EndScreenActorController_C.CustomEvent_1
struct UEndScreenActorController_C_CustomEvent_1_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndScreenActorController.EndScreenActorController_C.ExecuteUbergraph_EndScreenActorController
struct UEndScreenActorController_C_ExecuteUbergraph_EndScreenActorController_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
