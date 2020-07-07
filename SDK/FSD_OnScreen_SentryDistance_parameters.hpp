#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OnScreen_SentryDistance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Set End Points
struct UOnScreen_SentryDistance_C_Set_End_Points_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Destination;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Tick
struct UOnScreen_SentryDistance_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Construct
struct UOnScreen_SentryDistance_C_Construct_Params
{
};

// Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.ExecuteUbergraph_OnScreen_SentryDistance
struct UOnScreen_SentryDistance_C_ExecuteUbergraph_OnScreen_SentryDistance_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
