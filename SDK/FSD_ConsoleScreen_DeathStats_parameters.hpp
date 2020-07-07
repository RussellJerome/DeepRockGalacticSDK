#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_DeathStats_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C.SetStatsOwner
struct UConsoleScreen_DeathStats_C_SetStatsOwner_Params
{
	class AFSDPlayerState**                            Player_State;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C.ExecuteUbergraph_ConsoleScreen_DeathStats
struct UConsoleScreen_DeathStats_C_ExecuteUbergraph_ConsoleScreen_DeathStats_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
