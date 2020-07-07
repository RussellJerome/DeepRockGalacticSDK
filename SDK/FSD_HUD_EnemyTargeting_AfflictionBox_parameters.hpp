#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_EnemyTargeting_AfflictionBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.SetAfflictionComponent
struct UHUD_EnemyTargeting_AfflictionBox_C_SetAfflictionComponent_Params
{
	class UPawnAfflictionComponent**                   InAfflictionComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleIgnoreAfflictions
struct UHUD_EnemyTargeting_AfflictionBox_C_ToggleIgnoreAfflictions_Params
{
	TArray<class UPawnAffliction*>                     affliction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              ShouldIgnore;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleIgnoreAffliction
struct UHUD_EnemyTargeting_AfflictionBox_C_ToggleIgnoreAffliction_Params
{
	class UPawnAffliction**                            affliction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShouldIgnore;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ClearAfflictions
struct UHUD_EnemyTargeting_AfflictionBox_C_ClearAfflictions_Params
{
};

// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleAffliction
struct UHUD_EnemyTargeting_AfflictionBox_C_ToggleAffliction_Params
{
	class UPawnAffliction**                            InAffliction;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              inVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.SetTarget
struct UHUD_EnemyTargeting_AfflictionBox_C_SetTarget_Params
{
	class AActor**                                     InAfflictionTarget;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.OnAfflictionActivatedEvent_Event
struct UHUD_EnemyTargeting_AfflictionBox_C_OnAfflictionActivatedEvent_Event_Params
{
	class UPawnAffliction**                            affliction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.OnAfflictionDeactivatedEvent_Event
struct UHUD_EnemyTargeting_AfflictionBox_C_OnAfflictionDeactivatedEvent_Event_Params
{
	class UPawnAffliction**                            affliction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.PreConstruct
struct UHUD_EnemyTargeting_AfflictionBox_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox
struct UHUD_EnemyTargeting_AfflictionBox_C_ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
