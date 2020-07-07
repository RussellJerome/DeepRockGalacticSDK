#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_Gatling_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_Gatling.WPN_Gatling_C.GetGearStatEntry
struct AWPN_Gatling_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_Gatling.WPN_Gatling_C.UserConstructionScript
struct AWPN_Gatling_C_UserConstructionScript_Params
{
};

// Function WPN_Gatling.WPN_Gatling_C.Receive_Overheated
struct AWPN_Gatling_C_Receive_Overheated_Params
{
};

// Function WPN_Gatling.WPN_Gatling_C.Receive_IsFiringChanged
struct AWPN_Gatling_C_Receive_IsFiringChanged_Params
{
	bool*                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_Gatling.WPN_Gatling_C.RecieveEquipped
struct AWPN_Gatling_C_RecieveEquipped_Params
{
};

// Function WPN_Gatling.WPN_Gatling_C.RecieveUnequipped
struct AWPN_Gatling_C_RecieveUnequipped_Params
{
};

// Function WPN_Gatling.WPN_Gatling_C.All_SpawnHeatBurst
struct AWPN_Gatling_C_All_SpawnHeatBurst_Params
{
};

// Function WPN_Gatling.WPN_Gatling_C.TriggerCriticalOverheat
struct AWPN_Gatling_C_TriggerCriticalOverheat_Params
{
};

// Function WPN_Gatling.WPN_Gatling_C.OnTemperatureChanged
struct AWPN_Gatling_C_OnTemperatureChanged_Params
{
	float*                                             Temperature;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Overheated;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_Gatling.WPN_Gatling_C.ReceiveBeginPlay
struct AWPN_Gatling_C_ReceiveBeginPlay_Params
{
};

// Function WPN_Gatling.WPN_Gatling_C.OnSkinChanged
struct AWPN_Gatling_C_OnSkinChanged_Params
{
	class USkinEffect**                                Skin;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_Gatling.WPN_Gatling_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
struct AWPN_Gatling_C_BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature_Params
{
};

// Function WPN_Gatling.WPN_Gatling_C.ExecuteUbergraph_WPN_Gatling
struct AWPN_Gatling_C_ExecuteUbergraph_WPN_Gatling_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
