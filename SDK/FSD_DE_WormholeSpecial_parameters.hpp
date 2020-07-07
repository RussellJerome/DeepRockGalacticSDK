#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_WormholeSpecial_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DE_WormholeSpecial.DE_WormholeSpecial_C.Disable Older Active Wormhole Effects
struct UDE_WormholeSpecial_C_Disable_Older_Active_Wormhole_Effects_Params
{
};

// Function DE_WormholeSpecial.DE_WormholeSpecial_C.IsLastActiveWormholeEffect
struct UDE_WormholeSpecial_C_IsLastActiveWormholeEffect_Params
{
	bool                                               was_last_effect;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DE_WormholeSpecial.DE_WormholeSpecial_C.Set Original position
struct UDE_WormholeSpecial_C_Set_Original_position_Params
{
};

// Function DE_WormholeSpecial.DE_WormholeSpecial_C.ReceiveTick
struct UDE_WormholeSpecial_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_WormholeSpecial.DE_WormholeSpecial_C.OnStartEffect
struct UDE_WormholeSpecial_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_WormholeSpecial.DE_WormholeSpecial_C.OnStopEffect
struct UDE_WormholeSpecial_C_OnStopEffect_Params
{
};

// Function DE_WormholeSpecial.DE_WormholeSpecial_C.Spawn Teleport Effects
struct UDE_WormholeSpecial_C_Spawn_Teleport_Effects_Params
{
};

// Function DE_WormholeSpecial.DE_WormholeSpecial_C.Disable Active Location Effects
struct UDE_WormholeSpecial_C_Disable_Active_Location_Effects_Params
{
};

// Function DE_WormholeSpecial.DE_WormholeSpecial_C.ExecuteUbergraph_DE_WormholeSpecial
struct UDE_WormholeSpecial_C_ExecuteUbergraph_DE_WormholeSpecial_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
