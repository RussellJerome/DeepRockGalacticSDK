#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_BlacklockLager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DE_BlacklockLager.DE_BlacklockLager_C.ReceiveTick
struct UDE_BlacklockLager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_BlacklockLager.DE_BlacklockLager_C.OnStartEffect
struct UDE_BlacklockLager_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_BlacklockLager.DE_BlacklockLager_C.Activate Effects
struct UDE_BlacklockLager_C_Activate_Effects_Params
{
};

// Function DE_BlacklockLager.DE_BlacklockLager_C.OnStopEffect
struct UDE_BlacklockLager_C_OnStopEffect_Params
{
};

// Function DE_BlacklockLager.DE_BlacklockLager_C.ExecuteUbergraph_DE_BlacklockLager
struct UDE_BlacklockLager_C_ExecuteUbergraph_DE_BlacklockLager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
