#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_MissionControl_TrespassingWarning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MissionControl_TrespassingWarning.BP_MissionControl_TrespassingWarning_C.ReceiveActorBeginOverlap
struct ABP_MissionControl_TrespassingWarning_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionControl_TrespassingWarning.BP_MissionControl_TrespassingWarning_C.ExecuteUbergraph_BP_MissionControl_TrespassingWarning
struct ABP_MissionControl_TrespassingWarning_C_ExecuteUbergraph_BP_MissionControl_TrespassingWarning_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
