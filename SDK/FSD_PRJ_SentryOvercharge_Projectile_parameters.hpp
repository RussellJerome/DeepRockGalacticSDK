#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_SentryOvercharge_Projectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.UserConstructionScript
struct APRJ_SentryOvercharge_Projectile_C_UserConstructionScript_Params
{
};

// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.OnImpacted
struct APRJ_SentryOvercharge_Projectile_C_OnImpacted_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct APRJ_SentryOvercharge_Projectile_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.ReceiveBeginPlay
struct APRJ_SentryOvercharge_Projectile_C_ReceiveBeginPlay_Params
{
};

// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.MakeBouncy
struct APRJ_SentryOvercharge_Projectile_C_MakeBouncy_Params
{
};

// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.ExecuteUbergraph_PRJ_SentryOvercharge_Projectile
struct APRJ_SentryOvercharge_Projectile_C_ExecuteUbergraph_PRJ_SentryOvercharge_Projectile_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
