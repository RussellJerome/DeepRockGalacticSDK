#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_RadarPoint_Resupply_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_RadarPoint_Resupply.HUD_RadarPoint_Resupply_C.InitPoint
struct UHUD_RadarPoint_Resupply_C_InitPoint_Params
{
	class URadarPointComponent**                       RadarComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_RadarPoint_Resupply.HUD_RadarPoint_Resupply_C.Get3dPosition
struct UHUD_RadarPoint_Resupply_C_Get3dPosition_Params
{
	struct FVector                                     Pos;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_RadarPoint_Resupply.HUD_RadarPoint_Resupply_C.UpdatePoint
struct UHUD_RadarPoint_Resupply_C_UpdatePoint_Params
{
	float*                                             alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             verticalDist;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               destroy;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
