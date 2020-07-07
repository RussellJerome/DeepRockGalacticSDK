#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MissionInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_MissionInfo.ITM_MissionInfo_C.UpdateMissionInfo
struct UITM_MissionInfo_C_UpdateMissionInfo_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MissionInfo.ITM_MissionInfo_C.PreConstruct
struct UITM_MissionInfo_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MissionInfo.ITM_MissionInfo_C.ExecuteUbergraph_ITM_MissionInfo
struct UITM_MissionInfo_C_ExecuteUbergraph_ITM_MissionInfo_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
