#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PointOfInterest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PointOfInterest.BP_PointOfInterest_C.Init
struct ABP_PointOfInterest_C_Init_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PointOfInterest.BP_PointOfInterest_C.ReceiveBeginPlay
struct ABP_PointOfInterest_C_ReceiveBeginPlay_Params
{
};

// Function BP_PointOfInterest.BP_PointOfInterest_C.Finished_Event
struct ABP_PointOfInterest_C_Finished_Event_Params
{
};

// Function BP_PointOfInterest.BP_PointOfInterest_C.ExecuteUbergraph_BP_PointOfInterest
struct ABP_PointOfInterest_C_ExecuteUbergraph_BP_PointOfInterest_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
