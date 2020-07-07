#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_GrapplingGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetGearStatEntry
struct AWPN_GrapplingGun_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.CalculateRelaseVelocty
struct AWPN_GrapplingGun_C_CalculateRelaseVelocty_Params
{
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnRep_Pulling
struct AWPN_GrapplingGun_C_OnRep_Pulling_Params
{
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableTransform
struct AWPN_GrapplingGun_C_GetCableTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.SetCableEndPoint
struct AWPN_GrapplingGun_C_SetCableEndPoint_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableParent
struct AWPN_GrapplingGun_C_GetCableParent_Params
{
	class USceneComponent*                             Muzzle;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ToggleCable
struct AWPN_GrapplingGun_C_ToggleCable_Params
{
	bool*                                              bNewVisibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetAimView
struct AWPN_GrapplingGun_C_GetAimView_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Forward;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.UserConstructionScript
struct AWPN_GrapplingGun_C_UserConstructionScript_Params
{
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__FinishedFunc
struct AWPN_GrapplingGun_C_ProjectileMovement__FinishedFunc_Params
{
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__UpdateFunc
struct AWPN_GrapplingGun_C_ProjectileMovement__UpdateFunc_Params
{
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ReceiveTick
struct AWPN_GrapplingGun_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.Multicast Shoot
struct AWPN_GrapplingGun_C_Multicast_Shoot_Params
{
	struct FVector*                                    Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveStartUsing
struct AWPN_GrapplingGun_C_RecieveStartUsing_Params
{
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveUnequipped
struct AWPN_GrapplingGun_C_RecieveUnequipped_Params
{
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveStopUsing
struct AWPN_GrapplingGun_C_RecieveStopUsing_Params
{
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.Stop Pulling
struct AWPN_GrapplingGun_C_Stop_Pulling_Params
{
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ServerShoot
struct AWPN_GrapplingGun_C_ServerShoot_Params
{
	struct FVector*                                    Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.AddedToInventory
struct AWPN_GrapplingGun_C_AddedToInventory_Params
{
	class APlayerCharacter**                           ItemOwner;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ReceiveBeginPlay
struct AWPN_GrapplingGun_C_ReceiveBeginPlay_Params
{
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.Init Character
struct AWPN_GrapplingGun_C_Init_Character_Params
{
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnDeath
struct AWPN_GrapplingGun_C_OnDeath_Params
{
	class UHealthComponentBase**                       HealthComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveCycledItem
struct AWPN_GrapplingGun_C_RecieveCycledItem_Params
{
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.Gunsling
struct AWPN_GrapplingGun_C_Gunsling_Params
{
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.Try Equip Previous Item
struct AWPN_GrapplingGun_C_Try_Equip_Previous_Item_Params
{
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.StopPullingLocal
struct AWPN_GrapplingGun_C_StopPullingLocal_Params
{
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature
struct AWPN_GrapplingGun_C_BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ExecuteUbergraph_WPN_GrapplingGun
struct AWPN_GrapplingGun_C_ExecuteUbergraph_WPN_GrapplingGun_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
