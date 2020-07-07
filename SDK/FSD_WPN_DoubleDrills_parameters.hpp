#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_DoubleDrills_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetGearStatEntry
struct AWPN_DoubleDrills_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetHeatingAudioSceneComponent
struct AWPN_DoubleDrills_C_GetHeatingAudioSceneComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnTemperatureChanged
struct AWPN_DoubleDrills_C_OnTemperatureChanged_Params
{
	float*                                             Temperature;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Overheated;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_DoubleDrills.WPN_DoubleDrills_C.Increase FOV
struct AWPN_DoubleDrills_C_Increase_FOV_Params
{
};

// Function WPN_DoubleDrills.WPN_DoubleDrills_C.Decrease FOV
struct AWPN_DoubleDrills_C_Decrease_FOV_Params
{
};

// Function WPN_DoubleDrills.WPN_DoubleDrills_C.AddedToInventory
struct AWPN_DoubleDrills_C_AddedToInventory_Params
{
	class APlayerCharacter**                           ItemOwner;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_DoubleDrills.WPN_DoubleDrills_C.BP_OnDrillDamage
struct AWPN_DoubleDrills_C_BP_OnDrillDamage_Params
{
};

// Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStartDrilling
struct AWPN_DoubleDrills_C_OnStartDrilling_Params
{
};

// Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStopDrilling
struct AWPN_DoubleDrills_C_OnStopDrilling_Params
{
};

// Function WPN_DoubleDrills.WPN_DoubleDrills_C.Receive_Overheated
struct AWPN_DoubleDrills_C_Receive_Overheated_Params
{
};

// Function WPN_DoubleDrills.WPN_DoubleDrills_C.ReceiveBeginPlay
struct AWPN_DoubleDrills_C_ReceiveBeginPlay_Params
{
};

// Function WPN_DoubleDrills.WPN_DoubleDrills_C.Gunsling
struct AWPN_DoubleDrills_C_Gunsling_Params
{
};

// Function WPN_DoubleDrills.WPN_DoubleDrills_C.RecieveCycledItem
struct AWPN_DoubleDrills_C_RecieveCycledItem_Params
{
};

// Function WPN_DoubleDrills.WPN_DoubleDrills_C.ExecuteUbergraph_WPN_DoubleDrills
struct AWPN_DoubleDrills_C_ExecuteUbergraph_WPN_DoubleDrills_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
