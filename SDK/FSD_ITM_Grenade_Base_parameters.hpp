#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Grenade_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_Grenade_Base.ITM_Grenade_Base_C.GetGearStatEntry
struct AITM_Grenade_Base_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ITM_Grenade_Base.ITM_Grenade_Base_C.AddGearStateEntries
struct AITM_Grenade_Base_C_AddGearStateEntries_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ITM_Grenade_Base.ITM_Grenade_Base_C.ReceiveBeginPlay
struct AITM_Grenade_Base_C_ReceiveBeginPlay_Params
{
};

// Function ITM_Grenade_Base.ITM_Grenade_Base_C.OnExploded
struct AITM_Grenade_Base_C_OnExploded_Params
{
};

// Function ITM_Grenade_Base.ITM_Grenade_Base_C.ExecuteUbergraph_ITM_Grenade_Base
struct AITM_Grenade_Base_C_ExecuteUbergraph_ITM_Grenade_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
