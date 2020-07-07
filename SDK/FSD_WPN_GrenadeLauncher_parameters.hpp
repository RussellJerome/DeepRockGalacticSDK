#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_GrenadeLauncher_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.GetGearStatEntry
struct AWPN_GrenadeLauncher_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.ReceiveBeginPlay
struct AWPN_GrenadeLauncher_C_ReceiveBeginPlay_Params
{
};

// Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.ExecuteUbergraph_WPN_GrenadeLauncher
struct AWPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
