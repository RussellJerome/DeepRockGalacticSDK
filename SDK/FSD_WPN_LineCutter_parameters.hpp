#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_LineCutter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_LineCutter.WPN_LineCutter_C.GetGearStatEntry
struct AWPN_LineCutter_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_LineCutter.WPN_LineCutter_C.UserConstructionScript
struct AWPN_LineCutter_C_UserConstructionScript_Params
{
};

// Function WPN_LineCutter.WPN_LineCutter_C.Flicker Brightness__FinishedFunc
struct AWPN_LineCutter_C_Flicker_Brightness__FinishedFunc_Params
{
};

// Function WPN_LineCutter.WPN_LineCutter_C.Flicker Brightness__UpdateFunc
struct AWPN_LineCutter_C_Flicker_Brightness__UpdateFunc_Params
{
};

// Function WPN_LineCutter.WPN_LineCutter_C.ReceiveBeginPlay
struct AWPN_LineCutter_C_ReceiveBeginPlay_Params
{
};

// Function WPN_LineCutter.WPN_LineCutter_C.OnFireWhileLastProjectileAlive
struct AWPN_LineCutter_C_OnFireWhileLastProjectileAlive_Params
{
	class ALineCutterProjectile**                      Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_LineCutter.WPN_LineCutter_C.ExecuteUbergraph_WPN_LineCutter
struct AWPN_LineCutter_C_ExecuteUbergraph_WPN_LineCutter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
