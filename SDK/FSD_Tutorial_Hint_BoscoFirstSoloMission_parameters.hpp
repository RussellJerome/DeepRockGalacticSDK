#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_BoscoFirstSoloMission_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tutorial_Hint_BoscoFirstSoloMission.Tutorial_Hint_BoscoFirstSoloMission_C.ReceiveOnInitialized
struct UTutorial_Hint_BoscoFirstSoloMission_C_ReceiveOnInitialized_Params
{
};

// Function Tutorial_Hint_BoscoFirstSoloMission.Tutorial_Hint_BoscoFirstSoloMission_C.OnLaserPointerEvent
struct UTutorial_Hint_BoscoFirstSoloMission_C_OnLaserPointerEvent_Params
{
	struct FLaserPointerTarget*                        HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Tutorial_Hint_BoscoFirstSoloMission.Tutorial_Hint_BoscoFirstSoloMission_C.ExecuteUbergraph_Tutorial_Hint_BoscoFirstSoloMission
struct UTutorial_Hint_BoscoFirstSoloMission_C_ExecuteUbergraph_Tutorial_Hint_BoscoFirstSoloMission_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
