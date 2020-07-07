#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Salvage_FuelPoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.EnableRepair
struct ABP_Salvage_FuelPoint_C_EnableRepair_Params
{
};

// Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseStart
struct ABP_Salvage_FuelPoint_C_OnDefenseStart_Params
{
};

// Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseComplete
struct ABP_Salvage_FuelPoint_C_OnDefenseComplete_Params
{
};

// Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseFail
struct ABP_Salvage_FuelPoint_C_OnDefenseFail_Params
{
};

// Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.ExecuteUbergraph_BP_Salvage_FuelPoint
struct ABP_Salvage_FuelPoint_C_ExecuteUbergraph_BP_Salvage_FuelPoint_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
