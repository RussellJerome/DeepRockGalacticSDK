#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_Pickaxe_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_Pickaxe.WPN_Pickaxe_C.GetGearStatEntry
struct AWPN_Pickaxe_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_Pickaxe.WPN_Pickaxe_C.SpecialTargetDamageEffects
struct AWPN_Pickaxe_C_SpecialTargetDamageEffects_Params
{
	struct FVector*                                    ImpactPoint;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ImpactNormal;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WPN_Pickaxe.WPN_Pickaxe_C.ReceiveBeginPlay
struct AWPN_Pickaxe_C_ReceiveBeginPlay_Params
{
};

// Function WPN_Pickaxe.WPN_Pickaxe_C.ExecuteUbergraph_WPN_Pickaxe
struct AWPN_Pickaxe_C_ExecuteUbergraph_WPN_Pickaxe_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
