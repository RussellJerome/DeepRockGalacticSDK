#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Directional_Damage_IndicatorV2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.UpdatePoints
struct UHUD_Directional_Damage_IndicatorV2_C_UpdatePoints_Params
{
};

// Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.CalcFadeStrength
struct UHUD_Directional_Damage_IndicatorV2_C_CalcFadeStrength_Params
{
	float*                                             TimeLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HitSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.OnHit
struct UHUD_Directional_Damage_IndicatorV2_C_OnHit_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageClass**                               DamageClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              anyHealthLost;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.Tick
struct UHUD_Directional_Damage_IndicatorV2_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.Construct
struct UHUD_Directional_Damage_IndicatorV2_C_Construct_Params
{
};

// Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.ExecuteUbergraph_HUD_Directional_Damage_IndicatorV2
struct UHUD_Directional_Damage_IndicatorV2_C_ExecuteUbergraph_HUD_Directional_Damage_IndicatorV2_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
