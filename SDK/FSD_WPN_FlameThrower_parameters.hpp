#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_FlameThrower_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_GetTPAnimationEventMesh
struct AWPN_FlameThrower_C_Receive_GetTPAnimationEventMesh_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_GetFPAnimationEventMesh
struct AWPN_FlameThrower_C_Receive_GetFPAnimationEventMesh_Params
{
	class UFirstPersonStaticMeshComponent*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WPN_FlameThrower.WPN_FlameThrower_C.GetGearStatEntry
struct AWPN_FlameThrower_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_FlameThrower.WPN_FlameThrower_C.UserConstructionScript
struct AWPN_FlameThrower_C_UserConstructionScript_Params
{
};

// Function WPN_FlameThrower.WPN_FlameThrower_C.ReceiveBeginPlay
struct AWPN_FlameThrower_C_ReceiveBeginPlay_Params
{
};

// Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveEquipped
struct AWPN_FlameThrower_C_RecieveEquipped_Params
{
};

// Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveUnequipped
struct AWPN_FlameThrower_C_RecieveUnequipped_Params
{
};

// Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadBegin
struct AWPN_FlameThrower_C_Receive_ReloadBegin_Params
{
};

// Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadEnd
struct AWPN_FlameThrower_C_Receive_ReloadEnd_Params
{
};

// Function WPN_FlameThrower.WPN_FlameThrower_C.Recieve_UpdateMeshses
struct AWPN_FlameThrower_C_Recieve_UpdateMeshses_Params
{
	bool*                                              IsFirstPerson;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_FlameThrower.WPN_FlameThrower_C.AddedToInventory
struct AWPN_FlameThrower_C_AddedToInventory_Params
{
	class APlayerCharacter**                           ItemOwner;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_FlameThrower.WPN_FlameThrower_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
struct AWPN_FlameThrower_C_BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature_Params
{
};

// Function WPN_FlameThrower.WPN_FlameThrower_C.OnSkinChanged
struct AWPN_FlameThrower_C_OnSkinChanged_Params
{
	class USkinEffect**                                Skin;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_FlameThrower.WPN_FlameThrower_C.ExecuteUbergraph_WPN_FlameThrower
struct AWPN_FlameThrower_C_ExecuteUbergraph_WPN_FlameThrower_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
