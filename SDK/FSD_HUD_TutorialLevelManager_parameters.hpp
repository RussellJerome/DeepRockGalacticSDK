#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_TutorialLevelManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_TutorialLevelManager.HUD_TutorialLevelManager_C.OnNewActiveTutorial
struct UHUD_TutorialLevelManager_C_OnNewActiveTutorial_Params
{
	class UTutorialContentWidget**                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_TutorialLevelManager.HUD_TutorialLevelManager_C.Construct
struct UHUD_TutorialLevelManager_C_Construct_Params
{
};

// Function HUD_TutorialLevelManager.HUD_TutorialLevelManager_C.ExecuteUbergraph_HUD_TutorialLevelManager
struct UHUD_TutorialLevelManager_C_ExecuteUbergraph_HUD_TutorialLevelManager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
