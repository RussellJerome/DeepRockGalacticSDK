#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_Cryospray_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_Cryospray.WPN_Cryospray_C.GetGearStatEntry
struct AWPN_Cryospray_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_Cryospray.WPN_Cryospray_C.UserConstructionScript
struct AWPN_Cryospray_C_UserConstructionScript_Params
{
};

// Function WPN_Cryospray.WPN_Cryospray_C.BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature
struct AWPN_Cryospray_C_BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature_Params
{
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_Cryospray.WPN_Cryospray_C.Update Ammo Display
struct AWPN_Cryospray_C_Update_Ammo_Display_Params
{
};

// Function WPN_Cryospray.WPN_Cryospray_C.ReceiveRepressurisingChanged
struct AWPN_Cryospray_C_ReceiveRepressurisingChanged_Params
{
	bool*                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_Cryospray.WPN_Cryospray_C.RecieveEquipped
struct AWPN_Cryospray_C_RecieveEquipped_Params
{
};

// Function WPN_Cryospray.WPN_Cryospray_C.RecieveUnequipped
struct AWPN_Cryospray_C_RecieveUnequipped_Params
{
};

// Function WPN_Cryospray.WPN_Cryospray_C.Toggle RepressurerisingFX
struct AWPN_Cryospray_C_Toggle_RepressurerisingFX_Params
{
	bool*                                              on;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_Cryospray.WPN_Cryospray_C.OnProjectileLaunched
struct AWPN_Cryospray_C_OnProjectileLaunched_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WPN_Cryospray.WPN_Cryospray_C.ReceiveBeginPlay
struct AWPN_Cryospray_C_ReceiveBeginPlay_Params
{
};

// Function WPN_Cryospray.WPN_Cryospray_C.OnPreProjectileLaunch
struct AWPN_Cryospray_C_OnPreProjectileLaunch_Params
{
};

// Function WPN_Cryospray.WPN_Cryospray_C.ExecuteUbergraph_WPN_Cryospray
struct AWPN_Cryospray_C_ExecuteUbergraph_WPN_Cryospray_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
