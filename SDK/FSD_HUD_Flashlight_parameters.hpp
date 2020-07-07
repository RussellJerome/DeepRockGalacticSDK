#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Flashlight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Flashlight.HUD_Flashlight_C.Construct
struct UHUD_Flashlight_C_Construct_Params
{
};

// Function HUD_Flashlight.HUD_Flashlight_C.PreConstruct
struct UHUD_Flashlight_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Flashlight.HUD_Flashlight_C.OnHeadlightOnChanged
struct UHUD_Flashlight_C_OnHeadlightOnChanged_Params
{
	bool*                                              IsOn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Flashlight.HUD_Flashlight_C.ExecuteUbergraph_HUD_Flashlight
struct UHUD_Flashlight_C_ExecuteUbergraph_HUD_Flashlight_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
