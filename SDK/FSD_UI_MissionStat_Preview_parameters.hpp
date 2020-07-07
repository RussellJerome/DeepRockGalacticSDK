#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MissionStat_Preview_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.Construct
struct UUI_MissionStat_Preview_C_Construct_Params
{
};

// Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.SetMissionStat
struct UUI_MissionStat_Preview_C_SetMissionStat_Params
{
	class UMissionStat**                               MissionStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.ExecuteUbergraph_UI_MissionStat_Preview
struct UUI_MissionStat_Preview_C_ExecuteUbergraph_UI_MissionStat_Preview_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
