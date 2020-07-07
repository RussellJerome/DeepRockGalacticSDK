#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_MissionBar_DeepDive_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C.PreConstruct
struct UWND_MissionBar_DeepDive_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C.Construct
struct UWND_MissionBar_DeepDive_C_Construct_Params
{
};

// Function WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C.Tick
struct UWND_MissionBar_DeepDive_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C.ExecuteUbergraph_WND_MissionBar_DeepDive
struct UWND_MissionBar_DeepDive_C_ExecuteUbergraph_WND_MissionBar_DeepDive_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
