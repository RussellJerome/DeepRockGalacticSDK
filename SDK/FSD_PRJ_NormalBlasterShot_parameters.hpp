#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_NormalBlasterShot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.OnImpacted
struct APRJ_NormalBlasterShot_C_OnImpacted_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.MakeBouncy
struct APRJ_NormalBlasterShot_C_MakeBouncy_Params
{
};

// Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
struct APRJ_NormalBlasterShot_C_BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params
{
	struct FHitResult*                                 ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.DoEffects
struct APRJ_NormalBlasterShot_C_DoEffects_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.ExecuteUbergraph_PRJ_NormalBlasterShot
struct APRJ_NormalBlasterShot_C_ExecuteUbergraph_PRJ_NormalBlasterShot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
