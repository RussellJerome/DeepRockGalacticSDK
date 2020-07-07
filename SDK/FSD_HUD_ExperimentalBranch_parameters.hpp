#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_ExperimentalBranch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_ExperimentalBranch.HUD_ExperimentalBranch_C.PreConstruct
struct UHUD_ExperimentalBranch_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ExperimentalBranch.HUD_ExperimentalBranch_C.Construct
struct UHUD_ExperimentalBranch_C_Construct_Params
{
};

// Function HUD_ExperimentalBranch.HUD_ExperimentalBranch_C.ExecuteUbergraph_HUD_ExperimentalBranch
struct UHUD_ExperimentalBranch_C_ExecuteUbergraph_HUD_ExperimentalBranch_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
