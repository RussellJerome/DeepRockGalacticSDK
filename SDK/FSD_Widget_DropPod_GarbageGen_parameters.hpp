#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Widget_DropPod_GarbageGen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.GetNewOperation
struct UWidget_DropPod_GarbageGen_C_GetNewOperation_Params
{
};

// Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.DoOperation
struct UWidget_DropPod_GarbageGen_C_DoOperation_Params
{
};

// Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.Construct
struct UWidget_DropPod_GarbageGen_C_Construct_Params
{
};

// Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.PreConstruct
struct UWidget_DropPod_GarbageGen_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.Tick
struct UWidget_DropPod_GarbageGen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.OnGeneratedMissionChanged
struct UWidget_DropPod_GarbageGen_C_OnGeneratedMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.ExecuteUbergraph_Widget_DropPod_GarbageGen
struct UWidget_DropPod_GarbageGen_C_ExecuteUbergraph_Widget_DropPod_GarbageGen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
