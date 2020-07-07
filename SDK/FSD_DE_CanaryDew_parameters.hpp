#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_CanaryDew_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DE_CanaryDew.DE_CanaryDew_C.OnStartEffect
struct UDE_CanaryDew_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_CanaryDew.DE_CanaryDew_C.OnStopEffect
struct UDE_CanaryDew_C_OnStopEffect_Params
{
};

// Function DE_CanaryDew.DE_CanaryDew_C.ExecuteUbergraph_DE_CanaryDew
struct UDE_CanaryDew_C_ExecuteUbergraph_DE_CanaryDew_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
