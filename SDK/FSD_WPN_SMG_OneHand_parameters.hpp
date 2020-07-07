#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_SMG_OneHand_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.GetGearStatEntry
struct AWPN_SMG_OneHand_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.UserConstructionScript
struct AWPN_SMG_OneHand_C_UserConstructionScript_Params
{
};

// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.RecieveEquipped
struct AWPN_SMG_OneHand_C_RecieveEquipped_Params
{
};

// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Recieve_UpdateMeshses
struct AWPN_SMG_OneHand_C_Recieve_UpdateMeshses_Params
{
	bool*                                              IsFirstPerson;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ReceiveBeginPlay
struct AWPN_SMG_OneHand_C_ReceiveBeginPlay_Params
{
};

// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadBegin
struct AWPN_SMG_OneHand_C_Receive_ReloadBegin_Params
{
};

// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadEnd
struct AWPN_SMG_OneHand_C_Receive_ReloadEnd_Params
{
};

// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ExecuteUbergraph_WPN_SMG_OneHand
struct AWPN_SMG_OneHand_C_ExecuteUbergraph_WPN_SMG_OneHand_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
