#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Radar2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Radar2.HUD_Radar2_C.PreConstruct
struct UHUD_Radar2_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Radar2.HUD_Radar2_C.Construct
struct UHUD_Radar2_C_Construct_Params
{
};

// Function HUD_Radar2.HUD_Radar2_C.ExecuteUbergraph_HUD_Radar2
struct UHUD_Radar2_C_ExecuteUbergraph_HUD_Radar2_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
