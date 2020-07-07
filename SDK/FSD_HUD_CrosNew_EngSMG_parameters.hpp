#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_CrosNew_EngSMG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_CrosNew_EngSMG.HUD_CrosNew_EngSMG_C.SetData
struct UHUD_CrosNew_EngSMG_C_SetData_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosNew_EngSMG.HUD_CrosNew_EngSMG_C.OnSpreadChanged
struct UHUD_CrosNew_EngSMG_C_OnSpreadChanged_Params
{
	float*                                             HorizontalSpread;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             VerticalSpread;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isAtRest;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosNew_EngSMG.HUD_CrosNew_EngSMG_C.Construct
struct UHUD_CrosNew_EngSMG_C_Construct_Params
{
};

// Function HUD_CrosNew_EngSMG.HUD_CrosNew_EngSMG_C.PreConstruct
struct UHUD_CrosNew_EngSMG_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosNew_EngSMG.HUD_CrosNew_EngSMG_C.OnDamagedEnemy_Event
struct UHUD_CrosNew_EngSMG_C_OnDamagedEnemy_Event_Params
{
	TScriptInterface<class UHealth>*                   EnemyHealth;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageModifier;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HealthRemaining;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosNew_EngSMG.HUD_CrosNew_EngSMG_C.ExecuteUbergraph_HUD_CrosNew_EngSMG
struct UHUD_CrosNew_EngSMG_C_ExecuteUbergraph_HUD_CrosNew_EngSMG_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
