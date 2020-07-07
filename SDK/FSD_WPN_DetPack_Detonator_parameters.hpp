#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_DetPack_Detonator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.GetGearStatEntry
struct AWPN_DetPack_Detonator_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.UserConstructionScript
struct AWPN_DetPack_Detonator_C_UserConstructionScript_Params
{
};

// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.RecieveStartUsing
struct AWPN_DetPack_Detonator_C_RecieveStartUsing_Params
{
};

// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.RecieveEquipped
struct AWPN_DetPack_Detonator_C_RecieveEquipped_Params
{
};

// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.ReceiveResupply
struct AWPN_DetPack_Detonator_C_ReceiveResupply_Params
{
	float*                                             percentage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.Receive_OnRep_IsDetonatorOut
struct AWPN_DetPack_Detonator_C_Receive_OnRep_IsDetonatorOut_Params
{
};

// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.ExecuteUbergraph_WPN_DetPack_Detonator
struct AWPN_DetPack_Detonator_C_ExecuteUbergraph_WPN_DetPack_Detonator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
