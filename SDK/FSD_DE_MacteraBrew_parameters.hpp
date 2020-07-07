#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_MacteraBrew_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DE_MacteraBrew.DE_MacteraBrew_C.OnStopEffect
struct UDE_MacteraBrew_C_OnStopEffect_Params
{
};

// Function DE_MacteraBrew.DE_MacteraBrew_C.OnStartEffect
struct UDE_MacteraBrew_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_MacteraBrew.DE_MacteraBrew_C.ExecuteUbergraph_DE_MacteraBrew
struct UDE_MacteraBrew_C_ExecuteUbergraph_DE_MacteraBrew_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
