#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_LaserPointerScanProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_LaserPointerScanProgress.HUD_LaserPointerScanProgress_C.SetProgress
struct UHUD_LaserPointerScanProgress_C_SetProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_LaserPointerScanProgress.HUD_LaserPointerScanProgress_C.ExecuteUbergraph_HUD_LaserPointerScanProgress
struct UHUD_LaserPointerScanProgress_C_ExecuteUbergraph_HUD_LaserPointerScanProgress_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
