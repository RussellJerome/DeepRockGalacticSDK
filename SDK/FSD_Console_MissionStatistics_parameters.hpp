#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Console_MissionStatistics_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Console_MissionStatistics.Console_MissionStatistics_C.HasClaimablePerkPoints
struct UConsole_MissionStatistics_C_HasClaimablePerkPoints_Params
{
	bool                                               Claimable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Console_MissionStatistics.Console_MissionStatistics_C.Construct
struct UConsole_MissionStatistics_C_Construct_Params
{
};

// Function Console_MissionStatistics.Console_MissionStatistics_C.StartClaimable
struct UConsole_MissionStatistics_C_StartClaimable_Params
{
};

// Function Console_MissionStatistics.Console_MissionStatistics_C.StopClaimable
struct UConsole_MissionStatistics_C_StopClaimable_Params
{
};

// Function Console_MissionStatistics.Console_MissionStatistics_C.Update
struct UConsole_MissionStatistics_C_Update_Params
{
};

// Function Console_MissionStatistics.Console_MissionStatistics_C.OnCountChanged_Event
struct UConsole_MissionStatistics_C_OnCountChanged_Event_Params
{
	class UMissionStat**                               MissionStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_MissionStatistics.Console_MissionStatistics_C.OnMilestoneClaimed_Event
struct UConsole_MissionStatistics_C_OnMilestoneClaimed_Event_Params
{
	class UMilestoneAsset**                            Milestone;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClaimedTier;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_MissionStatistics.Console_MissionStatistics_C.ExecuteUbergraph_Console_MissionStatistics
struct UConsole_MissionStatistics_C_ExecuteUbergraph_Console_MissionStatistics_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
