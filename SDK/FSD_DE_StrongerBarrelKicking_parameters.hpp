#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_StrongerBarrelKicking_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DE_StrongerBarrelKicking.DE_StrongerBarrelKicking_C.OnStartEffect
struct UDE_StrongerBarrelKicking_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_StrongerBarrelKicking.DE_StrongerBarrelKicking_C.OnStopEffect
struct UDE_StrongerBarrelKicking_C_OnStopEffect_Params
{
};

// Function DE_StrongerBarrelKicking.DE_StrongerBarrelKicking_C.ExecuteUbergraph_DE_StrongerBarrelKicking
struct UDE_StrongerBarrelKicking_C_ExecuteUbergraph_DE_StrongerBarrelKicking_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
