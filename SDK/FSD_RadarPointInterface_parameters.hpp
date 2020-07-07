#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_RadarPointInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RadarPointInterface.RadarPointInterface_C.UpdatePoint
struct URadarPointInterface_C_UpdatePoint_Params
{
	float*                                             alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             verticalDist;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               destroy;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RadarPointInterface.RadarPointInterface_C.Get3dPosition
struct URadarPointInterface_C_Get3dPosition_Params
{
	struct FVector                                     Pos;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RadarPointInterface.RadarPointInterface_C.InitPoint
struct URadarPointInterface_C_InitPoint_Params
{
	class URadarPointComponent**                       RadarComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
