#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_EnemyTargeting_Temperature_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.SetColors
struct UHUD_EnemyTargeting_Temperature_C_SetColors_Params
{
	struct FLinearColor*                               Fill_Color;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               BackgroundColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Revert;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.SetTemperatureEffect
struct UHUD_EnemyTargeting_Temperature_C_SetTemperatureEffect_Params
{
	float*                                             InEffect;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.Tick
struct UHUD_EnemyTargeting_Temperature_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.PreConstruct
struct UHUD_EnemyTargeting_Temperature_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.ExecuteUbergraph_HUD_EnemyTargeting_Temperature
struct UHUD_EnemyTargeting_Temperature_C_ExecuteUbergraph_HUD_EnemyTargeting_Temperature_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
