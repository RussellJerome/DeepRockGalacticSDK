#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_ToothGrinder_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DE_ToothGrinder.DE_ToothGrinder_C.OnStartEffect
struct UDE_ToothGrinder_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_ToothGrinder.DE_ToothGrinder_C.OnStopEffect
struct UDE_ToothGrinder_C_OnStopEffect_Params
{
};

// Function DE_ToothGrinder.DE_ToothGrinder_C.ExecuteUbergraph_DE_ToothGrinder
struct UDE_ToothGrinder_C_ExecuteUbergraph_DE_ToothGrinder_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
