#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_FlareGun_Projectile01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.GetImpactEmitter
struct APRJ_FlareGun_Projectile01_C_GetImpactEmitter_Params
{
	class UFSDPhysicalMaterial**                       self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.UpdateShadowRadius
struct APRJ_FlareGun_Projectile01_C_UpdateShadowRadius_Params
{
};

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.StartFadeOut
struct APRJ_FlareGun_Projectile01_C_StartFadeOut_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.GetHealthBaseComponentFromActor
struct APRJ_FlareGun_Projectile01_C_GetHealthBaseComponentFromActor_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UHealthComponentBase*                        Health;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.FallToGround
struct APRJ_FlareGun_Projectile01_C_FallToGround_Params
{
};

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__FinishedFunc
struct APRJ_FlareGun_Projectile01_C_Light_Anim__FinishedFunc_Params
{
};

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__UpdateFunc
struct APRJ_FlareGun_Projectile01_C_Light_Anim__UpdateFunc_Params
{
};

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnImpacted
struct APRJ_FlareGun_Projectile01_C_OnImpacted_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
struct APRJ_FlareGun_Projectile01_C_BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature_Params
{
};

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnDroppodImpact
struct APRJ_FlareGun_Projectile01_C_OnDroppodImpact_Params
{
	class AMiningPod**                                 DropPod;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.HideAll
struct APRJ_FlareGun_Projectile01_C_HideAll_Params
{
};

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnFlareExtinguish
struct APRJ_FlareGun_Projectile01_C_OnFlareExtinguish_Params
{
};

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnUpdateShadowRadius
struct APRJ_FlareGun_Projectile01_C_OnUpdateShadowRadius_Params
{
};

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ReleaseFlare
struct APRJ_FlareGun_Projectile01_C_ReleaseFlare_Params
{
};

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ActivateFlare
struct APRJ_FlareGun_Projectile01_C_ActivateFlare_Params
{
};

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ExecuteUbergraph_PRJ_FlareGun_Projectile01
struct APRJ_FlareGun_Projectile01_C_ExecuteUbergraph_PRJ_FlareGun_Projectile01_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
