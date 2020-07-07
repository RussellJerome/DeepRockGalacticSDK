#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_EnemyTargeting_Affliction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.UpdateTarget
struct UHUD_EnemyTargeting_Affliction_C_UpdateTarget_Params
{
	class UPawnAfflictionComponent**                   InPawnAfflictions;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.SetActive
struct UHUD_EnemyTargeting_Affliction_C_SetActive_Params
{
	bool*                                              Inactive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.Construct
struct UHUD_EnemyTargeting_Affliction_C_Construct_Params
{
};

// Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.PreConstruct
struct UHUD_EnemyTargeting_Affliction_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.OnFadeInFinished
struct UHUD_EnemyTargeting_Affliction_C_OnFadeInFinished_Params
{
};

// Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.ExecuteUbergraph_HUD_EnemyTargeting_Affliction
struct UHUD_EnemyTargeting_Affliction_C_ExecuteUbergraph_HUD_EnemyTargeting_Affliction_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
