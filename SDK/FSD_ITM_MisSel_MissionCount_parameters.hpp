#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_MissionCount_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.SetMissionCount
struct UITM_MisSel_MissionCount_C_SetMissionCount_Params
{
	TArray<class UGeneratedMission*>                   missions;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FBlueprintSessionResult>             SeachResults;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.PreConstruct
struct UITM_MisSel_MissionCount_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.Construct
struct UITM_MisSel_MissionCount_C_Construct_Params
{
};

// Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.ServerUpdate
struct UITM_MisSel_MissionCount_C_ServerUpdate_Params
{
};

// Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.ExecuteUbergraph_ITM_MisSel_MissionCount
struct UITM_MisSel_MissionCount_C_ExecuteUbergraph_ITM_MisSel_MissionCount_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
