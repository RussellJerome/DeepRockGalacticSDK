#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Console_MissionComplete_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Console_MissionComplete.Console_MissionComplete_C.GetMissionResult
struct UConsole_MissionComplete_C_GetMissionResult_Params
{
	class UMissionResultInfo*                          MissionResultInfo;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Console_MissionComplete.Console_MissionComplete_C.PreConstruct
struct UConsole_MissionComplete_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_MissionComplete.Console_MissionComplete_C.BeginScreen
struct UConsole_MissionComplete_C_BeginScreen_Params
{
};

// Function Console_MissionComplete.Console_MissionComplete_C.Construct
struct UConsole_MissionComplete_C_Construct_Params
{
};

// Function Console_MissionComplete.Console_MissionComplete_C.ExecuteUbergraph_Console_MissionComplete
struct UConsole_MissionComplete_C_ExecuteUbergraph_Console_MissionComplete_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
