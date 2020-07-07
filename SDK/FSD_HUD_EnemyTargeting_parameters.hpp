#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_EnemyTargeting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.UpdateScreenPosition
struct UHUD_EnemyTargeting_C_UpdateScreenPosition_Params
{
};

// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ClampToScreenHeight
struct UHUD_EnemyTargeting_C_ClampToScreenHeight_Params
{
	float*                                             CoordinateY;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Bound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ClampedY;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.UpdateHealthBars
struct UHUD_EnemyTargeting_C_UpdateHealthBars_Params
{
	bool*                                              Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.HandleTargetDamaged
struct UHUD_EnemyTargeting_C_HandleTargetDamaged_Params
{
	TScriptInterface<class UHealth>*                   Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageModifier;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HealthRemaining;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.UpdateCurrentTarget
struct UHUD_EnemyTargeting_C_UpdateCurrentTarget_Params
{
};

// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.SetIsVisible
struct UHUD_EnemyTargeting_C_SetIsVisible_Params
{
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveTargetLost
struct UHUD_EnemyTargeting_C_ReceiveTargetLost_Params
{
};

// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveUpdateTarget
struct UHUD_EnemyTargeting_C_ReceiveUpdateTarget_Params
{
	class AActor**                                     InCurrentTarget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveNewTarget
struct UHUD_EnemyTargeting_C_ReceiveNewTarget_Params
{
	class AActor**                                     InCurrentTarget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.Construct
struct UHUD_EnemyTargeting_C_Construct_Params
{
};

// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.OnDamagedEnemy
struct UHUD_EnemyTargeting_C_OnDamagedEnemy_Params
{
	TScriptInterface<class UHealth>*                   EnemyHealth;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageModifier;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HealthRemaining;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.PreConstruct
struct UHUD_EnemyTargeting_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.OnWeakPointHitFinished
struct UHUD_EnemyTargeting_C_OnWeakPointHitFinished_Params
{
};

// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ExecuteUbergraph_HUD_EnemyTargeting
struct UHUD_EnemyTargeting_C_ExecuteUbergraph_HUD_EnemyTargeting_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
