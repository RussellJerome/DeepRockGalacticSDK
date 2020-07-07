#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Crosshair_LaserPointer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.SetDotVisible
struct UHUD_Crosshair_LaserPointer_C_SetDotVisible_Params
{
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.Construct
struct UHUD_Crosshair_LaserPointer_C_Construct_Params
{
};

// Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.ExecuteUbergraph_HUD_Crosshair_LaserPointer
struct UHUD_Crosshair_LaserPointer_C_ExecuteUbergraph_HUD_Crosshair_LaserPointer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
