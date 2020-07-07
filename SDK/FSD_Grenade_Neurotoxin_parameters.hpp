#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Grenade_Neurotoxin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Grenade_Neurotoxin.Grenade_Neurotoxin_C.AddGearStateEntries
struct AGrenade_Neurotoxin_C_AddGearStateEntries_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Grenade_Neurotoxin.Grenade_Neurotoxin_C.OnExploded
struct AGrenade_Neurotoxin_C_OnExploded_Params
{
};

// Function Grenade_Neurotoxin.Grenade_Neurotoxin_C.ExecuteUbergraph_Grenade_Neurotoxin
struct AGrenade_Neurotoxin_C_ExecuteUbergraph_Grenade_Neurotoxin_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
