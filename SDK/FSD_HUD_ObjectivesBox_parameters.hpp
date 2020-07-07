#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_ObjectivesBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.CreateObjectiveWidget
struct UHUD_ObjectivesBox_C_CreateObjectiveWidget_Params
{
	class UObjective**                                 Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Construct
struct UHUD_ObjectivesBox_C_Construct_Params
{
};

// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnObjectiveAdded
struct UHUD_ObjectivesBox_C_OnObjectiveAdded_Params
{
	class UObjective**                                 Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Add Objective
struct UHUD_ObjectivesBox_C_Add_Objective_Params
{
	class UObjective**                                 Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnObjectiveUpdatedEvent
struct UHUD_ObjectivesBox_C_OnObjectiveUpdatedEvent_Params
{
	class UObjective**                                 Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnLaserPointerPressed
struct UHUD_ObjectivesBox_C_OnLaserPointerPressed_Params
{
};

// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnLaserPointerReleased
struct UHUD_ObjectivesBox_C_OnLaserPointerReleased_Params
{
};

// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.ShowDynamically
struct UHUD_ObjectivesBox_C_ShowDynamically_Params
{
};

// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Setup Deep Dive Label
struct UHUD_ObjectivesBox_C_Setup_Deep_Dive_Label_Params
{
};

// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnGameEventCompletedEvent
struct UHUD_ObjectivesBox_C_OnGameEventCompletedEvent_Params
{
	struct FText*                                      GameEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.SetVisible
struct UHUD_ObjectivesBox_C_SetVisible_Params
{
	bool*                                              inVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              animate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.AnimFinished
struct UHUD_ObjectivesBox_C_AnimFinished_Params
{
};

// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.ExecuteUbergraph_HUD_ObjectivesBox
struct UHUD_ObjectivesBox_C_ExecuteUbergraph_HUD_ObjectivesBox_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
