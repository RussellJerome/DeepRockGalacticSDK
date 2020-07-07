#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_SeasonedMoonrider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DE_SeasonedMoonrider.DE_SeasonedMoonrider_C.OnStartEffect
struct UDE_SeasonedMoonrider_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_SeasonedMoonrider.DE_SeasonedMoonrider_C.OnStopEffect
struct UDE_SeasonedMoonrider_C_OnStopEffect_Params
{
};

// Function DE_SeasonedMoonrider.DE_SeasonedMoonrider_C.ExecuteUbergraph_DE_SeasonedMoonrider
struct UDE_SeasonedMoonrider_C_ExecuteUbergraph_DE_SeasonedMoonrider_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
