#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_OxygenRich_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_OxygenRich.BP_OxygenRich_C.StartLogic
struct UBP_OxygenRich_C_StartLogic_Params
{
};

// Function BP_OxygenRich.BP_OxygenRich_C.PlayerSpawned
struct UBP_OxygenRich_C_PlayerSpawned_Params
{
	class APlayerCharacter**                           PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OxygenRich.BP_OxygenRich_C.ExecuteUbergraph_BP_OxygenRich
struct UBP_OxygenRich_C_ExecuteUbergraph_BP_OxygenRich_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
