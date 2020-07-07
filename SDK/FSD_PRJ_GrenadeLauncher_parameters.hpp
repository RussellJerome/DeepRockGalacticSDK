#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_GrenadeLauncher_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.LaunchPlayer
struct APRJ_GrenadeLauncher_C_LaunchPlayer_Params
{
	class APlayerCharacter**                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.OnRep_Lit
struct APRJ_GrenadeLauncher_C_OnRep_Lit_Params
{
};

// Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.UserConstructionScript
struct APRJ_GrenadeLauncher_C_UserConstructionScript_Params
{
};

// Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.OnImpacted
struct APRJ_GrenadeLauncher_C_OnImpacted_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct APRJ_GrenadeLauncher_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.MakeBouncy
struct APRJ_GrenadeLauncher_C_MakeBouncy_Params
{
};

// Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.Trigger
struct APRJ_GrenadeLauncher_C_Trigger_Params
{
	struct FHitResult*                                 HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.ExecuteUbergraph_PRJ_GrenadeLauncher
struct APRJ_GrenadeLauncher_C_ExecuteUbergraph_PRJ_GrenadeLauncher_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
