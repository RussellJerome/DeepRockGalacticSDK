#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_SmartStout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DE_SmartStout.DE_SmartStout_C.OnStopEffect
struct UDE_SmartStout_C_OnStopEffect_Params
{
};

// Function DE_SmartStout.DE_SmartStout_C.OnStartEffect
struct UDE_SmartStout_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_SmartStout.DE_SmartStout_C.ExecuteUbergraph_DE_SmartStout
struct UDE_SmartStout_C_ExecuteUbergraph_DE_SmartStout_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
