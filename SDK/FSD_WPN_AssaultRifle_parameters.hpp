#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_AssaultRifle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_GetTPAnimationEventMesh
struct AWPN_AssaultRifle_C_Receive_GetTPAnimationEventMesh_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_GetFPAnimationEventMesh
struct AWPN_AssaultRifle_C_Receive_GetFPAnimationEventMesh_Params
{
	class UFirstPersonStaticMeshComponent*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WPN_AssaultRifle.WPN_AssaultRifle_C.GetGearStatEntry
struct AWPN_AssaultRifle_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_AssaultRifle.WPN_AssaultRifle_C.UserConstructionScript
struct AWPN_AssaultRifle_C_UserConstructionScript_Params
{
};

// Function WPN_AssaultRifle.WPN_AssaultRifle_C.RecieveEquipped
struct AWPN_AssaultRifle_C_RecieveEquipped_Params
{
};

// Function WPN_AssaultRifle.WPN_AssaultRifle_C.Recieve_UpdateMeshses
struct AWPN_AssaultRifle_C_Recieve_UpdateMeshses_Params
{
	bool*                                              IsFirstPerson;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_AssaultRifle.WPN_AssaultRifle_C.ReceiveBeginPlay
struct AWPN_AssaultRifle_C_ReceiveBeginPlay_Params
{
};

// Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_ReloadBegin
struct AWPN_AssaultRifle_C_Receive_ReloadBegin_Params
{
};

// Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_ReloadEnd
struct AWPN_AssaultRifle_C_Receive_ReloadEnd_Params
{
};

// Function WPN_AssaultRifle.WPN_AssaultRifle_C.OnSkinChanged
struct AWPN_AssaultRifle_C_OnSkinChanged_Params
{
	class USkinEffect**                                Skin;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_AssaultRifle.WPN_AssaultRifle_C.ExecuteUbergraph_WPN_AssaultRifle
struct AWPN_AssaultRifle_C_ExecuteUbergraph_WPN_AssaultRifle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
