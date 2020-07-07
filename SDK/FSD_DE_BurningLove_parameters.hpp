#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_BurningLove_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DE_BurningLove.DE_BurningLove_C.OnStartEffect
struct UDE_BurningLove_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_BurningLove.DE_BurningLove_C.OnStopEffect
struct UDE_BurningLove_C_OnStopEffect_Params
{
};

// Function DE_BurningLove.DE_BurningLove_C.ExecuteUbergraph_DE_BurningLove
struct UDE_BurningLove_C_ExecuteUbergraph_DE_BurningLove_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
