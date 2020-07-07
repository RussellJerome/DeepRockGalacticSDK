#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Milestone_Manager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.PreConstruct
struct UHUD_Milestone_Manager_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.OnMilestoneReached
struct UHUD_Milestone_Manager_C_OnMilestoneReached_Params
{
};

// Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.ExecuteUbergraph_HUD_Milestone_Manager
struct UHUD_Milestone_Manager_C_ExecuteUbergraph_HUD_Milestone_Manager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
