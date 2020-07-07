#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ScreenOverlay_HealthDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.CheckForLowHealth
struct UScreenOverlay_HealthDamage_C_CheckForLowHealth_Params
{
	float*                                             StartAnimTime;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Begin Splat
struct UScreenOverlay_HealthDamage_C_Begin_Splat_Params
{
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Tick
struct UScreenOverlay_HealthDamage_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnDamageTaken_Event
struct UScreenOverlay_HealthDamage_C_OnDamageTaken_Event_Params
{
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnCharacterStateChanged
struct UScreenOverlay_HealthDamage_C_OnCharacterStateChanged_Params
{
	ECharacterState*                                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.End Splat
struct UScreenOverlay_HealthDamage_C_End_Splat_Params
{
};

// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnCameraModeChanged
struct UScreenOverlay_HealthDamage_C_OnCameraModeChanged_Params
{
	ECharacterCameraMode*                              NewCameraMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECharacterCameraMode*                              OldCameraMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.UpdateBloodColor
struct UScreenOverlay_HealthDamage_C_UpdateBloodColor_Params
{
	bool*                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Construct
struct UScreenOverlay_HealthDamage_C_Construct_Params
{
};

// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnUpdateHealthImage
struct UScreenOverlay_HealthDamage_C_OnUpdateHealthImage_Params
{
	float*                                             Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.ExecuteUbergraph_ScreenOverlay_HealthDamage
struct UScreenOverlay_HealthDamage_C_ExecuteUbergraph_ScreenOverlay_HealthDamage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
