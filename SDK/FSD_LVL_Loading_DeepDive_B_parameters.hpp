#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LVL_Loading_DeepDive_B_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.StopPlayer
struct ALVL_Loading_DeepDive_B_C_StopPlayer_Params
{
};

// Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.StartPlayer
struct ALVL_Loading_DeepDive_B_C_StartPlayer_Params
{
	class ULevelSequence**                             LevelSequence;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.ReceiveBeginPlay
struct ALVL_Loading_DeepDive_B_C_ReceiveBeginPlay_Params
{
};

// Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.PlayerStart
struct ALVL_Loading_DeepDive_B_C_PlayerStart_Params
{
	class ULevelSequence**                             LoaderLevelSequence;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.PlayerStop
struct ALVL_Loading_DeepDive_B_C_PlayerStop_Params
{
};

// Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.ExecuteUbergraph_LVL_Loading_DeepDive_B
struct ALVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
