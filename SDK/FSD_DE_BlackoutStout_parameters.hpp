#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_BlackoutStout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DE_BlackoutStout.DE_BlackoutStout_C.OnStartEffect
struct UDE_BlackoutStout_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_BlackoutStout.DE_BlackoutStout_C.OnStopEffect
struct UDE_BlackoutStout_C_OnStopEffect_Params
{
};

// Function DE_BlackoutStout.DE_BlackoutStout_C.ExecuteUbergraph_DE_BlackoutStout
struct UDE_BlackoutStout_C_ExecuteUbergraph_DE_BlackoutStout_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
