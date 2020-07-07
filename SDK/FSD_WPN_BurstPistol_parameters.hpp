#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_BurstPistol_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_BurstPistol.WPN_BurstPistol_C.GetGearStatEntry
struct AWPN_BurstPistol_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_BurstPistol.WPN_BurstPistol_C.UserConstructionScript
struct AWPN_BurstPistol_C_UserConstructionScript_Params
{
};

// Function WPN_BurstPistol.WPN_BurstPistol_C.ReceiveBeginPlay
struct AWPN_BurstPistol_C_ReceiveBeginPlay_Params
{
};

// Function WPN_BurstPistol.WPN_BurstPistol_C.Receive_ReloadBegin
struct AWPN_BurstPistol_C_Receive_ReloadBegin_Params
{
};

// Function WPN_BurstPistol.WPN_BurstPistol_C.Receive_ReloadEnd
struct AWPN_BurstPistol_C_Receive_ReloadEnd_Params
{
};

// Function WPN_BurstPistol.WPN_BurstPistol_C.ExecuteUbergraph_WPN_BurstPistol
struct AWPN_BurstPistol_C_ExecuteUbergraph_WPN_BurstPistol_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
