#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DonkeyDestinationMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.ActivateAtPosition
struct ABP_DonkeyDestinationMarker_C_ActivateAtPosition_Params
{
	struct FVector*                                    Loc;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.HideMarker
struct ABP_DonkeyDestinationMarker_C_HideMarker_Params
{
};

// Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.ExecuteUbergraph_BP_DonkeyDestinationMarker
struct ABP_DonkeyDestinationMarker_C_ExecuteUbergraph_BP_DonkeyDestinationMarker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
