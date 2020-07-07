#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SentryGun_Redeployable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UpdateIndicatorLight
struct ABP_SentryGun_Redeployable_C_UpdateIndicatorLight_Params
{
	bool*                                              FiredShot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ConditionallyEnableShadows
struct ABP_SentryGun_Redeployable_C_ConditionallyEnableShadows_Params
{
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.GetDeployProgress
struct ABP_SentryGun_Redeployable_C_GetDeployProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ToggleBuildMode
struct ABP_SentryGun_Redeployable_C_ToggleBuildMode_Params
{
	bool*                                              InBuilding;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UserConstructionScript
struct ABP_SentryGun_Redeployable_C_UserConstructionScript_Params
{
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Timeline_0__FinishedFunc
struct ABP_SentryGun_Redeployable_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Timeline_0__UpdateFunc
struct ABP_SentryGun_Redeployable_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDeploy
struct ABP_SentryGun_Redeployable_C_ReceiveOnDeploy_Params
{
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDismantle
struct ABP_SentryGun_Redeployable_C_ReceiveOnDismantle_Params
{
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDismantled
struct ABP_SentryGun_Redeployable_C_ReceiveOnDismantled_Params
{
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDeployed
struct ABP_SentryGun_Redeployable_C_ReceiveOnDeployed_Params
{
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
struct ABP_SentryGun_Redeployable_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature
struct ABP_SentryGun_Redeployable_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveBeginPlay
struct ABP_SentryGun_Redeployable_C_ReceiveBeginPlay_Params
{
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnSentryGunOwnerChanged
struct ABP_SentryGun_Redeployable_C_ReceiveOnSentryGunOwnerChanged_Params
{
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ActivateSpecialAttack
struct ABP_SentryGun_Redeployable_C_ActivateSpecialAttack_Params
{
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Multicast Special Attack GFX
struct ABP_SentryGun_Redeployable_C_Multicast_Special_Attack_GFX_Params
{
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Reset Special Attack
struct ABP_SentryGun_Redeployable_C_Reset_Special_Attack_Params
{
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UpdateShadows
struct ABP_SentryGun_Redeployable_C_UpdateShadows_Params
{
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature
struct ABP_SentryGun_Redeployable_C_BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveAmmoChanged
struct ABP_SentryGun_Redeployable_C_ReceiveAmmoChanged_Params
{
	int*                                               Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               currentAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ExecuteUbergraph_BP_SentryGun_Redeployable
struct ABP_SentryGun_Redeployable_C_ExecuteUbergraph_BP_SentryGun_Redeployable_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
