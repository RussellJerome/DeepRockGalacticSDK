#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ForgeScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ForgeScreen.ForgeScreen_C.Construct
struct UForgeScreen_C_Construct_Params
{
};

// Function ForgeScreen.ForgeScreen_C.StartForging
struct UForgeScreen_C_StartForging_Params
{
};

// Function ForgeScreen.ForgeScreen_C.FrogingDone
struct UForgeScreen_C_FrogingDone_Params
{
};

// Function ForgeScreen.ForgeScreen_C.ExecuteUbergraph_ForgeScreen
struct UForgeScreen_C_ExecuteUbergraph_ForgeScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
