#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_LineCutter2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.AdjustLineSize
struct APRJ_LineCutter2_C_AdjustLineSize_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.UserConstructionScript
struct APRJ_LineCutter2_C_UserConstructionScript_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ProjectileSlowdown__FinishedFunc
struct APRJ_LineCutter2_C_ProjectileSlowdown__FinishedFunc_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ProjectileSlowdown__UpdateFunc
struct APRJ_LineCutter2_C_ProjectileSlowdown__UpdateFunc_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ReceiveBeginPlay
struct APRJ_LineCutter2_C_ReceiveBeginPlay_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ExpandLine
struct APRJ_LineCutter2_C_ExpandLine_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.DoDamage
struct APRJ_LineCutter2_C_DoDamage_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ReceiveEndPlay
struct APRJ_LineCutter2_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.StartLineExpansion
struct APRJ_LineCutter2_C_StartLineExpansion_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.CheckTerrainCall
struct APRJ_LineCutter2_C_CheckTerrainCall_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.Set Line Size Event
struct APRJ_LineCutter2_C_Set_Line_Size_Event_Params
{
	float*                                             MaxSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxSizeVisual;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.Multiply Line Size
struct APRJ_LineCutter2_C_Multiply_Line_Size_Params
{
	float*                                             Multiplier;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.K2_OnReset
struct APRJ_LineCutter2_C_K2_OnReset_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.LinelifespanDestroy
struct APRJ_LineCutter2_C_LinelifespanDestroy_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.Explode
struct APRJ_LineCutter2_C_Explode_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.LineReducing
struct APRJ_LineCutter2_C_LineReducing_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ThereCanBeOnlyOne
struct APRJ_LineCutter2_C_ThereCanBeOnlyOne_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.DisableProjectile
struct APRJ_LineCutter2_C_DisableProjectile_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.Add Line Size
struct APRJ_LineCutter2_C_Add_Line_Size_Params
{
	float*                                             Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.OnClientInitialized
struct APRJ_LineCutter2_C_OnClientInitialized_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.OnLineDestroyed
struct APRJ_LineCutter2_C_OnLineDestroyed_Params
{
	struct FHitResult*                                 Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.SetExtraBeamVisibility
struct APRJ_LineCutter2_C_SetExtraBeamVisibility_Params
{
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.LeaveTrail
struct APRJ_LineCutter2_C_LeaveTrail_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.StartSpawningTrail
struct APRJ_LineCutter2_C_StartSpawningTrail_Params
{
};

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ExecuteUbergraph_PRJ_LineCutter2
struct APRJ_LineCutter2_C_ExecuteUbergraph_PRJ_LineCutter2_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
