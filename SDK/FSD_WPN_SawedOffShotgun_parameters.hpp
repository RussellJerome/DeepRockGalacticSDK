#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_SawedOffShotgun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.GetGearStatEntry
struct AWPN_SawedOffShotgun_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.UserConstructionScript
struct AWPN_SawedOffShotgun_C_UserConstructionScript_Params
{
};

// Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.ReceiveBeginPlay
struct AWPN_SawedOffShotgun_C_ReceiveBeginPlay_Params
{
};

// Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.ExecuteUbergraph_WPN_SawedOffShotgun
struct AWPN_SawedOffShotgun_C_ExecuteUbergraph_WPN_SawedOffShotgun_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
