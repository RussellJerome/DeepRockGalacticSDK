#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LVL_CharacterSelection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LVL_CharacterSelection.LVL_CharacterSelection_C.PlaySpecificSequence
struct ALVL_CharacterSelection_C_PlaySpecificSequence_Params
{
	class ULevelSequence**                             LevelSequence;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlayer
struct ALVL_CharacterSelection_C_StopPlayer_Params
{
};

// Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlayer
struct ALVL_CharacterSelection_C_StartPlayer_Params
{
	ECharselectionCameraLocation*                      CamSetting;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlay
struct ALVL_CharacterSelection_C_StopPlay_Params
{
};

// Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartLevelSeq
struct ALVL_CharacterSelection_C_StartLevelSeq_Params
{
	class ULevelSequence**                             CharacterLevelSequence;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlay
struct ALVL_CharacterSelection_C_StartPlay_Params
{
	ECharselectionCameraLocation*                      selectionLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_CharacterSelection.LVL_CharacterSelection_C.ReceiveBeginPlay
struct ALVL_CharacterSelection_C_ReceiveBeginPlay_Params
{
};

// Function LVL_CharacterSelection.LVL_CharacterSelection_C.ExecuteUbergraph_LVL_CharacterSelection
struct ALVL_CharacterSelection_C_ExecuteUbergraph_LVL_CharacterSelection_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
