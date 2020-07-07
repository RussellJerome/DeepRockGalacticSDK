#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_RadarPoint_Player_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.InitPoint
struct UHUD_RadarPoint_Player_C_InitPoint_Params
{
	class URadarPointComponent**                       RadarComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.Get3dPosition
struct UHUD_RadarPoint_Player_C_Get3dPosition_Params
{
	struct FVector                                     Pos;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.UpdatePoint
struct UHUD_RadarPoint_Player_C_UpdatePoint_Params
{
	float*                                             alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             verticalDist;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               destroy;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.Deactivate
struct UHUD_RadarPoint_Player_C_Deactivate_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
