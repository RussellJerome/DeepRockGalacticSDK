#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ScreenOverlay_ShieldDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Tick
struct UScreenOverlay_ShieldDamage_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnArmorDamaged
struct UScreenOverlay_ShieldDamage_C_OnArmorDamaged_Params
{
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Begin Splat
struct UScreenOverlay_ShieldDamage_C_Begin_Splat_Params
{
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Construct
struct UScreenOverlay_ShieldDamage_C_Construct_Params
{
};

// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnCharacterStateChanged
struct UScreenOverlay_ShieldDamage_C_OnCharacterStateChanged_Params
{
	ECharacterState*                                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.End Splat
struct UScreenOverlay_ShieldDamage_C_End_Splat_Params
{
};

// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnCameraModeChanged
struct UScreenOverlay_ShieldDamage_C_OnCameraModeChanged_Params
{
	ECharacterCameraMode*                              NewCameraMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECharacterCameraMode*                              OldCameraMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.ExecuteUbergraph_ScreenOverlay_ShieldDamage
struct UScreenOverlay_ShieldDamage_C_ExecuteUbergraph_ScreenOverlay_ShieldDamage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
