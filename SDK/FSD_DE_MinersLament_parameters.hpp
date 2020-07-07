#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_MinersLament_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DE_MinersLament.DE_MinersLament_C.OnStartEffect
struct UDE_MinersLament_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_MinersLament.DE_MinersLament_C.OnStopEffect
struct UDE_MinersLament_C_OnStopEffect_Params
{
};

// Function DE_MinersLament.DE_MinersLament_C.ExecuteUbergraph_DE_MinersLament
struct UDE_MinersLament_C_ExecuteUbergraph_DE_MinersLament_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
