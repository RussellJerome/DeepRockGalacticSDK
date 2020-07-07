#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Directional_Damage_Indicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.UpdatePosition
struct UHUD_Directional_Damage_Indicator_C_UpdatePosition_Params
{
	float*                                             InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.SetAngle
struct UHUD_Directional_Damage_Indicator_C_SetAngle_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.MoveTowards
struct UHUD_Directional_Damage_Indicator_C_MoveTowards_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Hit
struct UHUD_Directional_Damage_Indicator_C_Hit_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerCharacter**                           Victim;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Tick
struct UHUD_Directional_Damage_Indicator_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Construct
struct UHUD_Directional_Damage_Indicator_C_Construct_Params
{
};

// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.ExecuteUbergraph_HUD_Directional_Damage_Indicator
struct UHUD_Directional_Damage_Indicator_C_ExecuteUbergraph_HUD_Directional_Damage_Indicator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
