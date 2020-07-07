#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_GrenadeIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.SetOn
struct UHUD_GrenadeIcon_C_SetOn_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.PreConstruct
struct UHUD_GrenadeIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.ExecuteUbergraph_HUD_GrenadeIcon
struct UHUD_GrenadeIcon_C_ExecuteUbergraph_HUD_GrenadeIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
