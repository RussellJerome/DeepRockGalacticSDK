#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_ArkenStout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DE_ArkenStout.DE_ArkenStout_C.OnStopEffect
struct UDE_ArkenStout_C_OnStopEffect_Params
{
};

// Function DE_ArkenStout.DE_ArkenStout_C.OnStartEffect
struct UDE_ArkenStout_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_ArkenStout.DE_ArkenStout_C.ExecuteUbergraph_DE_ArkenStout
struct UDE_ArkenStout_C_ExecuteUbergraph_DE_ArkenStout_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
