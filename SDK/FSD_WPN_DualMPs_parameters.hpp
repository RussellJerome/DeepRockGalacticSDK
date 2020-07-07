#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_DualMPs_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_DualMPs.WPN_DualMPs_C.GetGearStatEntry
struct AWPN_DualMPs_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_DualMPs.WPN_DualMPs_C.UserConstructionScript
struct AWPN_DualMPs_C_UserConstructionScript_Params
{
};

// Function WPN_DualMPs.WPN_DualMPs_C.ReceiveBeginPlay
struct AWPN_DualMPs_C_ReceiveBeginPlay_Params
{
};

// Function WPN_DualMPs.WPN_DualMPs_C.ExecuteUbergraph_WPN_DualMPs
struct AWPN_DualMPs_C_ExecuteUbergraph_WPN_DualMPs_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
