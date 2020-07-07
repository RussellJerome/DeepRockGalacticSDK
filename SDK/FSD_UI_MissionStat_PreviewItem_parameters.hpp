#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MissionStat_PreviewItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.PreConstruct
struct UUI_MissionStat_PreviewItem_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.Tick
struct UUI_MissionStat_PreviewItem_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.SetMissionStat
struct UUI_MissionStat_PreviewItem_C_SetMissionStat_Params
{
	class UMissionStat**                               MissionStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.ExecuteUbergraph_UI_MissionStat_PreviewItem
struct UUI_MissionStat_PreviewItem_C_ExecuteUbergraph_UI_MissionStat_PreviewItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
