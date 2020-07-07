#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_GutWrecker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DE_GutWrecker.DE_GutWrecker_C.ReceiveTick
struct UDE_GutWrecker_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_GutWrecker.DE_GutWrecker_C.OnStartEffect
struct UDE_GutWrecker_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_GutWrecker.DE_GutWrecker_C.OnStopEffect
struct UDE_GutWrecker_C_OnStopEffect_Params
{
};

// Function DE_GutWrecker.DE_GutWrecker_C.ExecuteUbergraph_DE_GutWrecker
struct UDE_GutWrecker_C_ExecuteUbergraph_DE_GutWrecker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
