#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Salvage_Defend_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.UpdateDefenderBlocks
struct UHUD_Salvage_Defend_C_UpdateDefenderBlocks_Params
{
	int*                                               DefenderCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.AddDefendersToArray
struct UHUD_Salvage_Defend_C_AddDefendersToArray_Params
{
};

// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.Construct
struct UHUD_Salvage_Defend_C_Construct_Params
{
};

// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ProgressUpdated
struct UHUD_Salvage_Defend_C_ProgressUpdated_Params
{
	float*                                             NewProgress;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.PreConstruct
struct UHUD_Salvage_Defend_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.DefendersUpdated
struct UHUD_Salvage_Defend_C_DefendersUpdated_Params
{
	int*                                               DefenderCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.success
struct UHUD_Salvage_Defend_C_success_Params
{
};

// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ExecuteUbergraph_HUD_Salvage_Defend
struct UHUD_Salvage_Defend_C_ExecuteUbergraph_HUD_Salvage_Defend_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
