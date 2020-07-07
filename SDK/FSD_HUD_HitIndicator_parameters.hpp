#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_HitIndicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_HitIndicator.HUD_HitIndicator_C.StartAnimation
struct UHUD_HitIndicator_C_StartAnimation_Params
{
	int*                                               Priority;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowKillImage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_HitIndicator.HUD_HitIndicator_C.OnDamagedEnemy_Event
struct UHUD_HitIndicator_C_OnDamagedEnemy_Event_Params
{
	TScriptInterface<class UHealth>*                   EnemyHealth;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageModifier;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HealthRemaining;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_HitIndicator.HUD_HitIndicator_C.Construct
struct UHUD_HitIndicator_C_Construct_Params
{
};

// Function HUD_HitIndicator.HUD_HitIndicator_C.OnHitAnimStarted
struct UHUD_HitIndicator_C_OnHitAnimStarted_Params
{
};

// Function HUD_HitIndicator.HUD_HitIndicator_C.OnHitAnimFinished
struct UHUD_HitIndicator_C_OnHitAnimFinished_Params
{
};

// Function HUD_HitIndicator.HUD_HitIndicator_C.PreConstruct
struct UHUD_HitIndicator_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_HitIndicator.HUD_HitIndicator_C.ExecuteUbergraph_HUD_HitIndicator
struct UHUD_HitIndicator_C_ExecuteUbergraph_HUD_HitIndicator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
