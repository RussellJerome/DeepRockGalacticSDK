#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_HeightenedSenses_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_HeightenedSenses.BP_HeightenedSenses_C.Receive_OnInitialized
struct UBP_HeightenedSenses_C_Receive_OnInitialized_Params
{
};

// Function BP_HeightenedSenses.BP_HeightenedSenses_C.OnKilledGrabber_Event
struct UBP_HeightenedSenses_C_OnKilledGrabber_Event_Params
{
	class AActor**                                     Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HeightenedSenses.BP_HeightenedSenses_C.ExecuteUbergraph_BP_HeightenedSenses
struct UBP_HeightenedSenses_C_ExecuteUbergraph_BP_HeightenedSenses_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
