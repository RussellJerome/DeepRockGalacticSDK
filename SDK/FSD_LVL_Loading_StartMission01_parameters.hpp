#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LVL_Loading_StartMission01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.OnFinshed
struct ALVL_Loading_StartMission01_C_OnFinshed_Params
{
};

// Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.StopPlayer
struct ALVL_Loading_StartMission01_C_StopPlayer_Params
{
};

// Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.StartPlayer
struct ALVL_Loading_StartMission01_C_StartPlayer_Params
{
	class ULevelSequence**                             LevelSequence;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.ReceiveBeginPlay
struct ALVL_Loading_StartMission01_C_ReceiveBeginPlay_Params
{
};

// Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.PlayerStart
struct ALVL_Loading_StartMission01_C_PlayerStart_Params
{
	class ULevelSequence**                             LoaderLevelSequence;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.PlayerStop
struct ALVL_Loading_StartMission01_C_PlayerStop_Params
{
};

// Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.ExecuteUbergraph_LVL_Loading_StartMission01
struct ALVL_Loading_StartMission01_C_ExecuteUbergraph_LVL_Loading_StartMission01_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
