#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_CrosNewSuperShotgun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_CrosNewSuperShotgun.HUD_CrosNewSuperShotgun_C.OnSpreadChanged
struct UHUD_CrosNewSuperShotgun_C_OnSpreadChanged_Params
{
	float*                                             HorizontalSpread;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             VerticalSpread;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isAtRest;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosNewSuperShotgun.HUD_CrosNewSuperShotgun_C.PreConstruct
struct UHUD_CrosNewSuperShotgun_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosNewSuperShotgun.HUD_CrosNewSuperShotgun_C.OnDamagedEnemy_Event
struct UHUD_CrosNewSuperShotgun_C_OnDamagedEnemy_Event_Params
{
	TScriptInterface<class UHealth>*                   EnemyHealth;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageModifier;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HealthRemaining;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosNewSuperShotgun.HUD_CrosNewSuperShotgun_C.SetData
struct UHUD_CrosNewSuperShotgun_C_SetData_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosNewSuperShotgun.HUD_CrosNewSuperShotgun_C.Construct
struct UHUD_CrosNewSuperShotgun_C_Construct_Params
{
};

// Function HUD_CrosNewSuperShotgun.HUD_CrosNewSuperShotgun_C.ExecuteUbergraph_HUD_CrosNewSuperShotgun
struct UHUD_CrosNewSuperShotgun_C_ExecuteUbergraph_HUD_CrosNewSuperShotgun_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
