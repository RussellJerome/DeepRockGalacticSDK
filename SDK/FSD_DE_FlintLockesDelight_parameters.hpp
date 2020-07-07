#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_FlintLockesDelight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnRep_Trigger Explosion
struct UDE_FlintLockesDelight_C_OnRep_Trigger_Explosion_Params
{
};

// Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.ReceiveTick
struct UDE_FlintLockesDelight_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnStartEffect
struct UDE_FlintLockesDelight_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.Trigger Explosion
struct UDE_FlintLockesDelight_C_Trigger_Explosion_Params
{
};

// Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnStopEffect
struct UDE_FlintLockesDelight_C_OnStopEffect_Params
{
};

// Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.Stop Effects
struct UDE_FlintLockesDelight_C_Stop_Effects_Params
{
};

// Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.ExecuteUbergraph_DE_FlintLockesDelight
struct UDE_FlintLockesDelight_C_ExecuteUbergraph_DE_FlintLockesDelight_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
