#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EVENT_DropPodDefense_Refuel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EVENT_DropPodDefense_Refuel.EVENT_DropPodDefense_Refuel_C.EventSucceded
struct AEVENT_DropPodDefense_Refuel_C_EventSucceded_Params
{
};

// Function EVENT_DropPodDefense_Refuel.EVENT_DropPodDefense_Refuel_C.EventFailed
struct AEVENT_DropPodDefense_Refuel_C_EventFailed_Params
{
};

// Function EVENT_DropPodDefense_Refuel.EVENT_DropPodDefense_Refuel_C.ExecuteUbergraph_EVENT_DropPodDefense_Refuel
struct AEVENT_DropPodDefense_Refuel_C_ExecuteUbergraph_EVENT_DropPodDefense_Refuel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
