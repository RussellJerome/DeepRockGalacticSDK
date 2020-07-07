#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_ChargeBlaster_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.FadeOutIfValid
struct AWPN_ChargeBlaster_C_FadeOutIfValid_Params
{
	class UAudioComponent*                             AC;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleHeatAudio
struct AWPN_ChargeBlaster_C_HandleHeatAudio_Params
{
};

// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleChargeAudio
struct AWPN_ChargeBlaster_C_HandleChargeAudio_Params
{
	float*                                             charge;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.GetGearStatEntry
struct AWPN_ChargeBlaster_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.UserConstructionScript
struct AWPN_ChargeBlaster_C_UserConstructionScript_Params
{
};

// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.OnHeatChanged_Event_1
struct AWPN_ChargeBlaster_C_OnHeatChanged_Event_1_Params
{
	float*                                             charge;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ChargeChanged
struct AWPN_ChargeBlaster_C_ChargeChanged_Params
{
	float*                                             charge;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.RecieveUnequipped
struct AWPN_ChargeBlaster_C_RecieveUnequipped_Params
{
};

// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ReceiveOverheatedChanged
struct AWPN_ChargeBlaster_C_ReceiveOverheatedChanged_Params
{
	bool*                                              isOverheated;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.OnSkinChanged
struct AWPN_ChargeBlaster_C_OnSkinChanged_Params
{
	class USkinEffect**                                Skin;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.AddedToInventory
struct AWPN_ChargeBlaster_C_AddedToInventory_Params
{
	class APlayerCharacter**                           ItemOwner;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ExecuteUbergraph_WPN_ChargeBlaster
struct AWPN_ChargeBlaster_C_ExecuteUbergraph_WPN_ChargeBlaster_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
