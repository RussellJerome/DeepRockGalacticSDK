#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Salvage_Point_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Salvage_Point.BP_Salvage_Point_C.SetSalvagePointState
struct ABP_Salvage_Point_C_SetSalvagePointState_Params
{
	unsigned char*                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Salvage_Point.BP_Salvage_Point_C.OnRep_State
struct ABP_Salvage_Point_C_OnRep_State_Params
{
};

// Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseComplete
struct ABP_Salvage_Point_C_OnDefenseComplete_Params
{
};

// Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseStart
struct ABP_Salvage_Point_C_OnDefenseStart_Params
{
};

// Function BP_Salvage_Point.BP_Salvage_Point_C.EnableRepair
struct ABP_Salvage_Point_C_EnableRepair_Params
{
};

// Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseFail
struct ABP_Salvage_Point_C_OnDefenseFail_Params
{
};

// Function BP_Salvage_Point.BP_Salvage_Point_C.ExecuteUbergraph_BP_Salvage_Point
struct ABP_Salvage_Point_C_ExecuteUbergraph_BP_Salvage_Point_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
