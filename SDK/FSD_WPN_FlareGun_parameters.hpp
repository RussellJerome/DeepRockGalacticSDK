#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_FlareGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_FlareGun.WPN_FlareGun_C.GetGearStatEntry
struct AWPN_FlareGun_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_FlareGun.WPN_FlareGun_C.ReceiveBeginPlay
struct AWPN_FlareGun_C_ReceiveBeginPlay_Params
{
};

// Function WPN_FlareGun.WPN_FlareGun_C.ExecuteUbergraph_WPN_FlareGun
struct AWPN_FlareGun_C_ExecuteUbergraph_WPN_FlareGun_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
