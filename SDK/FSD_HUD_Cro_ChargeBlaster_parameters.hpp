#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Cro_ChargeBlaster_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.Construct
struct UHUD_Cro_ChargeBlaster_C_Construct_Params
{
};

// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.SetData
struct UHUD_Cro_ChargeBlaster_C_SetData_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.OnSpreadChanged
struct UHUD_Cro_ChargeBlaster_C_OnSpreadChanged_Params
{
	float*                                             HorizontalSpread;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             VerticalSpread;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isAtRest;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.PreConstruct
struct UHUD_Cro_ChargeBlaster_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.OnDamagedEnemy_Event
struct UHUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event_Params
{
	TScriptInterface<class UHealth>*                   EnemyHealth;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageModifier;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HealthRemaining;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.OnChargeChanged
struct UHUD_Cro_ChargeBlaster_C_OnChargeChanged_Params
{
	float*                                             charge;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.ExecuteUbergraph_HUD_Cro_ChargeBlaster
struct UHUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
