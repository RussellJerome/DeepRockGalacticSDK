#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_M1000_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_M1000.WPN_M1000_C.GetGearStatEntry
struct AWPN_M1000_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_M1000.WPN_M1000_C.UserConstructionScript
struct AWPN_M1000_C_UserConstructionScript_Params
{
};

// Function WPN_M1000.WPN_M1000_C.RecieveEquipped
struct AWPN_M1000_C_RecieveEquipped_Params
{
};

// Function WPN_M1000.WPN_M1000_C.Recieve_UpdateMeshses
struct AWPN_M1000_C_Recieve_UpdateMeshses_Params
{
	bool*                                              IsFirstPerson;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_M1000.WPN_M1000_C.ReceiveBeginPlay
struct AWPN_M1000_C_ReceiveBeginPlay_Params
{
};

// Function WPN_M1000.WPN_M1000_C.ExecuteUbergraph_WPN_M1000
struct AWPN_M1000_C_ExecuteUbergraph_WPN_M1000_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
