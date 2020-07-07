#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_ShieldRegeneratorItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.UpdateMaterial
struct AWPN_ShieldRegeneratorItem_C_UpdateMaterial_Params
{
};

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.GetGearStatEntry
struct AWPN_ShieldRegeneratorItem_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.UserConstructionScript
struct AWPN_ShieldRegeneratorItem_C_UserConstructionScript_Params
{
};

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.RecieveStartUsing
struct AWPN_ShieldRegeneratorItem_C_RecieveStartUsing_Params
{
};

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveItemThrown
struct AWPN_ShieldRegeneratorItem_C_ReceiveItemThrown_Params
{
	class AThrowableActor**                            thrownActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorRecharged
struct AWPN_ShieldRegeneratorItem_C_ReceiveGeneratorRecharged_Params
{
};

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorRechargeProgress
struct AWPN_ShieldRegeneratorItem_C_ReceiveGeneratorRechargeProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature
struct AWPN_ShieldRegeneratorItem_C_BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature_Params
{
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature
struct AWPN_ShieldRegeneratorItem_C_BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature_Params
{
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorReturned
struct AWPN_ShieldRegeneratorItem_C_ReceiveGeneratorReturned_Params
{
};

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ExecuteUbergraph_WPN_ShieldRegeneratorItem
struct AWPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
