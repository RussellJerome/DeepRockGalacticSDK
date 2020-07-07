#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_CombatShotgun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_CombatShotgun.WPN_CombatShotgun_C.GetGearStatEntry
struct AWPN_CombatShotgun_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_CombatShotgun.WPN_CombatShotgun_C.UserConstructionScript
struct AWPN_CombatShotgun_C_UserConstructionScript_Params
{
};

// Function WPN_CombatShotgun.WPN_CombatShotgun_C.ReceiveBeginPlay
struct AWPN_CombatShotgun_C_ReceiveBeginPlay_Params
{
};

// Function WPN_CombatShotgun.WPN_CombatShotgun_C.ExecuteUbergraph_WPN_CombatShotgun
struct AWPN_CombatShotgun_C_ExecuteUbergraph_WPN_CombatShotgun_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
