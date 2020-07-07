#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_Pistol_A_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_GetTPAnimationEventMesh
struct AWPN_Pistol_A_C_Receive_GetTPAnimationEventMesh_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_GetFPAnimationEventMesh
struct AWPN_Pistol_A_C_Receive_GetFPAnimationEventMesh_Params
{
	class UFirstPersonStaticMeshComponent*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WPN_Pistol_A.WPN_Pistol_A_C.GetGearStatEntry
struct AWPN_Pistol_A_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_Pistol_A.WPN_Pistol_A_C.UserConstructionScript
struct AWPN_Pistol_A_C_UserConstructionScript_Params
{
};

// Function WPN_Pistol_A.WPN_Pistol_A_C.ReceiveBeginPlay
struct AWPN_Pistol_A_C_ReceiveBeginPlay_Params
{
};

// Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_ReloadBegin
struct AWPN_Pistol_A_C_Receive_ReloadBegin_Params
{
};

// Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_ReloadEnd
struct AWPN_Pistol_A_C_Receive_ReloadEnd_Params
{
};

// Function WPN_Pistol_A.WPN_Pistol_A_C.OnSkinChanged
struct AWPN_Pistol_A_C_OnSkinChanged_Params
{
	class USkinEffect**                                Skin;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_Pistol_A.WPN_Pistol_A_C.ExecuteUbergraph_WPN_Pistol_A
struct AWPN_Pistol_A_C_ExecuteUbergraph_WPN_Pistol_A_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
